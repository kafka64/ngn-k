#include"a.h" // ngn/k, (c) 2019-2023 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
S A2(dec,/*01*/K2("0{z+x*y}/",x,y))
S X2(enc,/*01*/Rz(K2("{$[&/~*x:(x|-x)!|$[x>0;(-x)!;-x!]\\y;1_x;@[x;0;-:0<]]}",x,y))RZ(K2("{(x|-x)!'|(,y),y{$[y<0;-y!;(-y)!]x}\\-1_|x}",x,y))R_(en1(y)))
S A scC(Cc    ,C*p,Ln)_(           Ax=oA;C*q;W((q=memchr(p,c,n  )),xq(aCm(p,q));n-=q-p+1;p=q+1)I(n||c-10&&xn,xq(aCn(p,n)))x)S A sc(Cc    ,Ax)_(XC(x(scC(c,  xV,xn)))et1(x))A1(spl,sc(10,x))
S A sCC(C*s,Lm,C*p,Ln)_(P(!m,el0())Ax=oA;C*q;W((q=memmem(p,n,s,m)),xq(aCm(p,q));n-=q+m-p;p=q+m)I(n||      xn,xq(aCn(p,n)))x)S A sC(C*s,Lm,Ax)_(XC(x(sCC(s,m,xV,xn)))et1(x))
S L jN(Lm,Ax/*0*/)_(P(!xtA,-1)Ln=(xn-!!xn)*m;i(xn,Ay=xa;P(!ytcC,-1)n+=yN)n)//total length or -1
A jc(Cc,   Ax)_(XC(jc(c,  flp(flp(x))))Ln=jN(1,x);P(n<0,et1(x))Ay=aC(n);C*p=yV;i(xn,I(i,*p++=c        )Az=xa;I(ztc,*p++=zv)E(MC(p,zV,zn);p+=zn))x(y))
A jC(Qs,Nm,Ax)_(XC(jC(s,m,flp(flp(x))))Ln=jN(m,x);P(n<0,et1(x))Ay=aC(n);C*p=yV;i(xn,I(i,MC(p,s,m);p+=m)Az=xa;I(ztc,*p++=zv)E(MC(p,zV,zn);p+=zn))x(y))
L cfm(OA*a/*0*/,In)_(Lm=-1;i(n,Ax=a[i];I(!xtt,Lv=xN;P(m>=0&&m-v,-2)m=v))m)
S I arf2(A2 f)_((SZ(V*)-8?fI:fL)(v2+1,10,(L)f)!=NL)S A1(re0,rs0(enl(x)))
S A o1f(A1 f,Ax/*f1*/)_(f==len?x(ai(0)):f==str?x(oC):f==cS||f==enl||f==csti?f(x):x)S A o2f(A2 f,Ax,Ay/*f01*/)_(f==bng?y(ai(0)):arf2(f)||f==hsh||f==cst?f(x,y):y(oC))
S A2(o1,/*01*/xtu?o1f(v1[xv],y):y(oC))S A3(o2,/*001*/xtv?o2f(v2[xv],y,z):z(oC))
S AX(em,/*01..1*/Az=oS;Ik=0;i(n,Ay=a[i];I(ytm,k++;z=cat10(z,yx)))I(k>1,z=unq(z))Ab8;i(n,Ay=b[i]=a[i];I(ytm,Au=kv(&y);uq(ie(x,u));b[i]=u(u1(y(fil(ai(yn),fnd(y,zR)))))))AX e8;x=Nz(e8(x,b,n));am(z,x))
A e1f(A1 f,Ax)_(Xt(f(x))Xm(Ay=kv(&x);am(x,Nx(e1f(f,y))))Nn=xN;P(!n,re0(N(o1f(f,fir(x)))))
 I b=xtA&&xr==1;Ay=aA0(n);i(n,Az=f(b?xa:ii(x,i));B(!z,I(b,mrn(xn-i-1,xA+i+1))y=y(0))yq(z))I(b,x=AZ(x))x(y))
S A2(e1,/*01*/Xu(e1f(v1[xv],y))Yt(x1(y))Ym(em(x,&y,1))Nm=yN;P(!m,re0(N(o1(x,fir(y)))))P(ytA&&yr==1,y=AZ(y);Au=oA;i(m,Az=x1(ya);B(!z,u=u(0);mrn(m-i-1,yA+i+1))uq(z))y(u))
                                                                                                           Au=oA;i(m,Az=x1(ii(y,i));B(!z,u=u(0))             uq(z))y(u))
