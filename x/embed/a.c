#include<stdio.h>
#include"../../k.h"

K add(K x,K y){
 printf("add()\n");
 int a=iK(x);
 int b=iK(y);
 int c=a+b;
 return Ki(c);
}

static void init() __attribute__((constructor));
void init() {
 printf("kinit()\n"); kinit();
 printf("KR()\n");    KR("add",add,2);

}

int main(){
 setbuf(stdout,0);
 printf("Kx()\n");    Kx("`0:$add[2;3]");
 printf("return\n");  return 0;
}
