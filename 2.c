#include"a.h" // ngn/k, (c) 2019-2023 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
S L f;//0=add,1=mul,0=mnm,-1=mxm,8=ltn,9=gtn,10=eql

S A admx(Ax,Ay,If/*01v*/)_(Ik=2*xtT+ytT;
 P(!k,P(xti&&yti,az(f?xv*(L)yv:xv+(L)yv))P(xtzc&&ytzc,Lm=gl_(x),n=gl(y);az(f?m*n:m+n))x=Ny(cF(xR));y=Nx(cF(y));F a=gf(x),b=gf(y);af(f?a*b:a+b))
 P(k==2,y(admx(y,xR,f)))
 P(k==3&&xn-yn,el1(y))
 YF(Az=yr-1?aF(yn):y;Nn=zn+3&~3;I(k==1,F a=*xF;I(f,i(n,zf=a*yf))E(i(n,zf=a+yf)))J(f,i(n,zf=xf*yf))E(i(n,zf=xf+yf))y-z?y(z):z)
 YC(admx(x,cG(y),f))
 I ox=0;Az;Nn=yn,i=0;
 I(k==1,L a=gl_(x);I w=MAX(tZ(a)-tG,yw);y=cT[tG+w](y);z=yr-1?an(n,yt):y;
  W(1,I(f,S4(w,{G*b=yG-i*(y!=z);W(i<n,Iv=a*b[i];B(v-(G)v)zg=v;i++)},
               {H*b=yH-i*(y!=z);W(i<n,Iv=a*b[i];B(v-(H)v)zh=v;i++)},
               {I*b=yI-i*(y!=z);W(i<n,Lv=a*b[i];B(v-(I)v)zi=v;i++)},
               {L*b=yL-i*(y!=z);W(i<n,zl=a*b[i];i++)}))
      E(  S4(w,{G*b=yG-i*(y!=z);W(i<n,Iv=a+b[i];B(v-(G)v)zg=v;i++)},
               {H*b=yH-i*(y!=z);W(i<n,Iv=a+b[i];B(v-(H)v)zh=v;i++)},
               {I*b=yI-i*(y!=z);W(i<n,Lv=a+b[i];B(v-(I)v)zi=v;i++)},
               {L*b=yL-i*(y!=z);W(i<n,zl=a+b[i];i++)}))
      B(i>=n)w++;I(y-z,y=wdn(y,i,n,n-i);z=wdn(z,0,i,n))E(y=z=wdn(z,0,n,n))))
 E(Q(k==3);I w=MAX(xw,yw);P(xw-w,x=cT[tG+w](xR);x(admx(x,y,f)))y=cT[tG+w](y);z=yr-1?an(n,yt):y;
  W(1,I(f,S4(w,{G*a=xG-i;G*b=yG-i*(y!=z);W(i<n,Iv=a[i]*(I)b[i];B(v-(G)v)zg=v;i++)},
               {H*a=xH-i;H*b=yH-i*(y!=z);W(i<n,Iv=a[i]*(I)b[i];B(v-(H)v)zh=v;i++)},
               {I*a=xI-i;I*b=yI-i*(y!=z);W(i<n,Lv=a[i]*(L)b[i];B(v-(I)v)zi=v;i++)},
               {L*a=xL-i;L*b=yL-i*(y!=z);W(i<n,zl=a[i]*b[i];i++)}))
      E(  S4(w,{G*a=xG-i;G*b=yG-i*(y!=z);W(i<n,Iv=a[i]+(I)b[i];B(v-(G)v)zg=v;i++)},
               {H*a=xH-i;H*b=yH-i*(y!=z);W(i<n,Iv=a[i]+(I)b[i];B(v-(H)v)zh=v;i++)},
               {I*a=xI-i;I*b=yI-i*(y!=z);W(i<n,Lv=a[i]+(L)b[i];B(v-(I)v)zi=v;i++)},
               {L*a=xL-i;L*b=yL-i*(y!=z);W(i<n,zl=a[i]+b[i];i++)}))
      B(i>=n)w++;x=wdn(ox?x:xR,i,n,n-i);ox=1;I(y-z,y=wdn(y,i,n,n-i);z=wdn(z,0,i,n))E(y=z=wdn(z,0,n,n))))
 I(ox,x(0))y-z?y(z):z)
