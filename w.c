#include"a.h" // ngn/k, (c) 2019-2021 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
SN A2(enc/*01*/,Q(xtzZ)P(x==ai(2)&&ytz&&gl_(y)<0,x=rsh(64,xR);x(enc(x,y)))
 Ii=ytt;x=K("{$[0>&/x;`err\"domain\"; `i~@x;|x!-1_![-x;]\\y; x!'|(,y),y{(-y)!x}\\|1_x]}",xR,y);!x||xN?x:x(i?oB:oA))
SN A2(dec,/*01*/K("{z+x*y}/[0;;]",xR,y))
SN ALA(win,P(n<0,ed1(x))K("{[n;x]x(!n)+/:!0|1-n-#x}",az(n),x))
SN A scC(Cc    ,C*p,Ln)_(           Ax=oA;C*q;W((q=MC(p,c,n  )),xq(aCm(p,q));n-=q-p+1;p=q+1)I(c-10||n,xq(aCn(p,n)))x)
SN A sCC(C*s,Lm,C*p,Ln)_(P(!m,el0())Ax=oA;C*q;W((q=MM(p,n,s,m)),xq(aCm(p,q));n-=q+m-p;p=q+m)xq(aCn(p,n)))
SN A sc(Cc    ,Ax)_(XC(x(scC(c,  xV,xn)))et1(x))A1(spl,sc(10,x))
SN A sC(C*s,Lm,Ax)_(XC(x(sCC(s,m,xV,xn)))et1(x))
SN L jN(Lm,Ax/*0*/)_(P(!xtA,-1)Ln=(xn-!!xn)*m;i(xn,Ay=xa;P(!ytcC,-1)n+=yN)n)//total length or -1
A jc(Cc,   Ax)_(Ln=jN(1,x);P(n<0,et1(x))Ay=aC(n);C*p=yV;i(xn,I(i,*p++=c        )Az=xa;I(ztc,*p++=zv)E(Mc(p,zV,zn);p+=zn))x(y))
A jC(Qs,Nm,Ax)_(Ln=jN(m,x);P(n<0,et1(x))Ay=aC(n);C*p=yV;i(xn,I(i,Mc(p,s,m);p+=m)Az=xa;I(ztc,*p++=zv)E(Mc(p,zV,zn);p+=zn))x(y))
L cfm(OA*a/*0*/,In)_(Lm=-1;i(n,Ax=a[i];I(!xtt,Lv=xN;P(m>=0&&m-v,-2)m=v))m)
S A emp1f(Ax,A1 f/*0f*/)_(f==len?oB:f==til||f==str?oA:xR)S A emp1(Ax,Ay/*000*/)_(ytu?emp1f(x,v1[yv]):oA)
S A emp2f(Ax,Ay,A2 f/*00f*/)_(f==mod?oB:oA)              S A emp2(Ax,Ay,Az/*000*/)_(ztv?emp2f(x,y,v2[zv]):oA)
SN AX(eacm,Az=oS;Ik=0;i(n,Ay=a[i];I(ytm,k++;z=cat(z,_R(yx))))I(k>1,z=unq(z))
 Ab8;i(n,Ay=b[i]=a[i];I(ytm,Au=kv(&y);uq(id_(x,u));b[i]=ap1(u,fil(ai(yn),fnd(y,zR)))))AX eac;x=eac(x,b,n);P(!x,z(x))dct(z,x))
A eac1f(Ax,A1 f)_(Xt(f(x))Xm(Ay=kv(&x);am(x,Nx(eac1f(y,f))))I b=xtA&&xr==1;Nn=xN;P(!n,x(emp1f(x,f)))
 Ay=oA;i(n,Az=f(b?xa:ii(x,i));B(!z,I(b,mrn(xn-i-1,xA+i+1))y=y(0))yq(z))I(b,x=AN(0,x))x(y))
SN A2(eac1,/*10*/Yu(eac1f(x,v1[yv]))Xt(y1(x))Xm(eacm(y,&x,1))Nm=xN;P(!m,x(emp1(x,y)))
 P(xtA&&xr==1,x=AN(0,x);Au=oB;i(m,Az=y1(xa     );B(!z,u=u(0);mrn(m-i-1,xA+i+1))uq(z))x(u))
                        Au=oB;i(m,Az=y1(ii(x,i));B(!z,u=u(0)                  )uq(z))x(u))
