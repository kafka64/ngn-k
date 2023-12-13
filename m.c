#include"a.h" // ngn/k, (c) 2019-2023 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
#include<unistd.h>
#include<fcntl.h>
#include<sys/mman.h>
#ifndef MAP_NORESERVE
 #define MAP_NORESERVE 0
#endif
S ST{V*p;U n;B f;}reg[128];S U nreg;S UC pnd[128];S U npnd;
S V mc(){P(!npnd)i(npnd,I j=pnd[i];munmap(reg[j].p,reg[j].n);Q(reg[j].f);reg[j].p=0)npnd=0;I j=0;i(nreg,I(reg[i].p,MC(reg+j,reg+i,SZ*reg);j++))nreg=j;}
S A mu(V*p)_(i(nreg,P(reg[i].p==p,pnd[npnd++]=i;0))die("UNMAP"))
S V*mm(U n,U f)_(V*p=mmap(0,n,PROT_READ|PROT_WRITE,MAP_NORESERVE|MAP_PRIVATE|MAP_ANON,-1,0);P((L)p<pg,(V*)0)I(nreg==L(reg),mc();I(nreg==L(reg),die("MMAP")))reg[nreg++]=(TY(*reg)){p,n,f};p)
A mf(U f,U i,U n)_(V*p=mm(pg+n,1);P(!p,eo0())A x=(A)p+pg;xn=n;AT(tC,x);P(mmap(p+pg,n,PROT_READ|PROT_WRITE,MAP_NORESERVE|MAP_PRIVATE|MAP_FIXED,f,i)!=p+pg,mu(p);eo0())xR)

S A b[24];DBG(S U lck;)
S W cap(A x/*0*/)_((HD<<xU)-HD)//chunk capacity in bytes
A1(m0,DBG(lck++;)Q(x)XP(0)Q(xr>0)P(--xr,0)U i=xU;P(!i,mu(xV-pg))xX=b[i];b[i]=x;XR(mrn(xn|!xn,xA);x)x)
DBG(A1(m1,lck--;P(!x||!xU,0)MS(xV,0xab,cap(x));AN(-1,AT(0,x));0))
A1(_R,Q(x);XP(x)Q(xr>=0);xr++;x)A1(mr,DBG(m1)(m0(x)))V mRn(U n,O A*a){i(n,_R(a[i]))}V mrn(U n,O A*a){i(n,mr(a[i]))}A1(mRa,mRn(xn,xA);x)
SN A mb(U i)_(P(i>=L(b),V*p=mm(HD<<i,0);P(!p,die("OOM"))A x=(A)p+HD;xU=i;x)A x=b[i];P(x,b[i]=xX;xX=0;x)x=mb(i+1);xU=i;A y=x+(HD<<i);yU=i;AT(0,y);yr=0;yX=b[i];b[i]=y;x)

A an(U n,C t)_(Q(!lck)Q(tA<=t)Q(t<tn)Q(!TP(t))W m=HD+((W)n*TW[t]+7>>3);U i=59-CLZ(HD|m-1);A x=mb(i);xr=1;AT(t,AN(n,x)))
A aV(C t,U n,O V*v)_(A x=an(n,t);MC(xV,v,(W)n*TW[t]+7>>3);x)
A aA0(U n)_(A x=AN(0,aA(n));xx=emp(tC);x)
A1(aA1,A y=an(1,tA);yx=x;y)
A2(aA2,/*11*/a2t(x,y,tA))
A3(aA3,/*111*/A u=an(3,tA);ux=x;uy=y;uz=z;u)
NI A a2t(A x,A y,C t/*11t*/)_(A z=an(2,t);zx=x;zy=y;z)
A2(aM,/*11*/Q(xtMT)Q(ytA)Q(xN==yN)a2t(x,y,tM))
A2(am,/*11*/Q(xtMT)Q(ytMT)Q(xN==yN)a2t(x,y,tm))
A aA(U n)_(an(n,tA))
A aB(U n)_(an(n,tB))
A aG(U n)_(an(n,tG))
A aI(U n)_(an(n,tI))
A aL(U n)_(an(n,tL))
A aF(U n)_(an(n,tF))
A aC(U n)_(an(n,tC))
A aS(U n)_(an(n,tS))
A aCn(Q s,U n)_(aV(tC,n,s))
A aCm(Q p,Q q)_(aCn(p,q-p))
A aCz(Q s)_(aCn(s,SL(s)))
A az(L n)_(n-(I)n?al(n):ai(n))
A al(L v)_(aV(tl,1,&v))
A af(F v)_(aV(tf,1,&v))
A aE(L i,L j)_(Q(i<=j)P(i==j,emp(tG))A x=an(tE,2);*xL=i;xL[1]=j;x)
A1(mut,XP(x)P(xr==1,x)x=x(aV(xt,xn,xV));XR(mRa(x))x)
C tZ(L v)_(tL-((v==(G)v)+(v==(H)v)+(v==(I)v)))
A kv(A*p)_(A x=*p;Q(xn==2);P(xr>1,--xr;*p=_R(xx);_R(xy))*p=xx;AZ(x);x(xy))
A room(U n,A x)_(P(xr==1&&n*xW<=cap(x),AN(n,x))A y=an(n,xt);MC(yV,xV,(W)xn*TW[xt]+7>>3);I(ytR,I(xr==1,AZ(x))E(i(xn,_R(ya))))x(y))
L gl_(A x)_(XP(xv)*xL)
L gl(A x)_(L v=gl_(x);x(0);v)
F gf(A x)_(F v=*xF;x(0);v)
A AT(W t,A x)_(Q(t<tn);P(TP(t),x=Lt(t)|x<<8>>8)_T(x)=t;x)
A AW(C w,A x)_(Q(w<6u);xE=w;x)
A AK(C k,A x)_(Q(k<9u);xk=k;x)
A AO(UC o,A x)_(Xs(x&~(0xffll<<32)|(W)o<<32)_O(x)=o;x)
A AN(U n,A x)_(xn=n;x)
A1(AZ,AT(tG,x))

