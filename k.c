#include"k.h" // ngn/k, (c) 2019-2020 ngn, GNU AGPLv3 - https://bitbucket.org/ngn/k/raw/master/LICENSE
S A1(__1,en(x))S A2(__2,en(x,y))S A1(sam,x) //                                                                                  plc
O C vc[]={':','+','-','*','%','!','&','|','<','>','=','~',',','^','#','_','$','?','@','.','0','1','2','3','4','5','\'','/','\\','[',  0,  0};
O V*vf[]={sam,flp,neg,fir,sqr,til,whr,rev,asc,dsc,grp,not,enl,nul,len,flr,str,unq,typ,val,u0c,u1c,__1,__1,las,out,   0,  0, cmd,  0,  0,  0,
          dex,add,sub,mul,dvd,mod,mnm,mxm,ltn,gtn,eql,mtc,cat,xpt,rsh,cut,cst,fnd,ap1,ap2,v0c,v1c,__2,__2,com,  0, eac,rdc, scn,eap,ear,eal};
A1(mkn,P(xtaAX,ea1(mkn,x))A y=mR(cn[xt]);xtt?dex(x,y):rsh(len(x),y)) //                                       mkl   '   /    \  ':   /:  \:
A2(id_/*x0y0*/,S O C t[]={4,0,0,1,1,2,2,3,3,2,4};xtv&&Av(x)<11?mR(ci[t[Av(x)]][ytdD?0:ytiI?1:2]):mkn(fir(yR)))
A2(com,AK(Ak(y),AT(tq,a2(x,y))))AX(prj,P(xtX,app(x,a,n))UC k=max(n,Ak(x));F(n,k-=a[i]!=au_plc)A u=AK(k,atn(tp,n+1));ux=xR;mc(ua+1,a,n*ZV);u)
S A getA(A x/*0*/,L i)_(asrt(xtA);A y=xy,u=a0();Fj(yn,u=apd(u,get(yaj,i)))aa(mR(xx),u))
A get(A x/*0*/,L i)_(xtX?mR(xai):xtI?ai(xii):xtL?al(xli):xtS?as(xii):xtC?ac(xci):xtD?ad(xdi):xta?get(xy,i):xtA?getA(x,i):xR)
A getr(A x/*0*/,L i)_(asrt(!xtt);in(i,xn)?get(x,i):xn?mkn(get(x,0)):mR(cn[xt]))
S A2(idx_/*x0y1*/,asrt(xtT||xtaA);P(y==au_plc,flp(xR))P(ytX,eac(x,&y,1))P(yta,y=mut(y);yy=idx_(x,yy);y)P(fun(y),et(y))P(ytt,getr(x,gl(y)))
 y=N(gL(y));L w=tz(xt);A u=xtA?a0():atn(xt,yn);P(xtX||xtA,u=AN(0,u);F(yn,u=apd(u,getr(x,yli)))yr;u)
 P(w==0,C h=gc (cn[xt]);mr2(y,F(un,L j=yli;uci=in(j,xn)?xcj:h)u))
 P(w==2,I h=gi (cn[xt]);mr2(y,F(un,L j=yli;uii=in(j,xn)?xij:h)u))
 P(w==3,L h=gl_(cn[xt]);mr2(y,F(un,L j=yli;uli=in(j,xn)?xlj:h)u))en(y,u))
AX(app,P(xtT,P(xtX,L c=1;F(n,A y=a[i];L c0=c;c=ytt;x=N(!c0?eal(cv('@'),A_(x,y),2):i?idx(x,y):idx_(x,y)))x)n==1?idx_(x,*a):ein(n,a))
 P(xts,C*s=symptr(gs(x)),c=*s;A y=*a;s[1]?enn(n,a):n>1?ern(n,a):c=='j'?json(y):c=='k'?kst(y):c=='p'?prs(y):c=='t'?dex(y,al(now())):
  c=='x'?frk(y):c=='z'?ser(y):c=='e'?yr,epr(),au0:enn(n,a))
 P(xta,A y=N(idx_(xy,N(fnd(mR(xx),*a))));P(n==1,y)dex(y,app(y,a+1,n-1)))P(xtA,P(n>1,ern(n,a))A y=*a;P(ytilIL,idx_(x,y))app(AT(ta,x),a,n))
 P(xtil,P(n>1,ern(n,a))A y=*a;Y(ytc,y=enl(y))E(P(!ytC,et(y)))write(gl_(x),yc,yn);y)
 P(n<Ak(x),prj(x,a,n))P(xtv,n==2?((A2*)vf[32+Av(x)])(*a,a[1]):x==cv('@')?amd(a,n):x==cv('.')?dmd(a,n):enn(n,a))P(xtr,((AX*)vf[58+Av(x)])(xx,a,n))
 P(n>Ak(x),ern(n,a))P(xtu,((A1*)vf[Av(x)])(*a))P(xtw,C v=Av(x);AK(0<v&&v<4&&Ak(*a)==2?1:fun(*a)?Ak(*a):1,AV(v,atnv(tr,1,a))))P(xto,run(x,a,n))
 P(xtp,L m=xn-1,j=0;A b[m+n];F(xn-1,b[i]=xa[i+1]==au_plc&&j<n?a[j++]:mR(xa[i+1]))W(j<n,b[m++]=a[j++])app(xx,b,m))
 P(xtq,app(xx,&(A){N(app(xy,a,n))},1))etn(n,a))
