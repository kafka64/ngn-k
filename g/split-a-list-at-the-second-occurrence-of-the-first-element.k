#!../k
/ https://codegolf.stackexchange.com/questions/226877/split-a-list-at-the-second-occurrence-of-the-first-element/226894#226894
f:{(2#*=x)_x}

\l 0.k
t[1 1 9;(,1;1 9)]
t[4 9 4;(4 9;,4)]
t[5 7 5 5;(5 7;5 5)]
t[8 8 0 7;(,8;8 0 7)]
t[7 1 5 7 4 2;(7 1 5;7 4 2)]
t[0 6 9 1 1 0 2;(0 6 9 1 1;0 2)]
t[2 9 3 2 4 2 5 9;(2 9 3;2 4 2 5 9)]
t[0 2 2 3 0 1 0 1;(0 2 2 3;0 1 0 1)]
t[2 7 4 6 2 6 6 4 8 2;(2 7 4 6;2 6 6 4 8 2)]
t[8 2 2 7 5 4 7 0 8 0 7;(8 2 2 7 5 4 7 0;8 0 7)]
t[8 7 8 9 4 2 9 4 5 7 5 1 9;(8 7;8 9 4 2 9 4 5 7 5 1 9)]
t[3 8 1 1 7 3 6 9 7 1 4 3 4;(3 8 1 1 7;3 6 9 7 1 4 3 4)]
t[4 7 0 5 6 5 0 1 7 8 7 8 4 1;(4 7 0 5 6 5 0 1 7 8 7 8;4 1)]
t[2 1 8 0 3 2 2 5 7 9 4 3 5 1 9 6 9;(2 1 8 0 3;2 2 5 7 9 4 3 5 1 9 6 9)]
t[1 1 4 1 2 5 5 3 3 4 3 2 0 8 6 0 3;(,1;1 4 1 2 5 5 3 3 4 3 2 0 8 6 0 3)]
t[4 3 5 2 2 0 6 4 8 6 6 6 7 3 4 8 7 6;(4 3 5 2 2 0 6;4 8 6 6 6 7 3 4 8 7 6)]
