#faster builds: export MAKEFLAGS=-j8
MD=mkdir -p $(@D)
STRIP ?= strip

0:;$(MAKE) k-dflt && $(MAKE) t #default target
t:o/t;o/t;dy/a.sh;g/0.sh;a19/a.sh;a20/a.sh;e/a.sh #test
c:;rm -rf o k k-libc libk.so k32 k-obsd #clean
w:k o/w/fs.h o/w/k.wasm o/w/index.html $(patsubst w/x/%.k,o/w/x/%.k,$(wildcard w/x/*.k))
h:w o/w/http;cd o/w;./http

k-dflt:; $(MAKE) a N=$@ R=k  O='-O3 -march=native -nostdlib -ffreestanding'                L=''
k-libc:; $(MAKE) a N=$@ R=k  O='-O3 -march=native -Dlibc'                                  L='-lm'
k-obsd:; $(MAKE) a N=$@ R=k  O='-fPIC -Dlibc=1 -DSYS_getcwd=304 -Dstrchrnul=strchr'        L='--static -fno-pie -lm -lc'
libk.so:;$(MAKE) a N=$@ R=$@ O='-O3 -march=native -nostdlib -ffreestanding -fPIC -Dshared' L='-shared'
o/$(N)/%.o:%.c *.h;$(MD);$(CC) @opts $(O) -o $@ -c $<
o/$(N)/bin:$(patsubst %.c,o/$(N)/%.o,$(wildcard *.c));$(CC) $(O) $(L) -o $@ $^;$(STRIP) -R .comment $@ -R '.note*'
a:o/$(N)/bin;cp o/$(N)/bin $(R)

o/t:t/t.c;$(CC) $< -o $@ -Wall -Wno-unused-result -Werror
o/asm/%.s:%.c *.h;$(MD);$(CC) $(O_DFLT) -c $< -o $@ -S -masm=intel

#/usr/lib/llvm-10/bin/wasm-ld must be on $PATH
O_WASM=@opts -Oz -nostdlib -ffreestanding --target=wasm32 -U __SIZEOF_INT128__ -Dwasm -I/usr/include
o/w/%.o:%.c *.h o/w/fs.h;$(MD);clang $(O_WASM) -o $@ -c $<
o/w/k.wasm0:$(patsubst %.c,o/w/%.o,$(wildcard *.c));clang $(O_WASM) -o $@ $^\
 -Wl,--export=main,--export=kinit,--export=rep,--export=open,--export=close,--export=write,--export=evs\
 -Wl,--export=__heap_base,--no-entry,--initial-memory=33554432,--allow-undefined
o/w/k.wasm:o/w/k.wasm0;wasm-opt -Oz $< -o $@ && ls -l $@
o/w/fs.h:repl.k LICENSE|k w/fs.k;$(MD);./k w/fs.k $^ >$@
o/w/x/%.k:w/x/%.k;$(MD);ln -f $< $@
o/w/index.html:w/index.html k w/inl.k w/*.js;$(MD);cd w && ./inl.k index.html *.js >../$@ && cd -
o/w/http:w/http.c;$(MD);$(CC) $< -o $@

# O_32=@opts -m32 -Dlibc
# o/32/%.o:%.c *.h;$(MD);$(CC) $(O_32) -o $@ -c $<
# k32:$(patsubst %.c,o/32/%.o,$(wildcard *.c));$(CC) $(O_32) -o $@ $^ -lgcc -lm

.PHONY: 0 t c x w h a