A2(adm,Ct=xt,u=yt;Lv=1<<t|1<<u;
 P(!(v&~(1<<tG|1<<tH|1<<tI|1<<tL|1<<tC|1<<ti|1<<tl|1<<tc)),admx(x,y,f))
 P(v&(1<<tm|1<<tM|1<<tA),e2f(f?mul:add,x,y))
 P(t==tE,x=gZ(xR);x(adm(x,y)))
 P(u==tE,adm(x,gZ(y)))
 P(v&(1<<tf|1<<tF),P(t-tf&&t-tF,x=Ny(cF(xR));x(adm(x,y)))P(u-tf&&u-tF,adm(x,N(cF(y))))admx(x,y,f))
 et1(y))
A2(dex,y)
A2(add,L o=f;f=0;x=adm(x,y);f=o;x)
A2(mul,L o=f;f=1;x=adm(x,y);f=o;x)
A2(sub,add(x,N(neg(y))))

A2(dvd,Ct=xt,u=yt;Lv=1<<t|1<<u;
 P(!(v&~(1<<tG|1<<tH|1<<tI|1<<tL|1<<tC|1<<ti|1<<tl|1<<tc)),dvd(x,cF(y)))
 P(v&(1<<tm|1<<tM|1<<tA),e2f(dvd,x,y))
 P(t==tE,x=gZ(xR);x(dvd(x,y)))
 P(u==tE,dvd(x,gZ(y)))
 P(v&(1<<tf|1<<tF),
  P(t-tf&&t-tF,x=Ny(cF(xR));x(dvd(x,y)))
  P(u-tf&&u-tF,dvd(x,N(cF(y))))
  x=Ny(cF(xR));y=Nx(cF(y));
  Xf(Fv=gf(x);Yf(af(v/gf(y)))Az=yr==1?y:aF(yn);i(yn,zf=v/yf)y-z?y(z):z)
  Yf(Fv=gf(y);Az=xr==1?x:aF(xn);i(xn,zf=xf/v)x-z?x(z):z)
  P(xn-yn,el2(x,y))
  Az=xr==1?x:yr==1?y:aF(xn);i(xn,zf=xf/yf)x==z?y(z):y==z?x(z):x(y(z)))
 et1(y))

Y2(mod,RmMA(e2f(mod,x,y))Rzc(fir(N(mod(x,enl(y)))))RC(mod(x,cG(y)))RE(mod(x,gZ(y)))RfF(Ln=gl_(x);P(!n,y)P(n<0,en1(y))K2("{y-x*(-x)!_y}",x,y))R_(ed1(y))
 RZ_E(Lm=gl_(x);P(!m,y)
  P(m<0,m=-m;Az=an(yn,yt);S4(yw,i(zn,Cv=yg;zg=v<0?-1-~v/m:v/m),i(zn,Hv=yh;zh=v<0?-1-~v/m:v/m),i(zn,Iv=yi;zi=v<0?-1-~v/m:v/m),i(zn,Lv=yl;zl=v<0?-1-~v/m:v/m))y(z))
  P(m&m-1,Az=an(yn,tZ(m));I wy=yw;S4(zw,i(zn,zg=(iw(y,wy,i)%m+m)%m),i(zn,zh=(iw(y,wy,i)%m+m)%m),i(zn,zi=(iw(y,wy,i)%m+m)%m),i(zn,zl=(iw(y,wy,i)%m+m)%m))y(z))
  m--;I t=tZ(m),w=t-tG;y=mut(N(cT[t](y)));i(3-w,m|=m<<(8<<w+i))L*p=yV;i((yn<<w)+31>>5,j(4,*p++&=m))y))
X2(bng,RMT(ytm||rnk(x)<0?ed1(y):ytt?bng(x,rsz(xN,y)):xN-yN?el1(y):am(xR,y))Rs(x=rsz(yN,x);x(bng(x,y)))Rzc(mod(x,y))R_(et1(y)))

S A mmmz(If,Lv,Ax)_(X(RC(mmmz(f,v,cG(x)))Rzc(az(f^MIN(f^v,f^gl(x))))R_(et1(x))
 RZ_E(Ct=tZ(v);I(xt<t,x=cT[t](x))E(t=xt)Nn=xn;Ay=xr==1?x:an(n,t);C w=t-tG;n+=31>>w;v^=f;
  S4(w,i(n&~31,yg=f^MIN(v,f^xg)),i(n&~15,yh=f^MIN(v,f^xh)),i(n&~7,yi=f^MIN(v,f^xi)),i(n&~3,yl=f^MIN(v,f^xl)))x-y?x(y):y))0)
