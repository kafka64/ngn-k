// ngn/k, (c) 2019-2021 ngn, GNU AGPLv3 - https://git.sr.ht/~ngn/k/blob/master/LICENSE
#include"a.h"
#include<sys/mman.h>
#define xX ((A*)dat(x))[-3] //ptr to next
I nw;V*w[8][2];A m[35],ce[tn],cn[tn],ci[2][5],glb;L mu;S I lck;C**argv,**env;SN A0(oom,die("oom\n"))
S V mw(V*p,V*q){P(nw==ZZ(w))w[nw][0]=p;w[nw++][1]=q;}S V mW(V*p){i(nw,Y(w[i][0]==p,mc(w+i,w+--nw,Z w[0])))}
S A mb(Cb,Ax)_(xX=0;dbg(AN(-1,x));bkt(x)=b;x)
S V*MM(V*p,Nn,I f)_(mmap(p,n,PROT_READ|PROT_WRITE,MAP_NORESERVE|MAP_PRIVATE|(f<0?MAP_ANON:MAP_FIXED),f,0))
S A mm(Cb)_(  V*a=MM(0,ZA<<b,-1);P((L)a>>4==-1,oom())mw(a,a+(ZA<<b));mb(b,(A)(a+ZA)))
A mf(I f,Nn)_(V*a=MM(0,ZP+n ,-1);P((L)a>>4==-1,eo0())Au=(A)(a+ZP);uL[-2]=0;u=AT(tC,AN(n,u));uR;
              V*b=MM(a+ZP,n , f);P((L)a>>4==-1,eo0())mw(a,a+ZP+(n+ZP-1)/ZP*ZP);u)
S A ma(Cb)_(Q(!lck);P(b>ZZ(m),oom())mu+=ZA<<b;Ax=m[b];Ii=b;W(!m[i],i++)Y(i<ZZ(m)-1,x=m[i];m[i]=xX)E(x=mm(i=max(b,24)))
 Y(b<i,bkt(x)=b;W(b<i--,m[i]=mb(i,(A)(x+(ZA<<i)))))x)
A1(m0,dbg(lck++);Q(x);XP(0)Q(xr>0);P(--xr,0)Cb=bkt(x);P(!b,AT(tn,x))xX=m[b];m[b]=(A)xC;mu-=ZA<<b;Y(xtR,mrn(xn,xA))x)
A1(m1,dbg(lck--);P(!x,0)P(xt==tn,mW(xC-ZP);munmap(xC-ZP,xn+ZP);0)dbg(ms(xC,0xab,xn*ZT[xt]);dbg(AN(-1,x)));0)
A1(mr,m1(m0(x)))V mrn(In,OA*a){i(n,mr(a[i]))}A1(mRa,i(xn,mR(xa))x)
A1(mut,XP(x)P(xr==1,x)Au=x(atnv(xt,xn,xC));Y(utR,mRa(u))u)
A atn(Ct,Nn)_(Ax=ma(59-__builtin_clzll(ZA+7+n*ZT[t]));xr=1;AT(t,AN(n,x)))
A atnv(Ct,Nn,OV*v)_(Au=atn(t,n);mc(uC,v,n*ZT[t]);u)A1(ax,xr>1?xr--,atn(xt,xn):x)A0(aa0,am(enl(as(0)),enl(au0)))
A1(a1,atnv(tA,1,A(x)))A2(a2,atnv(tA,2,A(x,y)))A3(a3,atnv(tA,3,A(x,y,z)))A2(aM,atnv(tM,2,A(x,y)))A2(am,atnv(tm,2,A(x,y)))
A aCn(OC*s,Nn)_(atnv(tC,n,s))A aCm(OC*s,OC*t)_(aCn(s,t-s))A aCz(OC*s)_(aCn(s,mn(s)))
A az(Lv)_(Ct=tZ(v);t==tL?al(v):ai(v))C tZ(Lv)_(NB<=v&&v<=WB?tB:NH<=v&&v<=WH?tH:NI<=v&&v<=WI?tI:tL)
A kv(A*p)_(Ax=*p;Q(xn==2);P(xr>1,--xr;*p=mR(xx);mR(xy))*p=xx;Au=xy;AN(0,x);x(u)) //get keys and values
A room(Ax,Nm)_(Q(xtC);Nn=xn;P(xr==1&&n+m<=cap(x),x)Au=AN(n,aC(n+m));mc(uC,xC,n);x(u))
S C sy0[1<<16],*sy1=sy0+1;C*syp(I*p)_(*p<0?sy0-*p:(V*)p)
I syP(OC*s)_(In=mn(s)+1;P(n<5,mc(&n,s,n);n)
 OC*p=sy0+1;W(p<sy1,OC*q=p,*t=s;W(*q&&*q==*t,q++;t++)P(!*q&&!*t,sy0-p)p=q;W(*p,p++)p++)
 P(sy1+n>sy0+Z sy0,die("syms oom\n"))mc(sy1,s,n);Iv=sy0-sy1;sy1+=n;v)
