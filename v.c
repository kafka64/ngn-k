#include"a.h" // ngn/k, (c) 2019-2020 ngn, GNU AGPLv3 - https://bitbucket.org/ngn/k/raw/master/LICENSE
#define til_(T)   V til##T(V*p,L n)_(T*a=p;ALN(a)F(PAD(n,a),a[i]=i))
#define r_(T)     S V r##T(V*p,L n)_(T*a=p,*b=a+n-1;W(a<b,SWP(*a,*b);a++;b--))
#define c_(T,R,p) S V c##T##R(O T*RE a,R*RE r,UL n)_(F(PAD(n,p),r[i]=a[i]))
#define cN(T,R,p) S V c##T##R(O T*RE a,R*RE r,UL n)_(F(PAD(n,p),r[i]=a[i]==N##T?N##R:a[i]))
til_(H)til_(I)til_(L)r_(C)r_(H)r_(I)r_(L)c_(C,I,r)c_(H,I,r)c_(I,C,a)c_(I,H,a)c_(L,C,a)cN(I,L,r)cN(L,I,a)cN(L,D,a)cN(D,L,a)
A1(flp,P(xtmM,Y(xtm,Ay=xy;er(!ytA||!yn,x)F(yn,Az=yai;en(!ztT,x))L m=An(*ya);F(yn,Az=yai;el(zn-m,x)))AT(xt^tm^tM,x))P(xtt,enl(enl(x)))
 P(!xtA||!xn,enl(x))K("{(,/n#'x)(n*!#x)+/:!n:|/#'x}",x))
A1(til,P(xth||xti||xtl,Ln=gl_(x);I m=n<0;n*=1-2*m;Au=atn(tT(xt),n);(V(*[])(V*,L)){tilH,tilI,tilL}[xt-th](uc,n);(m?add:dex)(x,u))
 P(xtIL,K("{x((*a)#&#)'1_a:|*\\|x,1}",x))P(xtm,fir(AT(tA,x)))P(xto,val(x))et(!xtA||xn,x)x)
A1(whr,et(xtM||xtA,x)P(xtm,Ay=gkv(&x);idx(x,Nx(whr(y))))x=N(gL(enla(x)));Ln=0;F(xn,ed(xli<0,x)n+=xli)Au=aL(n);m2(x,n=0;F(xn,Fj(xli,ul[n++]=i))u))
A1(rev,P(xtt,x)P(xtm,AT(tm,N(ea1(rev,AT(tA,x)))))P(xtM,Ay=gkv(&x);aM(x,Nx(ea1(rev,y))))x=mut(x);(V(*[])(V*,L)){rC,rH,rI,rL,rL}[Zt[xt]](xc,xn);x)
A1(typ,Ct=xt;xr;as(syC(TS[t])))A1(len,dex(x,al(len_(x))))L len_(Ax/*0*/)_(xtT?xn:xtm?len_(xy):!xtM?1:An(xy)?len_(*(A*)dat(xy)):1)
A1(unq,et(!xtT,x)xn<2?x:K("{x@&@[&#x;i;:;]@[;0;:;a=a:*a]@a:~$[`A=@x;~;=]':x@i:<x}",x))
S A2(fil,ytmMA?eac(cv('^'),A(x,y),2):ytt?fir(xpt(x,enl(y))):K("{@[y;&^y;:;x]}",x,y))
A2(xpt,P(xtt,fil(x,y))en(xtmM||ytmM,x,y)y=enla(y);Y(xtA,y=blw(y))K("{x@&^y?x}",x,y))
A2(cut,P(ytil,et(!xtT,x,y)Li=gl(y);P(!in(i,xn),x)Au=atn(xt,xn-1);L w=ZT[xt];mc(uc,xc,i*w);mc(uc+i*w,xc+i*w+w,(xn-i-1)*w);Y(xtA,u=sqz(mRa(u)))xr;u)
 P(ytm,rsh(xpt(mR(yx),x),y))et(ytt,x,y)x=Ny(gL(x));K("{n:#y;y$[`l=@x;$[n<x|-x;!0;x<0;!n+x;x+!n-x];x+!'1_-':x,#y]}",x,y))
S A gt(Ax,A1*f)_(fir(N(f(enl(x)))))
A1(gC,P(xtcC,x)P(xtt,gt(x,gC))x=N(gI(x));Au=aC(xn);m2(x,cIC(xi,uc,un);u))
A1(gH,P(xthH,x)P(xtt,gt(x,gH))x=N(gI(x));Au=aH(xn);m2(x,cIH(xi,uh,un);u))
A1(gI,P(xtiI,x)P(xtdD,gI(N(gL(x))))P(xtl,gt(x,gI))P(xtL,Au=aI(xn);m2(x,cLI(xl,ui,un);u))
 P(xtc,ai(gc(x)))P(xth,ai(gh(x)))P(xtC,Au=aI(xn);m2(x,cCI(xc,ui,un);u))P(xtH,Au=aI(xn);m2(x,cHI(xh,ui,un);u))et(1,x);0)
