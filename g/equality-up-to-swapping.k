#!../k
/ https://codegolf.stackexchange.com/questions/216430/equality-up-to-swapping/216462#216462
f:{~/x@'<'*''x}

\l 0.k
t[(,();,());1]
t[(,();,0 1);0]
t[(,0 1;,0 1);1]
t[(,0 1;,1 0);0]
t[(,1 0;,1 0);1]
t[((1 2;1 3);(1 2;1 3));1]
t[((1 2;1 3);(1 3;1 2));0]
t[((1 2;1 3);(1 2;1 3;0 0));0]
t[((0 1;1 2;2 3);(2 3;1 2;0 1));1]
t[((1 1;1 2;2 3);(2 3;1 2;0 1));0]
t[((1 2;0 2;2 3);(2 3;1 2;0 1));0]
t[((1 2;2 3;0 2);(2 3;1 2;0 1));0]
t[((1 1;1 2;1 3);(1 1;1 2;1 3));1]
t[((3 1;1 2;1 3);(1 2;1 3;3 1));1]
t[((3 1;1 2;1 3);(1 3;1 2;3 1));0]
t[((2 1;3 1;1 1;4 1);(3 1;4 1;1 1));0]
t[((2 1;4 1;3 1;1 1);(3 1;1 1;2 1;4 1));1]
t[((2 1;3 1;1 1;4 1);(3 1;2 1;4 1;1 1));1]