S Y2(mmmZ,RC(mmm(x,cG(y)))Rzc(y(mmm(y,xR)))R_(et1(y))
 RZ_E(P(xn-yn,el1(y))C w=xw;P(w<yw,x=cT[tG+yw](xR);x(mmmZ(x,y)))y=cT[tG+w](y);Nn=yn;Az=yr==1?y:an(n,tG+w);n+=31>>w;
  S4(w,i(n&~31,zg=f^MIN(f^xg,f^yg)),i(n&~15,zh=f^MIN(f^xh,f^yh)),i(n&~7,zi=f^MIN(f^xi,f^yi)),i(n&~3,zl=f^MIN(f^xl,f^yl)))y-z?y(z):z))
S A mmmx(Ax,Ay/*01*/,I f1){SW(xtT<<1|ytT,R(0,Lv=gl_(x),w=gl(y);az(f1==0?MIN(v,w):MAX(v,w)))R(1,mmmz(f,gl_(x),y))R(2,mmmz(f,gl(y),xR))R_(mmmZ(x,y)))}
A2(mmm,Ct=xt,u=yt;Lv=1<<t|1<<u;
 P(!(v&~(1<<tG|1<<tH|1<<tI|1<<tL|1<<tC|1<<ti|1<<tl|1<<tc)),mmmx(x,y,f))
 P(v&(1<<tm|1<<tM|1<<tA),e2f(mmm,x,y))
 P(t==tE,x=gZ(xR);x(mmm(x,y)))
 P(u==tE,mmm(x,gZ(y)))
 P(v&(1<<tf|1<<tF),P(t-tf&&t-tF,x=Ny(cF(xR));x(mmm(x,y)))P(u-tf&&u-tF,mmm(x,N(cF(y))))x=of1(xR);y=of1(y);x(of0(Nx(mmm(x,y)))))
 et1(y))
A2(mnm,I o=f;f= 0;x=mmm(x,y);f=o;x)
A2(mxm,I o=f;f=-1;x=mmm(x,y);f=o;x)

