#include"a.h" // ngn/k, (c) 2019-2023 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
A1(rs0,rsz(0,x))
SN A flt(A x,A y,B b/*01b*/)_(P(xK-1,er(y))Ym(K("{(!y)[i]!(.y)i:&z~/:x@.y}",xR,y,ai(b)))
 x=Ny(x1(yR));x=xN?Ny(cL(x)):x(emp(tG));P(!xtt&&xN-yN,el(x(y)))A z=rs0(yR);i(yN,L n=gl(ii(x,i));B(b&&n-(U)n,z=ed(z))j(b?n:!n,PSH(z,ii(y,i))))x(y(z)))
V cyc(V*a,U m,U n){Q(m);W(2*m<=n,MC(a+m,a,m);m*=2)I(n>m,MC(a+m,a,n-m))}
A rsz(L n,A x/*1*/)_(
 X(Rt(rsz(n,enl(x)))
   RM(A y=kv(&x),z=az(n);aM(x,Nx(z(r2(RSH,z,y)))))
   Rm(A y=kv(&x);x=Ny(rsz(n,x));y=Nx(rsz(n,y));am(x,y))
   RE(Lij P(n>j-i||n<i-j,rsz(n,gZ(x)))x(0);n>=0?aE(i,i+n):aE(j+n,j))
   R_(P(n==NL,x)P(!xn,rsz(n,enl(fir(x))))
      I r=n<0;n*=1-2*r;A y=an(n,xt);N w=xW,m=xn*w,k=n%xn*w,l=n*w;
      I(!r,MC(yV,xV,MIN(m,l)))J(l<=m,MC(yV,xV+m-l,l))E(MC(yV,xV+m-k,k);MC(yV+k,xV,m-k))
      cyc(yV,m,l);I(!n&&ytA,yx=mkn(_R(xx)))x(ytA?sqz(mRa(y)):y)))0)
A slc(A x/*0*/,U i,U j)_(Q(xtT&&i<=j&&i<=xN)N n=j-i;XE(I v=*xL;aE(v+i,v+j))A y=an(n,xt);MC(yV,xV+i*xW,n*xW);XA(P(!n,yx=mkn(_R(xx));y)sqz(mRa(y)))y)
S A chp(L n,A x/*1*/)_(P(n<0,ed(x))L m=(xn+n-1)/n;A y=aA(m);i(m|!m,ya=slc(x,n*i,MIN(xn,n*i+n)))x(0);I(!m,yx=mkn(yx))y)
S A2(rsh,/*01*/XE(x=gZ(xR);x(rsh(x,y)))YE(rsh(x,gZ(y)))YmM(en(y))Yt(rsh(x,enl(y)))Q(xtZ);N r=xn;P(!r,fir(y))P(r>256,ez(y))x=Ny(cL(xR));L s[r];MC(s,xV,r<<3);x(0);
 I(r==2,P(*s==NL,chp(s[1],y))P(s[1]==NL,K2("{$[(0<x)&~x!#y;(x;(-x)!#y)#y;((-x)!(#y)*!x)_y]}",az(*s),y)))P(r==1&&*s==NL,y)I(!yn,y=enl(fir(y)))
 L p[r],m=1;i(r,L d=s[r-1-i];P(d<0||m*d<0,ed(y))p[i]=m*=MAX(1,d))y=N(rsz(m,y));i(r-1,L d=s[r-1-i];I(d,y=N(chp(MAX(1,d),y)))E(y=N(e1f(rs0,chp(1,y)))))rsz(*s,y))
X2(hsh,/*01*/Ril(rsz(gl_(x),y))RU(flt(x,y,1))RT(P(ytm||ytM&&xtS,y(a2t(xR,y1(xR),yt)))XZ(rsh(x,y))et(y))R_(et(y)))
A drp(L n,A x/*1*/)_(X(Rm(A y=kv(&x);am(Ny(drp(n,x)),Nx(drp(n,y))))RM(A y=kv(&x);aM(x,Nx(e2f(und,az(n),y))))Rt(er(x))RE(Lij x(0);aE(MAX(i,MIN(j,i+n)),MAX(i,MIN(j,j+n))))
 R_(P(n==NL,rs0(x))P(-n<(W)xn&&xr==1,I(xtA,mrn(-n,xA+xn+n))AN(xn+n,x))x(slc(x,MAX(0,MIN(n,xn)),MAX(0,MIN((L)xn,xn+n))))))0)
S A rmv(A x/*1*/,L i)_(X(RT_E(P(i>=(W)xn,x)A y=an(xn-1,xt);MC(yV,xV,i*xW);MC(yV+i*xW,xV+i*xW+xW,(xn-i-1)*xW);I(xtA,I(!yn,yx=mkn(_R(xx)))y=sqz(mRa(y)))x(y))
 RM(A y=kv(&x);y=Nx(y(l2f(und,y,az(i))));aM(x,y))RE(rmv(gZ(x),i))R_(et(x)))0)
S A2(cut,/*01*/Q(xtZ)Q(ytMT)K2("{y$[|/0<':x,#y;`err\"domain\";x+!'1_-':x,#y]}",x,y))
A2(und,/*01*/
 Xz(drp(gl_(x),y))
 XU(flt(x,y,0))
 Xm(A z=N(fnd(xx,yR));Zz(y(0);y=Nz(und(xx,zR));z=Ny(und(xy,z));am(y,z))ZZ(z(0);K2("_/",x,y))z(en(y)))
 P(xtZ&&ytMT,cut(x,y))
 P(xtMT&&ytz,rmv(xR,gl(y)))
 Ym(K2("{((!y)^x)#y}",x,y))
 YM(flp(N(und(x,flp(y)))))
 et(y))