A l2f(A2 f,Ax,Ay/*f01*/)_(Xt(f(x,y))Xm(Az=N(l2f(f,xy,y));       am(_R(xx),z) )     Nn=xN;P(!n,          re0(N(o2f(f,x,fir(y)))))Au=aA0(n);i(n,A w=ii(x,i),v=f(w,yR);mr(w); B(!v,u=u(0))uq(v))y(u))
A r2f(A2 f,Ax,Ay/*f01*/)_(Yt(f(x,y))Ym(Az=Ny(r2f(f,x,_R(yy)));y(am(_R(yx),z)))     Nn=yN;P(!n,x=fir(xR);re0(N(x(o2f(f,x,y  )))))Au=aA0(n);i(n,A v=f(x,ii(y,i));            B(!v,u=u(0))uq(v))y(u))
S A3(l2,/*001*/Xv(l2f(v2[xv],y,z))Yt(x2(y,z))Ym(x=prj(x,A((A)PLH,z),2);x(e1(x,yR)))Nn=yN;P(!n,y=fir(yR);re0(N(y(o2(x,y,z   )))))Au=aA0(n);i(n,A w=ii(y,i),v=x2(w,zR);mr(w);B(!v,u=u(0))uq(v))z(u))
  A3(r2,/*001*/Xv(r2f(v2[xv],y,z))Zt(x2(y,z))Zm(x=prj(x,A(yR,PLH),2);x(e1(x,z)))   Nn=zN;P(!n,          re0(N(o2(x,y,fir(z )))))Au=aA0(n);i(n,A v=x2(y,ii(z,i));           B(!v,u=u(0))uq(v))z(u))
S AX(l8,/*01..1*/Ab8;MC(b,a,8*n);*b=PLH;x=prj(x,b,n);x(e1(x,*a)))
S A3(e2,/*001*/Xv(e2f(v2[xv],y,z))Yt(r2(x,y,z))Zt(l2(x,y,z))P(ytm||ztm,em(x,A(yR,z),2))Nm=yN;P(m-zN,el1(z))P(!m,z(xtv&&xv<11?yR:oA))
 Au=0;Ct=ztA&&zr==1;i(m,A w=ii(y,i),v=x2(w,t?za:ii(z,i));mr(w);B(!v,I(u,u=u(0))I(t,mrn(m-i-1,zA+i+1)))I(!u,u=!v?0:LH(ti,_t(v),ts)?AN(0,an(m,TT[_t(v)])):aA0(m))uq(v))mr(t?AZ(z):z);u)
AX(e8,/*01..1*/P(n==1,e1(x,*a))P(n==2,Ay=*a;y(e2(x,y,a[1])))Ab8;Ct[8];Lm=-1;i(n,Ay=b[i]=a[i];Ym(em(x,a,n))t[i]=ytP?0:ytt?1:ytA?2+(yr>1):4;I(t[i]>1,L l=yN;P(m>=0&&m-l,el8(a,n))m=l))
 P(m<0,x8(a,n))i(n,I(t[i]==1,_r(a[i])+=m))Au=0;I(!m,u=x==LEN?oG:n==2&&xtv&&xv<11?_R(a[!_N(a[1])]):oA)//t[i] 0:pkdatm,1:refatm,2:tA(r=1),3:tA,4:other
 j(m,i(n,Ay=a[i];I(t[i]==2,b[i]=yA[j])I(t[i]>2,b[i]=ii(y,j)))Az=x8(b,n);B(!z,I(u,u=u(0))i(n,Ay=a[i];I(t[i]==1,yr-=m-j-1)I(t[i]==2,mrn(m-j-1,yA+j+1))))I(!j,u=LH(ti,zt,ts)?AN(0,an(m,TT[zt])):oA)uq(z))
 i(n,mr(t[i]-2?a[i]:AZ(a[i])))u)
A e2f(A2 f,Ax,Ay/*f01*/)_(Ik=2*xtt+ytt;P(k==3,f(x,y))
 P(xtm||ytm,P(xtm>ytm,Az=N(e2f(f,xy,y));am(_R(xx),z))P(xtm<ytm,Az=Ny(e2f(f,x,_R(yy)));y(am(_R(yx),z)))
  Az=unq(cat(xx,_R(yx)));x=x1(zR);y=y(y1(zR));I(arf2(f),Au=ai(f==mul||f==dvd);x=fil(u,x);y=fil(u,y))am(z,Nz(x(e2f(f,x,y)))))
 P(!k&&xN-yN,el1(y))Nn=k<2?xN:yN;P(!n,x=fir(xR);re0(N(x(o2f(f,x,fir(y))))))Az=oA;i(n,A v=ii(x,i);Au=f(v,ii(y,i));mr(v);B(!u,z=z(0))zq(u))y(z))
