#!../k
/ https://codegolf.stackexchange.com/questions/171747/a-simple-matrix-puzzle/171748#171748
f:{a@&y=x{+//x*(&/'b)&\:&/b:~x=y}/:a:,/x}
\l 0.k
g:f;f:{r@<r:?g[x;y]} / wrapper function to sort-uniq the result
T[((6 1 5;1 2 8;9 8 5;6 0 4);9);1 5]
T[((7 2;1 4);7);,4]
T[((12 5 2 3;17 11 18 8);43);,5]
T[((7 12;10 5;0 13);17);0 13]
T[((1 1 0 1;2 0 0 2;2 0 1 0);1);,2]
T[((57 8 33 84;84 78 19 14;43 14 81 30);236);19 43 57]
T[((2 5 8;3 5 8;10 8 5;10 6 7;10 6 4);49);2 3 4 7]
T[((5 4 0;3 0 4;8 2 2);8);0 2 3 4 5 8]
