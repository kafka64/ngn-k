#!../../k
\l l.k
d:D 3 1 2 0
m:(0;.'","\*0:"i/15";0;!0;!0)
p:u:22 22
b:.[(-1+2*p)#"?";p;:;"."]
v:&2
f:{m::{~#x 4}T/@[m;3;,;x+1];r:*m 4;m[4]:!0;$[r=2;v::p+d x;];r}
g:{b::.[b;p+:x;:;"."]
   {$[~r:f x;:b::.[b;p+d x;:;"#"];];g d x;f 1 0 3 2 x}'&"?"=b ./:p+/:d;p-:x;}
g 0 0
w:(#:){b::b .[;;:;","]/x;?,/{("."=b ./:)#x+/:d}'x}\,v
*&,/~^w?\:,u
-2+#w
