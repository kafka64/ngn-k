#!../k
u8d:{i:-1+\0<t:0 2 3 4 1@0x80c0e0f000'x;@[&1+-1|*|i;i;+;(x-0x8000c0e0f0 t)*1 1 64 4096 262144@|/(|-!4)+(#t)':(&3),t]}
u8e:{@[(`c$x)@&m;,/,/1 2 3(1+)\'(0,+\m)i;:;,/`c$0xc080e08080f0808080+,/(0 64\;0 64 64\;0 64 64 64\)@'x i:&'2 3 4=\:m:2+128 2048 65536'x]}

/
x~u8e u8d x:"Salut Привет 你好 🖖"
X~u8e Y:u8d X:((#x)*(-#x)!_1e6)#x
-
\t:100 u8d X
\t:100 u8e Y