NI A eal2f(Ax,Ay,A2 f/*11f*/)_(           Xt( f(x,y))Xm(Az=kv(&x);am(x,Nx(eal2f(z,y,f))))
 Nn=xN;P(!n,x(y(emp2f(x,y,f))))Au=oA;i(xN,A v= f(ii(x,i),yR);B(!v,u=u(0))uq(v))x(y(u)))
NI A ear2f(Ax,Ay,A2 f/*11f*/)_(           Yt( f(x,y))Ym(Az=kv(&y);am(y,Ny(ear2f(x,z,f))))
 Nn=yN;P(!n,x(y(emp2f(x,y,f))))Au=oA;i(yN,A v= f(xR,ii(y,i));B(!v,u=u(0))uq(v))x(y(u)))
SN A3(eal2,/*110*/P(ztv,eal2f(x,y,v2[zv]))Xt(z2(x,y))Xm(z=prj(z,A(PLH,y),2);z(eac1(x,z)))
 Nn=xN;P(!n,x(y(emp2 (x,y,z))))Au=oA;i(xN,A v=z2(ii(x,i),yR);B(!v,u=u(0))uq(v))x(y(u)))
NI A3(ear2,/*110*/P(ztv,ear2f(x,y,v2[zv]))Yt(z2(x,y))Ym(z=prj(z,A(x,PLH),2);z(eac1(y,z)))
 Nn=yN;P(!n,x(y(emp2 (x,y,z))))Au=oA;i(yN,A v=z2(xR,ii(y,i));B(!v,u=u(0))uq(v))x(y(u)))
SN AX(eal,Ab8;Mc(b,a,8*n);*b=PLH;x=prj(x,b,n);x(eac1(*a,x)))
SN A3(eac2,/*110*/P(ztv,eac2f(x,y,v2[zv]))Xt(ear2(x,y,z))Yt(eal2(x,y,z))P(xtm||ytm,eacm(z,A(x,y),2))
 Nm=xN;P(m-yN,el2(x,y))P(!m,y(ztv&&zv<11?x:x(oA)))Au=0;Ct=xtA&&xr==1,s=ytA&&yr==1;
 i(m,A v=z2(t?xa:ii(x,i),s?ya:ii(y,i));B(!v,I(u,u=u(0))I(t,mrn(m-i-1,xA+i+1))I(s,mrn(m-i-1,yA+i+1)))
  I(!u,u=v?AN(0,an(c3(ti,_t(v),ts)?TT[_t(v)]:tA,m)):0)uq(v))
 mr(t?AN(0,x):x);mr(s?AN(0,y):y);u)
AX(eac,P(n==1,eac1(*a,x))P(n==2,eac2(*a,a[1],x))
 Ab8;Ct[8];Lm=-1;i(n,Ay=b[i]=a[i];Ym(eacm(x,a,n))t[i]=ytP?0:ytt?1:ytA?2+(yr>1):4;I(t[i]>1,L l=yN;P(m>=0&&m-l,el8(a,n))m=l))
 P(m<0,x8(a,n))i(n,I(t[i]==1,_r(a[i])+=m)) //t[i] 0:pkdatm,1:refatm,2:tA(r=1),3:tA,4:other
 Au=0;I(!m,u=x==LEN?oB:n==2&&xtv&&xv<11?_R(a[!_N(a[1])]):oA)
 j(m,i(n,Ay=a[i];I(t[i]==2,b[i]=yA[j])I(t[i]>2,b[i]=ii(y,j)))Az=x8(b,n);
  B(!z,I(u,u=u(0))i(n,Ay=a[i];I(t[i]==1,yr-=m-j-1)I(t[i]==2,mrn(m-j-1,yA+j+1))))
  I(!j,u=c3(ti,zt,ts)?AN(0,an(TT[zt],m)):oA)uq(z))
 i(n,mr(t[i]-2?a[i]:AN(0,a[i])))u)
