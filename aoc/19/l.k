\l ../../l/maths.k
D:(|-1 1*)\!2      /cardinal directions
I:{T/(0;x;0;y;!0)} /evaluate intcode
E:99=100!@/|2#     /stop condition
Am:{@[$[y<#x;x;x,(0|y+1-#x)#0];y;:;z]} /list-extending amend
Tf:(+/;*/;</;=/)   /intcode operators
T:{[i;a;r;u;v]     /transition function
 p:(a;::;r+a@)[10!-100 -1000 -10000!'a i]@'i+1 2 3
 c:100!a i
 $[c=3;(a;u):(Am[a;*p;*u];1_u)
   c=4;v,:a@*p
   |/c=5 6;i:$[2!c+~a@*p;a@p@1;3+i]
   -1<j:1 2 7 8?c;a:Am[a;p 2;Tf[j]a 2#p]
   c=9;r+:a@*p]
 (i+0|0 4 4 2 2 0 0 4 4 2 c;a;r;u;v)}.
