#include"k.h" // ngn/k, (c) 2019-2020 ngn, GNU AGPLv3 - https://bitbucket.org/ngn/k/raw/master/LICENSE
S UI rol(UI x,UI y)_(x<<y|x>>(32-y))
A1(md5,P(!xtC,et(x))
 S O C r[][16]={
  {7,12,17,22,7,12,17,22,7,12,17,22,7,12,17,22,},
  {5,9,14,20,5,9,14,20,5,9,14,20,5,9,14,20,},
  {4,11,16,23,4,11,16,23,4,11,16,23,4,11,16,23,},
  {6,10,15,21,6,10,15,21,6,10,15,21,6,10,15,21},};
 S O UI k[][16]={
  {0xd76aa478,0xe8c7b756,0x242070db,0xc1bdceee,0xf57c0faf,0x4787c62a,0xa8304613,0xfd469501,0x698098d8,0x8b44f7af,0xffff5bb1,0x895cd7be,0x6b901122,0xfd987193,0xa679438e,0x49b40821},
  {0xf61e2562,0xc040b340,0x265e5a51,0xe9b6c7aa,0xd62f105d,0x02441453,0xd8a1e681,0xe7d3fbc8,0x21e1cde6,0xc33707d6,0xf4d50d87,0x455a14ed,0xa9e3e905,0xfcefa3f8,0x676f02d9,0x8d2a4c8a},
  {0xfffa3942,0x8771f681,0x6d9d6122,0xfde5380c,0xa4beea44,0x4bdecfa9,0xf6bb4b60,0xbebfbc70,0x289b7ec6,0xeaa127fa,0xd4ef3085,0x04881d05,0xd9d4d039,0xe6db99e5,0x1fa27cf8,0xc4ac5665},
  {0xf4292244,0x432aff97,0xab9423a7,0xfc93a039,0x655b59c3,0x8f0ccc92,0xffeff47d,0x85845dd1,0x6fa87e4f,0xfe2ce6e0,0xa3014314,0x4e0811a1,0xf7537e82,0xbd3af235,0x2ad7d2bb,0xeb86d391}};
 UL n=xn,m=(n+1+8+63)&~63;x=AN(m,room(x,m-n));xc[n]=128;ms(xc+n+1,0,m-n-9);n*=8;mc(xc+m-8,&n,8);UI v[]={0x67452301,0xefcdab89,0x98badcfe,0x10325476};
 mr2(x,Fj(xn/64,UI a=v[0],b=v[1],c=v[2],d=v[3],t;
  F(16,UI e=rol(a+(b&c|~b&d)+k[0][i]+xi[16*j+   i      ],r[0][i]);a=d;d=c;c=b;b+=e)
  F(16,UI e=rol(a+(d&b|~d&c)+k[1][i]+xi[16*j+(5*i+1)%16],r[1][i]);a=d;d=c;c=b;b+=e)
  F(16,UI e=rol(a+(b^c^d   )+k[2][i]+xi[16*j+(3*i+5)%16],r[2][i]);a=d;d=c;c=b;b+=e)
  F(16,UI e=rol(a+(c^(b|~d))+k[3][i]+xi[16*j+(7*i  )%16],r[3][i]);a=d;d=c;c=b;b+=e)
  v[0]+=a;v[1]+=b;v[2]+=c;v[3]+=d)0);
 aCn((V*)v,16))
