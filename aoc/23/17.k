#!../../k
s:2,n,n:#a:-48+0:"i/17"
R:{(&/x)_!1+|/x}
f:{h,:-h::R x
   H:{(d;i;j):s\x;x,s/(~d),@[i,j;d;(~(0;n)')#h+]}'!*/s
   C:(!*/s){(d;i;j):s\x;(d1;i1;j1):s\y;(+//a[R i,i1;R j,j1])-a[i1;j1]}''H
   t:s#99999
   t[;0;0]:0
   t:,//t
   t:(C(&/+)'@[;H]@)/t
   t:s#t
   &/t[;n-1;n-1]}
f 1 3  /1
f 4 10 /2