S C s0[1<<16],*s1=s0+1;
Q qs(O L*p)_(*p<0?s0-*p:(V*)p)
I sq(Q s)_(U n=SL(s);P(n<4||(n==4&&!(s[3]&128)),I v=0;MC(&v,s,n);v)Q p=s0+1;W(p<s1,P(!strcmp(p,s),s0-p)p+=SL(p)+1)n++;P(s1+n>s0+SZ s0,die("SYMS"))MC(s1,s,n);s1+=n;s0-s1+n)
A sym(Q s)_(as(sq(s)))

S U gd,gn;S W gk[256];A gv[256];
S W gkk(A x/*0*/)_(Xs((U)xv)Q(xtS)xn?(W)_v(jS(drp(-1,xR)))<<32|(U)_v(ii(x,xn-1)):0)
UC gi(A x/*0*/)_(W k=gkk(x);L l=(I)k;I(!(k>>32)&&id0(*qs(&l)),k|=(W)gd<<32)U i=fL(gk,gn,k);P(i<gn,i)P(gn>=L(gv),die("GLOBALS"))gk[gn]=k;gv[gn]=0;gn++)
A gg(A x/*1*/)_(//get value of global
 P(xtS&&!xn,x(0);A x=emp(tS),y=emp(tA);i(gn,I(gv[i],L k=gk[i];PSH(x,k-(U)k?jS(aV(tS,2,A((I)(k>>32),k))):as(k));PSH(y,_R(gv[i]))))am(x,y))//special case for 0#`
 W k=gkk(x);x(0);U i=fL(gk,gn,k);i<gn&&gv[i]?_R(gv[i]):ev0())
A*gp(A x/*1*/)_(UC i=gi(x);x(0);gv+i)//get pointer to global
A gns(U k)_(I a[L(gk)];U n=0;i(gn,I(gk[i]>>32==k,a[n++]=gk[i]))aV(tS,n,a))//list namespace

S A bs0(Q s)_(en0())
S A bsbs(Q s)_(exit(0);0)
S A bscd(Q s)_(P(!*s,C b[256];getcwd(b,SZ b)?eo0():aCz(b))chdir(s)?eo0():au)
S A bsd(Q s)_(P(!*s,as(gd))s+=*s=='.';gd=sq(s);au)
  A bsl(Q s)_(I f=open(s,0,0);A x=u1c(ai(f));close(f);N(x);P(!xn,x(au))C*p=xC,*e=p+xn-1;P(*e-10,x(err0("eoleof")))*e=0;I(*p=='#'&&p[1]=='!',p=strchrnul(p,10);p+=!!*p)x(evs(p,1)))
S A bsf(Q s)_(K1("{`0:($!h),'\":\",'`k'. h:(&x=^`o`p`q`r`u`v`w`x?@'h)#h:``repl_.:0#`}",ai(!s)))
S A bst(Q s)_(L n=s[-1]=='t'&&*s==':'?++s,pl(&s):1;Q p=s;A x=N(pk(&p,10));x=N(cpl(aCm(s,p),x,0));L t=now();i(n,mr(Nx(run(x,0,0))))x(az((now()-t+500)/1000)))
S A bsv(Q s)_(bsf(0))
S A bs_(Q*p)_(C b[256];Q s=*p,e=strchrnul(s,10);P(e-s+1>=L(b),ez0())MC(b,s,e-s);b[e-s]=0;*p=e+!!*e;C c=*b,d=b[1];P(c=='c'&&d=='d'&&(!b[2]||b[2]==32),bscd(b+2+(b[2]==32)))
 P(!d||d==10||d==32||d==':',G(&bsl,bst,bsd,bsbs,bsf,bsv,bsm,bs0)[si("ltd\\fvm",c)](b+1+(d==32)))K1("0x0a\\`x(,,\"/bin/sh\"),,:",aCz(b)))