S I arf2(A2 f)_((SZ(V*)-8?fI:fL)(v2+1,10,(L)f)!=NL)
A eac2f(Ax,Ay,A2 f)_(Ik=2*xtt+ytt;P(k==3,f(x,y))
 P(xtm||ytm,P(xtm>ytm,Az=kv(&x);am(x,Nx(eac2f(z,y,f))))P(xtm<ytm,Az=kv(&y);am(y,Ny(eac2f(x,z,f))))
  Az=unq(cat(_R(xx),_R(yx)));x=ap1(x,zR);y=ap1(y,zR);I(arf2(f),Au=az(f==mul||f==dvd);x=fil(u,x);y=fil(u,y))am(z,Nz(eac2f(x,y,f))))
 P(!k&&xN-yN,el2(x,y))
 Nn=k<2?xN:yN;Az=emp2f(x,y,f);i(n,Au=f(ii(x,i),ii(y,i));B(!u,z=z(0))zq(u))x(y(z)))
SN A2(cs,/*01*/Az=yR,v=yR,u=enl(y);W(1,z=yR;y=x1(y);P(!y,z(u(dex(v,0))))Im=mtc_(y,z)||mtc_(y,v);z(0);B(m)uq(yR))y(dex(v,u)))
SN A2(cf,/*01*/Az=yR,u;W(1,zR;u=x1(z);B(!u)P(mtc_(u,y)||mtc_(u,z),y(u(z)))z=z(u))y(z(u)))
SN A w3(Ax,Ay,Az,Au/*011*/)_(W(1,A w=y1(zR);B(!w,u?u=u(0):(z=z(0)))B(!tru(w))z=x1(z);P(!z,y(u?u(0):0))I(u,uq(zR)))u?y(z(u)):y(z))
SN A3(ws,/*011*/w3(x,y,z,enl(zR)))
SN A3(wf,/*011*/w3(x,y,z,0))
SN A n3(Ax,Lm,Ay,Az/*0m11*/)_(i(m,I(z,zq(yR))y=x1(y);B(!y))z?y?zq(y):z(y):y)
SN A ns(Ax,Lm,Ay/*0m1*/)_(n3(x,m,y,oA))
SN A nf(Ax,Lm,Ay/*0m1*/)_(n3(x,m,y,0))
SN A nS(Ax,Lm,OA*a,Nn/*0m1n*/)_(P(n==1,ns(x,m,*a))Az=aA(n+m),*b=zV;zn=n;Mc(b,a,8*n);i(m,mRn(n,b);b[n]=Nz(x8(b,n));zn++;b++)sqz(z))
SN A nF(Ax,Lm,OA*a,Nn/*0m1n*/)_(P(n==1,nf(x,m,*a))las(N(nS(x,m,a,n))))
SN A wS(Ax,Ay,OA*a,Nn/*0m1n*/)_(P(n==1,ws(x,y,*a))Ab8;Mc(b,a,8*n);mRn(n,b);Az=sqz(aV(tA,n,b));
 W(1,Au=y1(ii(z,zn-1));B(!u,z=z(0))B(!tru(u))mRn(n-1,b+1);u=x8(b,n);B(!u,*b=au;z=z(0))Mm(b,b+1,8*n-8);b[n-1]=u;zq(uR))
 mrn(n,b);y(z))