A1(gL,P(xtlL,x)P(xtt,gt(x,gL))P(xtD,Au=aL(xn);m2(x,cDL(xd,ul,un);u))x=N(gI(x));Au=aL(xn);m2(x,cIL(xi,ul,un);u))
A1(gD,P(xtdD,x)P(xtt,gt(x,gD))x=N(gL(x));Au=aD(xn);m2(x,cLD(xl,ud,un);u))
A1(gS,P(xtsS,x)P(xtC,x=str0(x);dex(x,as(syP(xc))))et(!xtc,x)as(syC(gc(x))))
A2(cst,P(ytmMA,eac(cv('$'),A(x,y),2))P(xtil&&ytC,ap1(y,Ny(til(x))))en(!xts,x,y)
 Ii=gI(K("``s`c`h`i`l`j`d`f?",x));ed(i<0,y)(A1*[]){gS,gS,gC,gH,gI,gL,gL,gD,gD}[i](y))
A1(sqz,P(!xtA||!xn,x)Ay=xx;Ct=yt;P(!sim(y)&&t-tm,x)Ln=xn;F(n,Ay=xai;P(t-yt,x))P(t==tm,Az=yx;F(n,Ay=xai;P(!mtc_(yx,z),x))aM(zR,flp(ea1(val,x))))
 t=tT(t);Au=atn(t,n);I w=ZT[t];asrt(!reft(t));P(w==1,m2(x,cLC(xl,uc,n);u))P(w==4,m2(x,cLI(xl,ui,n);u))asrt(w==8);F(n,Ay=xai;uli=*yl);xr;u)
A1(blw,P(xtA,x)P(xtt,a1(x))et(xtm,x)Ln=len_(x);Au=aA(n);F(n,uai=get(x,i))xr;u)
L tru(Ax/*1*/)_(L r=sim(x)?gl_(x):fun(x)?!xtu||xv:xn;xr;r)A2(dex,xr;y)A1(fir,xtt?x:dex(x,getr(x,0)))A1(las,xtt?x:dex(x,getr(x,xn-1)))
I mtc_(Ax,Ay/*x0y0*/)_(P(x==y,1)P(xt-yt||pkd(x)||xn-yn||(xtr&&xv-yv),0)P(!ref(x),F(xn*ZT[xt],P(xci-yci,0))1)F(xn,P(!mtc_(xai,yai),0))1)
S I cmpL(Li,Lj)_(i<j?-1:i>j)
S I cmp_(Ax,Ay/*x0y0*/)_(P(x==y,0)I d=xt-yt;P(d,d)P(xtc||xth||xti,gi(x)-gi(y))P(xtl,cmpL(gl_(x),gl_(y)))P(xtd,D u=gd_(x),v=gd_(y);u<v?-1:u>v?1:0)
 P(xts,strcmp(syp(gs(x)),syp(gs(y))))Y(!pkd(x),I r=cmpL(xn,yn);P(xtT,F(min(xn,yn),Az=get(x,i),u=get(y,i);I d=cmp_(z,u);zr;ur;P(d,d))r))cmpL(x,y))
A2(mtc,I r=mtc_(x,y);xr;yr;ai(r))
S I bef(A*a,Ii,Ij)_(I r=cmp_(a[i],a[j]);r?r<0:i<j)
S V sft(A*a,I*l,Ii,Ij)_(W(1,Lk=1+2*i;Y(k>j,B)Y(k+1<=j&&bef(a,l[k],l[k+1]),k++)Y(!bef(a,l[i],l[k]),B)SWP(l[i],l[k])i=k))
S A1(asci,P(xn>WI,err("lmt",x))x=N(K("{x-&/x}",x));I w=ZT[xt];UI n=xn;Ay=aC(n),z=aI(n),u=aI(n);C*a=dat(y);UI c[257];tilI(ui,n);
 m2(x,m2(y,Fj(w,ms(c,0,Z c);F(n,a[i]=xc[w*uii+j])F(n,c[a[i]+1]++)Y(c[1+*a]-n,F(255,c[i+1]+=c[i])F(n,zi[c[a[i]]++]=uii)SWP(z,u)))zr;u)))
A1(asc,P(xtA,P(xn>WI,err("lmt",x))A*a=xa,u=til(ai(xn));In=xn,i=n/2;W(i-->0,sft(a,ui,i,n-1))i=n-1;W(i>0,SWP(uii,*ui)sft(a,ui,0,--i))xr;u)
 P(xtm,Ay=gkv(&x);idx(x,N(asc(y))))P(xtIL||xtC,asci(x))P(xtS,asc(N(ea1(str,x))))P(xtD,asc(blw(x)))et(!(xts||xti),x)hop(x))
A1(dsc,P(xti,hcl(x))P(xtm,Ay=gkv(&x);idx(x,Nx(dsc(y))))et(!xtT,x)sub(ai(len_(x)-1),rev(asc(rev(x)))))
A1(grp,P(xtt,et(!xtil)K("{(2#x)#1i,`i$&x}",x))P(xtm,Au=grp(gkv(&x));asrt(Ar(u)==1);uy=idx(x,uy);u)Ay=atn(xt,0),u=a0();C w=Zt[xt];
 F(xn,Lj=!w?fpC(&y,xci):w==2?fpI(&y,xii):w==3?fpL(&y,xli):fpA(&y,mR(xai));Y(j==un,u=apd(u,aL(0)))ua[j]=apv(ua[j],&i))xr;am(y,u))
