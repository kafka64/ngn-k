// ngn/k, (c) 2019-2021 ngn, GNU AGPLv3 - https://git.sr.ht/~ngn/k/blob/master/LICENSE
#include"a.h"
#include<sys/mman.h>
#ifndef MAP_NORESERVE
 #define MAP_NORESERVE 0 //freebsd
#endif

S I nm;S ST{V*p;Ln;}m[8];SN A0(oom,die("oom\n"))
S V*mm(V*p,Nn,I f)_(p=mmap(p,n,PROT_READ|PROT_WRITE,MAP_NORESERVE|MAP_PRIVATE|(f<0?MAP_ANON:MAP_FIXED),f,0);
 P((L)p==-1,eo0();(V*)0)P(f>0,p)Y(nm==ZZ(m),die("mmap lmt\n"))*(C*)p=nm;m[nm++]=(TY(m[0])){p,n};p)
S A mu(V*p,Nn)_(munmap(p,n);i(ZZ(m),Y(m[i].p==p,mc(m+i,m+i+1,(--nm-i)*Z m[0]);BR));0)
S A mx(Nn)_(V*p=mm(0,n,-1);P(!p,oom())*(C*)p=0;(A)(p+ZA))
A mf(I f,Nn)_(V*p=mm(0,ZP+n,-1);P(!p,0)Ax=(A)(p+ZP);ms(p,0,ZA);*(C*)p=1;x=AT(tC,AN(n,x));xR;P(!mm(p+ZP,n,f),x(0))x)

#define xX xA[-3]
Au[35];L mU;S I lck;S A mb(Cb,Ax)_(xX=0;dbg(AN(-1,x));bkt(x)=b;x)
S A ma(Cb)_(Q(!lck);P(b>ZZ(u),oom())Ax=u[b];Ii=b;W(!u[i],i++)
 Y(i<ZZ(u)-1,x=u[i];u[i]=xX)E(x=mb(b,mx(ZA<<(i=max(b,24))))) Y(b<i,bkt(x)=b;W(b<i--,u[i]=mb(i,(A)(x+(ZA<<i)))))x)
A1(m0,dbg(lck++);Q(x);XP(0)Q(xr>0);P(--xr,0)Cb=bkt(x);P(!b,x=AT(tn,x))xX=u[b];u[b]=(A)xC;Y(xtR,mrn(xn,xA))x)
A1(m1,dbg(lck--);P(!x,0)P(xt==tn,mu(xC-ZP,xn+ZP))dbg(ms(xC,0xab,xn*ZT[xt]);dbg(AN(-1,x)));0)
A1(mr,m1(m0(x)))V mrn(In,OA*a){i(n,mr(a[i]))}A1(mRa,i(xn,mR(xa))x)

S C s0[1<<16],*s1=s0+1;C*syp(I*p)_(*p<0?s0-*p:(V*)p)
I syP(OC*s)_(In=mn(s)+1;P(n<5,mc(&n,s,n);n)
 OC*p=s0+1;W(p<s1,OC*q=p,*t=s;W(*q&&*q==*t,q++;t++)P(!*q&&!*t,s0-p)p=q;W(*p,p++)p++)
 P(s1+n>s0+Z s0,die("syms oom\n"))mc(s1,s,n);Iv=s0-s1;s1+=n;v)