TD G G4[4],G8[8],G16[16],G32[32];TD H H16[16];TD I I8[8];TD L L4[4];
S V ltng(Lv,O V*RES a,V*RES b,Nn){G w=v;O G32*p=a;G32*r=b;i(n+31>>5,j(32,r[i][j]=w< p[i][j]))}
S V ltnh(Lv,O V*RES a,V*RES b,Nn){H w=v;O H16*p=a;G16*r=b;i(n+15>>4,j(16,r[i][j]=w< p[i][j]))}
S V ltni(Lv,O V*RES a,V*RES b,Nn){I w=v;O I8 *p=a;G8 *r=b;i(n+ 7>>3,j( 8,r[i][j]=w< p[i][j]))}
S V ltnl(Lv,O V*RES a,V*RES b,Nn){L w=v;O L4 *p=a;G4 *r=b;i(n+ 3>>2,j( 4,r[i][j]=w< p[i][j]))}
S V gtng(Lv,O V*RES a,V*RES b,Nn){G w=v;O G32*p=a;G32*r=b;i(n+31>>5,j(32,r[i][j]=w> p[i][j]))}
S V gtnh(Lv,O V*RES a,V*RES b,Nn){H w=v;O H16*p=a;G16*r=b;i(n+15>>4,j(16,r[i][j]=w> p[i][j]))}
S V gtni(Lv,O V*RES a,V*RES b,Nn){I w=v;O I8 *p=a;G8 *r=b;i(n+ 7>>3,j( 8,r[i][j]=w> p[i][j]))}
S V gtnl(Lv,O V*RES a,V*RES b,Nn){L w=v;O L4 *p=a;G4 *r=b;i(n+ 3>>2,j( 4,r[i][j]=w> p[i][j]))}
S V eqlg(Lv,O V*RES a,V*RES b,Nn){G w=v;O G32*p=a;G32*r=b;i(n+31>>5,j(32,r[i][j]=w==p[i][j]))}
S V eqlh(Lv,O V*RES a,V*RES b,Nn){H w=v;O H16*p=a;G16*r=b;i(n+15>>4,j(16,r[i][j]=w==p[i][j]))}
S V eqli(Lv,O V*RES a,V*RES b,Nn){I w=v;O I8 *p=a;G8 *r=b;i(n+ 7>>3,j( 8,r[i][j]=w==p[i][j]))}
S V eqll(Lv,O V*RES a,V*RES b,Nn){L w=v;O L4 *p=a;G4 *r=b;i(n+ 3>>2,j( 4,r[i][j]=w==p[i][j]))}
S V ltnG(O V*RES a,O V*RES b,V*RES c,Nn){O G32*p=a,*q=b;G32*r=c;i(n+31>>5,j(32,r[i][j]=p[i][j]< q[i][j]))}
S V ltnH(O V*RES a,O V*RES b,V*RES c,Nn){O H16*p=a,*q=b;G16*r=c;i(n+15>>4,j(16,r[i][j]=p[i][j]< q[i][j]))}
S V ltnI(O V*RES a,O V*RES b,V*RES c,Nn){O I8 *p=a,*q=b;G8 *r=c;i(n+ 7>>3,j( 8,r[i][j]=p[i][j]< q[i][j]))}
S V ltnL(O V*RES a,O V*RES b,V*RES c,Nn){O L4 *p=a,*q=b;G4 *r=c;i(n+ 3>>2,j( 4,r[i][j]=p[i][j]< q[i][j]))}
S V eqlG(O V*RES a,O V*RES b,V*RES c,Nn){O G32*p=a,*q=b;G32*r=c;i(n+31>>5,j(32,r[i][j]=p[i][j]==q[i][j]))}
S V eqlH(O V*RES a,O V*RES b,V*RES c,Nn){O H16*p=a,*q=b;G16*r=c;i(n+15>>4,j(16,r[i][j]=p[i][j]==q[i][j]))}
S V eqlI(O V*RES a,O V*RES b,V*RES c,Nn){O I8 *p=a,*q=b;G8 *r=c;i(n+ 7>>3,j( 8,r[i][j]=p[i][j]==q[i][j]))}
S V eqlL(O V*RES a,O V*RES b,V*RES c,Nn){O L4 *p=a,*q=b;G4 *r=c;i(n+ 3>>2,j( 4,r[i][j]=p[i][j]==q[i][j]))}
S A cmpv(Lv,Ax/*1*/,If)_(I w=xw;P(tG+w<tZ(v),rsz(x(xn),ai(f==8?v<0:f==9?v>0:0)))Nn=xn;Ay=aG(n);Mx(A(&ltng,ltnh,ltni,ltnl,gtng,gtnh,gtni,gtnl,eqlg,eqlh,eqli,eqll)[f-8<<2|w](v,xV,yG,n));y)
S A cmpV(Ax,Ay/*01*/,If)_(P(xn-yn,el1(y))I w=xw;P(w<yw,x=cT[tG+yw](xR);x(cmpV(x,y,f)))I(yw<w,y=cT[tG+w](y))Nn=xn;Az=aG(n);
 My(SW(f,C(8,A(&ltnG,ltnH,ltnI,ltnL)[w](xV,yV,zV,n))C(9,A(&ltnG,ltnH,ltnI,ltnL)[w](yV,xV,zV,n))C(10,A(&eqlG,eqlH,eqlI,eqlL)[w](xV,yV,zV,n))))z)
S A cmpx(Ax,Ay/*01*/,If){SW(xtT<<1|ytT,R(0,Lv=gl_(x),w=gl(y);ai(f==8?v<w:f==9?v>w:v==w))R(1,cmpv(gl_(x),y,f))R(2,cmpv(gl(y),xR,f==8?9:f==9?8:f))R_(cmpV(x,y,f)))}
A2(cmp,Ct=xt,u=yt;Lv=1<<t|1<<u;
 P(!(v&~(1<<tG|1<<tH|1<<tI|1<<tL|1<<tC|1<<ti|1<<tl|1<<tc)),cmpx(x,y,f))
 P(v&(1<<tm|1<<tM|1<<tA),e2f(cmp,x,y))
 P(v&1<<tS,P(f==10&!(v&~(1<<ts|1<<tS)),cmpx(x,y,f))e2f(cmp,x,y))
 P(v&1<<ts,v^1<<ts?et1(y):ai(f==8?qA(x,y)<0:f==9?qA(x,y)>0:xv==yv))
 P(t==tE,x=gZ(xR);x(cmp(x,y)))
 P(u==tE,cmp(x,gZ(y)))
 P(v&(1<<tf|1<<tF),P(t-tf&&t-tF,x=Ny(cF(xR));x(cmp(x,y)))P(u-tf&&u-tF,cmp(x,N(cF(y))))P(f==10,cmpx(x,y,f))x=of1(xR);y=of1(y);x(cmpx(x,y,f)))
 et1(y))
A2(ltn,I o=f;f= 8;x=cmp(x,y);f=o;x)
A2(gtn,I o=f;f= 9;x=cmp(x,y);f=o;x)
A2(eql,I o=f;f=10;x=cmp(x,y);f=o;x)