I line(C*p,C*q)_(Ax=val(aCm(p,q));Y(x,x=out(x))P(x,mr(x);1)epr(0))
S C*skp(C*p)_(W(*p=='/'&&p[1]==10,p+=3;W(*p&&(p[-1]-10||p[-2]-'\\'||p[-3]-10),p++))p)
A1(cmdl,x=N(u1c(x));Ed(!xn||xC[xn-1]-10,x)xC[xn-1]=0;C*p=xC;Y(*p=='#'&&p[1]=='!',p+=2;W(*p&&*p-10,p++))
 W(*p,C*q=p=skp(p);W(*q&&(*q-10||q[1]==32||q[1]=='}'),q++)Nx(line(p,q));p=q+!!*q)x(au0))
V init(In,C**a){argv=a;env=a+n+1;m[ZZ(m)-1]=1;Ax=ce[tS]=aS(0);i(tS,ce[i]=AT(i,x))ce[tm]=am(aS0,aA0);glb=aa0();
 cn[tA]=ce[tA];cn[tC]=ac(32);cn[tB]=cn[tH]=cn[tI]=cn[tL]=al(NL);cn[tD]=ad(ND);cn[tS]=as(0);
 mc(cn+tc,cn+tC,(tS-tC+1)*Z(*cn));i(tn-to,cn[to+i]=au0)
 ci[0][0]=al(0);          ci[0][1]=al(1);ci[0][2]=al(WL);ci[0][3]=al(-WL);ci[0][4]=cn[tL];
 ci[1][0]=AT(td,ci[0][0]);ci[1][1]=ad(1);ci[1][2]=ad(WD);ci[1][3]=ad(-WD);ci[1][4]=cn[tD];}
I rep()_(S Cb[256];Lm=0,k=read(0,b,256);P(k<0,0)C*p=b,*q=p+m,*r=q+k;W(q<r,Y(*q==10,line(p,q);p=q+1)q++)mc(b,p,m=q-p);1)
V repl(){W(rep())}

#define hs(x) {mc(s,x,Z(x)-1);s+=Z(x)-1;}
#define hS(x,y) {hs(x);s=sl(s,y);}
#define hb(a...) {Cb[128],*s=b;hs("\n\0");a;write(1,b,s-b);}
C*h8(C*s,Lv)_(i(16,Cc=v>>4*(15-i)&15;*s++="0W"[9<c]+c)s)
A1(hx,hb(s=h8(s,x);hS(" b",bkt(x));hS(" r",xr);hS(" n",xn))x)
A1(cmdm,i(nw,V*p=w[i][0],*q=w[i][1];hb(s=h8(s,(L)p);hs("..");s=h8(s,(L)q);hS(" N=",q-p));
 Ax=(A)p+ZA,y=(A)q+ZA;In=0;W(x<y,n++;hx(x);x+=cap(x)+ZA)hb(hS("N:",n)hs("\n")))x(au0))