A atn(Ct,Nn)_(Ax=ma(59-__builtin_clzll(ZA+7+n*ZT[t]));xr=1;AT(t,AN(n,x)))
A atnv(Ct,Nn,OV*v)_(Ax=atn(t,n);mc(xC,v,n*ZT[t]);x)A1(ax,xr>1?xr--,atn(xt,xn):x)A0(aa0,am(enl(as(0)),enl(au0)))
A1(a1,atnv(tA,1,A(x)))A2(a2,atnv(tA,2,A(x,y)))A3(a3,atnv(tA,3,A(x,y,z)))A2(aM,atnv(tM,2,A(x,y)))A2(am,atnv(tm,2,A(x,y)))
A aCn(OC*s,Nn)_(atnv(tC,n,s))A aCm(OC*s,OC*t)_(aCn(s,t-s))A aCz(OC*s)_(aCn(s,mn(s)))
A az(Lv)_(Ct=tZ(v);t==tL?al(v):ai(v))C tZ(Lv)_(v==(B)v?tB:v==(H)v?tH:v==(I)v?tI:tL)
A kv(A*p)_(Ax=*p;Q(xn==2);P(xr>1,--xr;*p=mR(xx);mR(xy))*p=xx;AN(0,x);x(xy)) //get keys and values
A1(mut,XP(x)P(xr==1,x)x=x(atnv(xt,xn,xC));Y(xtR,mRa(x))x)
A room(Ax,Nm)_(Q(xtC);Nn=xn;P(xr==1&&n+m<=cap(x),x)Ay=AN(n,aC(n+m));mc(yC,xC,n);x(y))

I line(C*p,C*q)_(Ax=val(aCm(p,q));Y(x,x=out(x))P(x,mr(x);1)epr(0))
S C*skp(C*p)_(W(*p=='/'&&p[1]==10,p+=3;W(*p&&(p[-1]-10||p[-2]-'\\'||p[-3]-10),p++))p)
A1(cmdl,x=N(u1c(x));Ed(!xn||xC[xn-1]-10,x)xC[xn-1]=0;C*p=xC;Y(*p=='#'&&p[1]=='!',p+=2;W(*p&&*p-10,p++))
 W(*p,C*q=p=skp(p);W(*q&&(*q-10||q[1]==32||q[1]=='}'),q++)Nx(line(p,q));p=q+!!*q)x(au0))
A glb,ce[tn],cn[tn],ci[2][5];C**argv,**env;
V init(In,C**a){argv=a;env=a+n+1;u[ZZ(u)-1]=1;i(tS+1,ce[i]=atn(i,0))ce[tm]=am(aS0,aA0);glb=aa0();
 cn[tA]=ce[tA];cn[tC]=ac(32);cn[tB]=cn[tH]=cn[tI]=cn[tL]=al(NL);cn[tD]=ad(ND);cn[tS]=as(0);
 mc(cn+tc,cn+tC,(tS-tC+1)*Z(*cn));i(tn-to,cn[to+i]=au0)
 ci[0][0]=al(0);ci[0][1]=al(1);ci[0][2]=al(WL);ci[0][3]=al(-WL);ci[0][4]=cn[tL];
 ci[1][0]=ad(0);ci[1][1]=ad(1);ci[1][2]=ad(WD);ci[1][3]=ad(-WD);ci[1][4]=cn[tD];}
I rep()_(S Cb[256];Lm=0,k=read(0,b,256);P(k<0,0)C*p=b,*q=p+m,*r=q+k;W(q<r,Y(*q==10,line(p,q);p=q+1)q++)mc(b,p,m=q-p);1)
V repl(){W(rep())}

#define hs(x) {mc(s,x,Z(x)-1);s+=Z(x)-1;}
#define hS(x,y) {hs(x);s=sl(s,y);}
#define hb(a...) {Cb[128],*s=b;a;hs("\n\0");write(1,b,s-b);}
C*h8(C*s,Lv)_(i(16,Cc=v>>4*(15-i)&15;*s++="0W"[9<c]+c)s)
A1(hx,hb(s=h8(s,x);hS(" b",bkt(x));Ct=xC[-15];hs(" t");Y(c3(1,t,tn),*s++=TS[t])E(s=sl(s,t))hS(" r",xr);hS(" n",xn)
         i(2,hs(" ");s=h8(s,xl)))x)
A1(cmdm,i(nm,V*p=m[i].p,*q=p+m[i].n;I f=!!*(C*)p;hb(s=h8(s,(L)p);hs("-");s=h8(s,(L)q);hS(" F",*(C*)p);hS(" N",q-p));
             Ax=(A)p+ZA+ZP*f,y=(A)q;In=0;W(x<y,n++;hx(x);x+=cap(x)+ZA)hb(hS("N:",n)hs("\n")))x(au0))