S A evs1(Q*p)_(Q s=*p;P(*s=='\\',++*p;bs_(p))A x=pk((V*)p,10);N(x);x=N(cpl(aCm(s,*p),x,0));x(run(x,0,0)))
A evs(Q s,B r)_(W(*s,A x=evs1(&s);P(!x,I(r,s=strchrnul(s,10);s+=!!*s;epr(0))0)I(r,x(out(x)))E(P(!*s,x)x(0))mc())au)
B rep()_(S C b[256];C*s=b,*q;
 W(1,L n=read(0,s,b-s+SZ b);P(n<=0,0)s+=n;q=memchr(s-n,10,n);
     P(q,C*p=b;W(q,*q=0;evs(p,1);p=q+1;q=memchr(p,10,s-p))MC(b,p,s-p);s+=b-p;1)
     P(b+SZ b<=s,die("LONGLINE")))1)
V repl(){W(rep())}
//L k(Q s)_(A x=N(evs(s,0));mc();Xz(gl(x))x(0))
//V kf(Q s,A2 f){d8(A(sym(s),au,av,AT(tx,(A)f)),4);}

A cns,cn[tn];S A ce[tn];Q*argv,*env;
V kinit(){S B l;P(l)l=1;pg=sysconf(_SC_PAGESIZE);A b[32],*c=b;
 i(tS-tA+1,*c++=ce[tA+i]=an(0,tA+i))*c++=ce[tm]=am(emp(tS),emp(tA));_x(ce[tA])=_R(ce[tC]);ce[tM]=ce[tA];i(tn-ti,Q(!ce[i+ti]);ce[i+ti]=ce[tA])//empties
 cn[tA]=ce[tC];*c++=cn[ti]=cn[tl]=al(NL);i(tL-tE+1,cn[tE+i]=cn[ti])*c++=cn[tF]=cn[tf]=af(NF);cn[tC]=cn[tc]=ac(32);cn[tS]=cn[ts]=as(0);i(tn-to,cn[to+i]=au)//nulls
 Q(c-b<=32);cns=aV(tA,c-b,b);}
V kargs(I n,Q*a){argv=(Q*)a;env=(Q*)a+n+1;n=MAX(0,n-2);A x=n?aA(n):emp(tA);i(n,xa=aCz(a[2+i]))gk[gn]='x';gv[gn++]=x;}
A emp(U t)_(_R(ce[t]))

SN U ow(Q s,U n)_(write(1,s,n))
SN V o8(W v){C b[16],*s=b;i(16,C c=v>>4*(15-i)&15;*s++="0W"[9<c]+c)ow(b,16);}
U os(Q s)_(ow(s,SL(s)))
W ov_(Q s,W v)_(os(s);o8(v);ow("\n",1);v)
#define mms(a...) i(nreg,I f=reg[i].f;V*p=reg[i].p,*q=f?p:p+reg[i].n;a)
#define obs(a...) mms(A x=(A)(p+HD*!f+pg*f),y=(A)q;W(x<y,a;x+=cap(x)+HD))
#define xys(a...) obs(I(xtR&&xr,i(xn|!xn,A y=xa;a)))
#define rts(a...) {i(gn,A x=gv[i];I(x,a))A x=cns;a;}
SN V od(L v){C b[32];ow(b,sl(b,v)-b);}
SN V osd(Q s,L v){os(s);od(v);}
SN A1(ox,o8(x);osd(" U",xU);C t=_T(x);os(" t");I(LH(1,t,tn),ow(&TS[t],1))E(od(t))osd(" r",xr);osd("=",xm);osd(" n",xn);i(MIN(5,cap(x)/8),os(" ");o8(xl))os("\n");x)
A bsm(Q s)_(obs(xm=0)xys(I(!ytP,ym++))rts(I(!xtP,xm++))
// I n=0;obs(ox(x);n++);osd("nObjs:",n)
// os("mapped regions:\n");mms(os(f?"[f] ":"[x] ");o8((L)p);os("-");o8((L)q);osd(" N",q-p);os("\n"));os("\n");
 obs(I(xr&&xt-1>(U)tn,os("!type:");ox(x)))
 obs(I(xr-xm,os("!refc:");ox(x)))
 xys(I(!yt,os("!dngl:");ox(x);ox(y)))
 obs(I(xtA&&!xn&&!xx,os("!prot:");ox(x)))
 au)