S A2(cs,/*01*/Az,v=yR,u=enl(yR);W(1,z=yR;y=x1(y);P(!y,mr(v);z(u(0)))Im=mtc_(y,z)||mtc_(y,v);z(0);B(m)uq(yR))mr(v);y(u))
S A2(cf,/*01*/Az=yR,u;W(1,zR;u=x1(z);B(!u)P(mtc_(u,y)||mtc_(u,z),y(u(z)))z=z(u))y(z(u)))
S A ns(Ax,Lm,Ay/*0m1*/)_(Az=aA0(m+1);i(m,zq(yR);y=x1(y);B(!y))y?zq(y):z(y))
S A nf(Ax,Lm,Ay/*0m1*/)_(i(m,y=N(x1(y)))y)
S A3(ws,/*001*/Au=enl(zR);W(1,A w=y1(zR);B(!w,u=u(0))B(!tru(w))z=x1(z);P(!z,u(0))uq(zR))z(u))
S A3(wf,/*001*/Au=0;W(1,A w=y1(zR);B(!w,z=z(0))B(!tru(w))z=x1(z);P(!z,0))z)
S A nS(Ax,Lm,OA*a,Nn/*0m1n*/)_(P(n==1,ns(x,m,*a))m=MAX(0,m);Az=aA(n+m),*b=zV;zn=n;MC(b,a,8*n);i(m,mRn(n,b);b[n]=Nz(x8(b,n));zn++;b++)sqz(z))
S A wS(Ax,Ay,OA*a,Nn/*001n*/)_(P(n==1,ws(x,y,*a))Ab8;MC(b,a,8*n);mRn(n,b);Az=sqz(aV(tA,n,b));
 W(1,Au=y1(ii(z,zn-1));B(!u,z=z(0))B(!tru(u))mRn(n-1,b+1);u=x8(b,n);B(!u,*b=au;z=z(0))memmove(b,b+1,8*n-8);b[n-1]=u;zq(uR))mrn(n,b);z)
S A nF(Ax,Lm,OA*a,Nn/*0m1n*/)_(P(n==1,nf(x,m,*a))las(N(nS(x,m,a,n))))
S A wF(Ax,Ay,OA*a,Nn/*001n*/)_(P(n==1,wf(x,y,*a))las(N(wS(x,y,a,n))))
S A3(ls2,/*010*/Y(Rz(ns(x,gl(y),zR))RU(y(ws(x,y,zR)))R_(et1(y)))0)
S A3(lf2,/*010*/Y(Rz(nf(x,gl(y),zR))RU(y(wf(x,y,zR)))R_(et1(y)))0)
S AX(ls8,/*01..1*/Ay=*a;P(n==2,Az=a[1];z(ls2(x,y,z)))Yz(nS(x,gl(y),a+1,n-1))YU(y(wS(x,y,a+1,n-1)))et8(a,n))
S AX(lf8,/*01..1*/Ay=*a;P(n==2,Az=a[1];z(lf2(x,y,z)))Yz(nF(x,gl(y),a+1,n-1))YU(y(wF(x,y,a+1,n-1)))et8(a,n))
X1(raz,RA(Nn=0;i(xn,n+=_N(xa))Ay=xx;y=ytT&&!ytA?AN(0,an(n,ytE?tG:yt)):aA0(n);i(xn,y=Nx(cat10(y,xa)))x(y))Rm(raz(val(x)))R_(x))
S A2(f1,/*01*/Yt(y)P(xtv&&xv<11&&ytZFC,y(arf(x,0,y)))P(x==CAT,raz(y))P(!yN,y(ie(x,y)))Az=ii(y,0);i(yN-1,z=z(x2(z,ii(y,i+1)));B(!z))y(z))
S A3(f2,/*010*/Zt(y(x2(y,zR)))P(xtv&&xv<11&&ytzfc&&ztZFC,arf(x,y,z))P(x==CAT,raz(N(cat10(enl(y),z))))P(xto||xtp,i(zN,y=N(x8(A(y,ii(z,i)),2)))y)i(zN,y=y(x2(y,ii(z,i)));B(!y))y)
AX(f8,/*01..1*/P(n==1,f1(x,*a))P(n==2,Ay=*a,z=a[1];z(f2(x,y,z)))n--;Ay=*a++,z=*a;Lm=cfm(a,n);P(m==-1,y?x8(a-1,n+1):z)P(m<0,I(y,y(0))el8(a,n))P(!m&&!y,x=ie(x,z);mrn(n,a);x)
 Li=!y;I(i,y=ii(z,0))Ab8;W(i<m,*b=y;j(n,b[j+1]=ii(a[j],i))y=x8(b,n+1);B(!y)i++)mrn(n-1,a+1);z(y))