X1(enl,R5(ti,tl,tf,tc,ts,x(aV(TT[xt],1,TP(xt)?&x:xV)))Rm(A y=kv(&x);aM(x,e1f(enl,y)))R_(aA1(x)))
A2(cat10,
 XE(cat10(gZ(x),y))
 YE(y=gZ(yR);y(cat10(x,y)))
 P(xtB&&ytB,U m=xn,n=yn,d=m&63;x=room(m+n,x);P(!d,MC(xV+(m>>3),yV,n+63>>6<<3);x)
  L*a=xL+(m>>6),*b=yL,v=*a&~(-1ll<<d);i(n+63>>6,v|=*b<<d;*a++=v;v=(W)*b++>>64-d;)*a=v;x)
 P(xtT&&ytT,P(!yn,x)P(!xn,x(yR))P(xt-yt,P(xtZ&&ytZ,yR;N(sup(&x,&y));cat11(x,y))cat11(blw(x),blw(yR)))
  U m=xn,n=yn,w=xW;x=room(m+n,x);
  MC(xV+m*w,yV,n*w);I(ytA,mRa(y))x)
 P(xtm&&ytm,a4(x,yx,av,yy))
 Xmt(cat10(enl(x),y))
 Ymt(psh(x,yR))
 P(xtM||ytM,P(xtT||ytT,x=N(blw(x));y=Nx(blw(yR));cat11(x,y))P(!xtM||!ytM,et(x))P(!mtc_(xx,yx),ed(x))A z=e2f(cat,xy,_R(yy));x(z?aM(_R(xx),z):0))
 Q(0);0)
A2(cat11,y(cat10(x,y)))
A2(cat,/*01*/cat11(xR,y))
A2(psh,/*11*/Q(xtMT);U n=xN;P(!n,enl(x(y)))
 P(xtG&&yti&&yv==(G)yv||xtC&&ytc,apc(x,yv))
 P(xtH&&yti&&yv==(H)yv ,x=room(n+1,x);xH[n]=yv;x)
 P(xtI&&yti||xtS&&yts  ,x=room(n+1,x);xI[n]=yv;x)
 P(xtL&&yti            ,x=room(n+1,x);xL[n]=yv;x)
 P(xtL&&ytl||xtF&&ytf  ,x=room(n+1,x);xL[n]=gl(y);x)
 P(xtB&&yti&&yv==(1&yv),x=room(n+1,x);xG[n>>3]|=yv<<(n&7);x)
 P(xtZ&&ytz,N(sup(&x,&y));psh(x,y))
 XM(P(!ytm||!mtc_(xx,yx),psh(Ny(blw(x)),y))x=mut(x);A z=xy=mut(xy);i(zn|!zn,_q(za,ii(yy,i)))I(!zn,zx=mkn(zx))y(x))
 P(!xtA&&(!ytt||xt-TT[yt]),psh(Ny(blw(x)),y))
 L v=xtA?(L)y:gl(y);apv(x,&v))
A apv(A x/*1*/,O V*v  )_(Q(xtT);     U n=xn;x=room(n+1,x);MC(xV+n*xW,v,xW);x)
A apc(A x/*1*/,C c    )_(Q(xtC||xtG);U n=xn;x=room(n+1,x);xC[n]=c;x)
A cts(A x/*1*/,Q s,U m)_(Q(xtC);     U n=xn;x=room(n+m,x);MC(xV+n,s,m);x)
S A insL(A x,L i,L j,A y/*1ij0*/)_(
 P(i>=(W)(j+1)||j>=(W)(xN+1),ei(x))
 A z=an(xn-j+i+yn,xt);MC(zV,xV,i*xW);MC(zV+i*xW,yV,yn*xW);MC(zV+(i+yn)*xW,xV+j*xW,(xn-j)*xW);
 I(xtR,I(!zn,zx=emp(tC))I(xr-1,mRn(i,xA);mRn(xn-j,xA+j))E(mrn(j-i,xA+i);AZ(x))I(yr-1,mRa(y))E(AZ(y))z=sqz(z))
 x(z))
A3(ins3,/*100*/
 Xmt(et(x))
 Zmt(z=enl(zR);z(ins3(x,y,z)))
 XM(P(!ztM,et(x))P(!mtc_(xx,zx),ed(x))y=prj(QUE,A((A)GAP,yR,GAP),3);A u=Nx(y(e2(y,xy,_R(zy))));x(aM(_R(xx),u)))
 P(xtZ&&ztZ&&xt-zt,zR;N(sup(&x,&z));z(ins3(x,y,z)))
 P(xt-zt,z=blw(zR);z(ins3(blw(x),y,z)))
 Y(Ril(L i=gl_(y);insL(x,i,i,z))REGHIL(P(yn-2,el(x))insL(x,gl_(ii(y,0)),gl_(ii(y,1)),z))R_(et(x)))0)
AA(ins,/*10..0*/P(n==3,ins3(*a,a[1],a[2]))en(*a))