SN A wF(Ax,Ay,OA*a,Nn/*011n*/)_(P(n==1,wf(x,y,*a))las(N(wS(x,y,a,n))))
SN A3(nws2,/*011*/Yz(ns(x,gl(y),z))YF(ws(x,y,z))et2(y,z))
SN A3(nwf2,/*011*/Yz(nf(x,gl(y),z))YF(wf(x,y,z))et2(y,z))
SN AX(nws,Ay=*a;P(n==2,nws2(x,y,a[1]))Yz(nS(x,gl(y),a+1,n-1))YF(wS(x,y,a+1,n-1))et8(a,n))
SN AX(nwf,Ay=*a;P(n==2,nwf2(x,y,a[1]))Yz(nF(x,gl(y),a+1,n-1))YF(wF(x,y,a+1,n-1))et8(a,n))
SN A3(fld2,/*110*/Yt(z2(x,y))P(ztv&&zv<11&&xtzdc&&ytZDC,arf(x,y,z))i(yN,x=z2(x,ii(y,i));B(!x))y(x))
A2(fld1,/*10*/Xt(x)P(ytv&&yv<11&&xtZDC,arf(0,x,y))P(!xN,x(id_(y,x)))Az=ii(x,0);i(xN-1,z=y2(z,ii(x,i+1));B(!z))x(z))
AX(fld,P(n==1,fld1(*a,x))P(n==2,fld2(*a,a[1],x))n--;Ay=*a++,z=*a;Lm=cfm(a,n);
 P(m==-1,y?x8(a-1,n+1):z)P(m<0,I(y,y(0))el8(a,n))P(!m&&!y,x=id_(x,z);mrn(n,a);x)
 Li=!y;I(i,y=ii(z,0))Ab8;W(i<m,*b=y;j(n,b[j+1]=ii(a[j],i))y=x8(b,n+1);B(!y)i++)mrn(n-1,a+1);z(y))
SN A3(scn2,/*110*/Yt(z2(x,y))Ym(Au=kv(&y);am(y,Ny(scn2(x,u,z))))P(!yN,x(y))P(ztv&&zv<11&&xtzdc&&ytZDC,ars(x,y,z))
 Au=oA;i(yN,x=z2(x,ii(y,i));P(!x,y(u(0)))uq(xR))x(y(u)))
SN A2(scn1,/*10*/Xt(x)P(!xN,x)Xm(Az=kv(&x);am(x,Nx(scn1(z,y))))P(y==CAT,scn2(oA,x,y))P(ytv&&yv<11&&xtZDC,ars(0,x,y))
 Ni=0,n=xN;Az=ii(x,0),u=enl(zR);W(++i<n,z=N(y2(z,ii(x,i)));uq(zR))z(x(u)))
SN AX(scn,P(n==1,scn1(*a,x))P(n==2,scn2(*a,a[1],x))Ay=*a++;n--;Lm=cfm(a,n);P(m==-2,y(el8(a,n)))
 Az=oA;Ab8;i(m,*b=y;j(n,b[j+1]=ii(a[j],i))y=x8(b,n+1);P(!y,mrn(n,a);z(0))zq(yR))mrn(n,a);y(z))
SN A3(eap2,/*110*/Ym(Au=kv(&y);am(y,Ny(eap2(x,u,z))))Yt(et2(x,y))P(!yN,x(y))P(ztv&&zv<11&&xtzc&&ytZC,arp(x,y,z))
 Au=oA;i(yN,x=z2(ii(y,i),x);P(!x,y(u(0)))uq(x);x=ii(y,i))x(y(u)))
SN A2(eap1,/*10*/eap2(id_(y,x),x,y))
SN A3(ste,/*110*/K("{z'x':y}",x,y,zR))
AX(adv,Q(xtr)Ii=xE;x=xx;Ik=xK;
 switch(i){
  C(0,P(n==1,Xt(eac1(*a,x))bin(x,*a))eac(x,a,n))
  C(1,P(n==1,Ay=*a;XzZ(dec(x,y))Xc(jc(xv,y))XC(jC(xV,xn,y))P(k<2,cf(x,y))fld1(y,x))P(k<2,nwf(x,a,n))P(n-k==1,nwf(x,a,n))fld(x,a,n))
  C(2,P(n==1,Ay=*a;XzZ(enc(x,y))Xc(sc(xv,y))XC(sC(xV,xn,y))P(k<2,cs(x,y))scn1(y,x))P(k<2,nws(x,a,n))P(n-k==1,nws(x,a,n))scn(x,a,n))
  C(3,n==1?xtz?win(gl(x),*a):eap1(*a,x):n==2?k==1?ste(*a,a[1],x):eap2(*a,a[1],x):er8(a,n))
  C(4,P(n==2,ear2(*a,a[1],x))er8(a,n))
  C(5,P(n==2,eal2(*a,a[1],x))eal(x,a,n))}
 er8(a,n))
