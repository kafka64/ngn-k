#!../k
/ https://codegolf.stackexchange.com/questions/212111/find-a-divisibility-pattern/212161#212161
f:{{(n+^k),k:*&(&/x=)'~(n(1+)\y)!''n:*z}[^y?x;x:1+!x]/1}

\l 0.k
T[(1;!0);1 0]
T[(1;,1);1 1]
T[(2;!0);2 0]
T[(2;,1);3 1]
T[(2;,2);1 0]
T[(2;1 2);1 1]
T[(4;1 2 4);5 2]
T[(4;1 3 4);3 1]
T[(5;1 5);168 4]
T[(5;2 5);20 1]
T[(5;3 4);6 1]
T[(5;2 3 4 5);1 0]
/T[(6;,1);3960 6] /slow
T[(8;2 3 6 7);616 3]
T[(8;1 3 5 7 8);105 1]
/T[(8;1 2 3 4 5);5814 11] /slow
T[(9;2 3 5 7);420 6]
T[(14;3 4 6 7 8 9 10 12 13 14);72 7]
