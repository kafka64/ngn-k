#include"a.h" // ngn/k, (c) 2019-2023 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
Z I f(I*r,I n){
 Z CO U s[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,139,149,151,157,163,167,173,179,181,191,193,197,199,211,223,
  227,229,233,239,241,251,257,263,269,271,277,281,283,293,307,311,313,317,331,337,347,349,353,359,367,373,379,383,389,397};
 I nr=L(s);W(nr&&n<=s[nr-1],nr--)MC(r,s,4*nr);P(nr<L(s),nr)I k=4,m=3*5*7*11,w=722;C t[2*m-1],a[1<<14];MS(t,0,SZ t);MS(a,0,SZ a);
 i(k,I p=r[i+1],j=p>>1;W(j<m<<3,t[j>>3]|=1<<(j&7);j+=p))cyc(t,m,SZ t);
 for(I u=r[nr-1]+2;u<n;u+=8*SZ a){I v=MIN(n,u+8*SZ a),l=(v-u+1)>>1;MC(a,t+u/2%m*w%m,MIN(m,SZ a));cyc(a,m,SZ a);I i=k+1;
  W(1,I p=r[i++];B((L)p*p>=v)for(I j=(2*p-1-(u+p-1)%(2*p))>>1;j<l;j+=p)a[j>>3]|=1<<(j&7))
  U*b=(V*)a;I(l&31,b[l-1>>5]|=-1<<(l&31))i(l+31>>5,W x=~b[i];I j=-1;W(x,I d=CTZ(x)+1;x>>=d;j+=d;r[nr++]=u+64*i+2*j))}
 return nr;}
A1(qpri,Z CO I h[]={19,89,263,659,1571,3607,8087,17783,38791,83911,180391,385991,821479,1742443,3681017,7753909,16289947,34135883,71378467,148948021,310248149,645155087,1339483993,-1u>>1};
 P(!xtz,et(x))L n=gl(x);P(n-(I)n,ez0())P(n<0,ed0())I i=0;W(h[i]<n,i++)x=aI((16<<i)-8);xn=f(xI,n);x)