A1(val,P(xtS,A y=glb;F(xn,P(!yta,et(x))A z=yx,u=yy;P(!ztS||!utX,ed(x))I k=xii;L j=fndi(z,k);P(j<0,xr;err(symptr(k)))y=uaj)xr;yR)
 P(xtX,P(!xn,x)P(xn==1,fir(x))P(xn>9,err("mxa",x))x=mut(x);A u=app(xx,&xy,xn-1);mr(AN(1,x));u)P(xtC,x=N(cpl(N(prs(x))));dex(x,run(x,0,0)))
 xtc||xts?val(enl(x)):xta?las(AT(tX,x)):xtr?cat(AT(tX,x),aw(Av(x))):c3(tu,xt,tw)?al(Av(x)):xto||xtp||xtq?AT(tX,x):et(x))
A2(idx,dex(x,idx_(x,y)))A2(ap1,dex(x,app(x,&y,1)))A2(ap2,y=enla(y);L n=yn;P(!n,yr;x)P(n>8,err("mxa",x,y))y=mRa(Nx(blw(y)));A u=app(x,ya,n);xr;yr;u)
S A set(A x,L i,A y)_(asrt(Ar(x)==1);Y(!xtX&&(!sim(y)||xt-t_lst(yt)),x=blw(x))
 P(xtX,mr(xai);xai=y;sim(y)?sqz(x):x)P(xtC,xci=gc(y);x)P(xtI,xii=gi(y);x)P(xtL,xli=gl(y);x)P(xtD,xdi=gd(y);x)P(xtS,xii=gs(y);x)en(x,y))
S A*pth(A x/*1*/)_(x=enla(x);A y=glb;asrt(xtS&&Ar(y)==1&&yta&&At(yx)==tS&&At(yy)==tX);L j=fpi(&yx,*xi);Y(j==An(yy),yy=apd(yy,xn>1?aa0():au0))A*p=A(yy)+j;
 F(xn-1,A y=*p;P(!yta,(A*)ed(x))*p=y=mut(y);A z=yx;P(!ztS,(A*)ed(x))L j=fpi(&yx,xi[i+1]);A u=yy;P(!utX,(A*)ed(x))yy=j==un?apd(u,aa0()):mut(u);
  asrt(Ar(yy)==1);p=A(yy)+j)
 xr;p)
S A mend(O A*a,I n,AA*f)_(A*p=pth(*a);P(!p,mrn(n-1,a+1);0)A b[8];*b=*p;*p=au0;mc(b+1,a+1,(n-1)*ZV);*p=mR(N(f(b,n))))
AA(am1,A x=*a,y=a[1],z=a[2];P(n==3&&!fun(z),am1(A_(x,y,av0,z),4))P(xtt,etn(n,a))
 P(xta,x=mut(x);xx=unq(cat(xx,yR));xy=cat(xy,rsh(al(An(xx)-An(xy)),id_(z,xy)));
  A b[8];*b=xy;b[1]=fnd(mR(xx),y);mc(b+2,a+2,(n-2)*ZV);xy=am1(b,n);P(!xy,xy=au0;xr;0)x)
 P(ytt,x=mut(x);y=gL(y);P(!y,xr;mrn(n-2,a+2);0)
  L i=gl(y);P(!in(i,xn),xr;ein(n-2,a+2))A b[8];*b=get(x,i);mc(b+1,a+3,(n-3)*ZV);A u=app(z,b,n-2);zr;set(x,i,Nx(u)))
 P(n==4&&(xtIL||xtD)&&ytIL&&ztv&&Av(z)<8&&xt==t_lst(At(a[3])),x=mut(x);A u=a[3];I d=utT;u=enla(u);P(d&&yn-un,el(x,y,u))y=gL(y);
  mr2(y,mr2(u,x?((int(*)(V*,L,L*,L,V*,I))arf[xt-tI][Av(z)][6])(xc,xn,yl,yn,uc,d):1))?x:ei(x))
 P(n==4&&xtC&&ytL&&z==av0&&t_lst(At(a[3]))==tC,x=mut(x);A u=a[3];I d=utT;u=enla(u);Y(d&&yn-un,el(x,y,u))
  mr2(y,mr2(u,F(yn,L j=yli;Y(!in(j,xn),x=ei(x);B)xcj=uc[d*i])x)))
 rdc(cv('@'),a,n))
AA(amd,A x=*a;xts?mend(a,n,am1):am1(a,n))
AA(dm1,A x=*a,y=a[1],z=a[2];L m=len_(y);P(!m||y==au0,yr;A b[8];*b=x;mc(b+1,a+3,(n-3)*ZV);dex(z,app(z,b,n-2)))
 P(m==1,A b[8];mc(b,a,n*ZV);b[1]=fir(y);am1(b,n))P(n-4,enn(n,a))K("{[x;y;z;u]@[x;*y;.[;1_y;z;];u]}",x,y,z,a[3]))
AA(dmd,A x=*a,y=a[1],z=a[2];n==3&&fun(x)?try(x,y,z):n==3&&!fun(z)?dmd(A_(x,y,av0,z),4):xtsS?mend(a,n,dm1):dm1(a,n))
A K0(O C*s,I n)_(L m=mu;A x=val(aCn(s,n+1));mu=m;x)