S A3(s2,/*010*/Zt(y(x2(y,zR)))Zm(Au=N(s2(x,y,zy));am(_R(zx),u))P(!zN,y(zR))P(xtv&&xv<11&&ytzc&&ztZC,ars(x,y,z))Au=aA0(zN);i(zN,y=y(x2(y,ii(z,i)));P(!y,u(0))uq(yR))y(u))
S A2(s1,/*01*/Yt(y)P(!yN,y)Ym(Az=kv(&y);am(y,Ny(s1(x,z))))P(x==CAT,y(s2(x,oA,y)))P(xtv&&xv<11&&ytZC,y(ars(x,0,y)))
 Az=ii(y,0),u=enl(zR);i(yN-1,z=z(x2(z,ii(y,i+1)));P(!z,y(u(0)))uq(zR))z(y(u)))
S AX(s8,/*01..1*/Ay=*a;P(n==1,s1(x,y))P(n==2,Az=a[1];z(s2(x,y,z)))Lm=cfm(a+1,n-1);P(m==-2,el8(a,n))I(m<0,m=1)a++;n--;
 Az=aA0(m);Ab8;i(m,*b=y;j(n,b[j+1]=ii(a[j],i))y=x8(b,n+1);P(!y,mrn(n,a);z(0))zq(yR))mrn(n,a);y(z))
S A3(p2,/*010*/Zt(er1(y))Zm(y=N(p2(x,y,zy));am(_R(zx),y))P(!zN,y(zR))P(xtv&&xv<11&&ytzc&&ztZC,arp(x,y,z))Au=aA0(zN);i(zN,A v=ii(z,i),r=x2(v,y);y=v;B(!r,u=u(0))uq(r))y(u))
S A2(p1,/*01*/y(p2(x,ie(x,y),y)))
S A stn(Ax,Ln,Ay/*0n0*/)_(P(n<0||n-(I)n,ed0())P(!ytT,et0())YE(y=gZ(yR);y(stn(x,n,y)))Lm=MAX(0,yn-n+1);Az=aA0(m);P(!m,mr(zx);zx=mkn(rsz(n,fir(yR)));z)i(m,zq(Nz(x1(slc(y,i,i+n)))))z)
S A3(ste,/*010*/Yz(stn(x,gl(y),z))et1(y))S ALA(win,x(stn(au,n,x)))
S AX(cas,/*01..1*/Q(xtZ)K2("{(++y)[x]@'!#x}",x,aV(tA,n,a)))
A w1(Ii,Ax,Ay/*01*/){SW(i,R(0,Xt(e1(x,y))bin(x,y))R(1,P(xtzZ||xtfF,dec(x,y))Xc(jc(xv,y))XC(jC(xV,xn,y))P(xK<2,cf(x,y))f1(x,y))
 R(2,XfF(en1(y))XzZ(enc(x,y))Xc(sc(xv,y))XC(sC(xV,xn,y))P(xK<2,cs(x,y))s1(x,y))R(3,Xz(win(gl_(x),y))p1(x,y))R(4,er1(y))R_(e1(x,y)))}
A w2(Ii,Ax,Ay,Az/*010*/){SW(i,R(0,XZ(cas(x,A(y,zR),2))y(e2(x,y,zR)))R(1,(xK<2?lf2:f2)(x,y,z))R(2,(xK<2?ls2:s2)(x,y,z))R(3,(xK==1?ste:p2)(x,y,z))R(4,y(r2(x,y,zR)))R_(y(l2(x,y,zR))))}
A w8(Ii,Ax,OA*a,Nn/*0,1..1*/){Ay=*a;P(n==1,w1(i,x,y))P(n==2,Az=a[1];z(w2(i,x,y,z)))
 SW(i,R(0,XZ(cas(x,a,n))e8(x,a,n))R(1,P(xK<2||n-xK==1,lf8(x,a,n))f8(x,a,n))R(2,P(xK<2||n-xK==1,ls8(x,a,n))s8(x,a,n))R(3,er8(a,n))R(4,er8(a,n))R_(l8(x,a,n)))}
