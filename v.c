#include"a.h" // ngn/k, (c) 2019-2021 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/blob/master/LICENSE
#define h(T) S V i##T(V*p,Nn)_(T*a=p;LN(a)i(PD(n,a),a[i]=i))\
             S V r##T(V*p,V*q)_(T*a=p,*b=q;LN(a)W(a<b,SWP(*a,*b);a++;b--))\
             S V w##T(L*RE p,Nn,V*RE r)_(T*a=r;LN(p)LN(a)i(n,j(p[i],*a++=i)))
h(B)h(H)h(I)h(L)
#define c_(T,R,p) S V c##T##R(OV*RE v,V*RE w,Nn)_(O T*RE a=v;R*RE r=w;i(PD(n,p),r[i]=a[i]))
#define cN(T,R,p) S V c##T##R(OV*RE v,V*RE w,Nn)_(O T*RE a=v;R*RE r=w;i(PD(n,p),r[i]=a[i]==N##T?N##R:a[i]))
c_(C,H,r)c_(B,H,r)c_(H,C,a)c_(C,I,r)c_(B,I,r)c_(I,C,a)c_(I,B,a)c_(L,C,a)
c_(H,I,r)c_(I,H,a)c_(H,L,r)c_(L,H,a)c_(I,L,r)c_(L,I,a)cN(L,D,a)cN(D,L,a)
A1(flp,XM(AT(tm,mut(x)))Xm(Ay=xy;Er(!ytA||!yn,x)i(yn,Az=ya;En(!ztT,x))Lm=_n(yx);i(yn,Az=ya;El(zn-m,x))AT(tM,mut(x)))
 Xt(enl(enl(x)))P(!xtA||!xn,enl(x))K("{(,/n#'x)(n*!#x)+/:!n:|/#'x}",x))
A tilL(Ln)_(P(n<0,n-NL?add(az(n),tilL(-n)):ed0())Ez(n>1<<30)Ax=atn(tZ(n-1),n);CH(xt-tB,&iB,iH,iI,iL)(xC,n);x)
A1(til,Xz(tilL(gl(x)))XZ(K("{x((*a)#&#)'1_a:|*\\|x,1}",x))Xm(x(_R(xx)))Xo(val(x))Xs(til(N(enl(x))))XS(til(N(val(x))))
 Et(!xtA||xn,x)x)
A1(whr,XA(K("{$[`A~@x;(,&#'*'x),,'/x@\\:!0|/#'x:o'x;,&x]}",x))Xm(Ay=kv(&x);idx(x,Nx(whr(y))))Et(xtM,x)
 x=N(gL(enla(x)));Ln=0;i(xn,Ed(xl<0,x)n+=xl)Ct=tZ(xn-!!xn);Ez(t>tI,x)Ay=atn(t,n);x2(n=0;CH(t-tB,&wB,wH,wI)(xL,xn,yC);y))
A1(rev,XT(x=mut(x);CH(Zt[xt],&rB,rH,rI,rL,rL)(xC,xC+ZT[xt]*(xn-1));x)
 Xm(AT(tm,N(eac1(AT(tA,mut(x)),rev))))XM(Ay=kv(&x);aM(x,Nx(eac1(y,rev))))x)
A1(typ,x(as(TS[xt])))
A1(len,x(az(xN)))L _N(Ax/*0*/)_(xtT?xn:xtm?_N(xy):!xtM?1:_n(xy)?_N(*(A*)_V(xy)):1)
A1(unq,XT(xN<2?x:K("{x@i@<i@:&@[;0;:;1]@~~':x@i:<x}",x))Xz(que(x,ad(1)))et1(x))
A2(fil,YmMA(eac2(x,y,EXC))YF(y==au0?x:x(y))Yt(fir(fil(x,enl(y))))K("{@[y;&^y;:;x]}",x,y))
A2(exc,Xt(fil(x,y))En(xtmM||ytmM,x,y)y=enla(y);P(!xn||!yn,y(x))K("{x@&~(x~\\:y),!0}/",x,y))
A wdn(Ax,Ni,Nj,Nn)_(Ct=xt;Q(xtZC);Ay=atn(t+1,n);x2(CH(t-tB,&cBH,cHI,cIL,cLD,0,cCH)(xC+ZT[t]*i,yC,j-i);y))
S A gt(Ax,A1*f)_(fir(N(f(enl(x)))))
A1(gC,XcC(x)Xz(ac(gl(x)))Xt(gt(x,gC))x=N(gI(x));Ay=aC(xn);x2(cIC(xC,yC,yn);y))
A1(gB,XB( x)Xz(gI(x))    Xt(gt(x,gB))x=N(gI(x));Ay=aB(xn);x2(cIB(xC,yC,yn);y))
A1(gH,XH( x)Xz(gI(x))    Xt(gt(x,gH))x=N(gI(x));Ay=aH(xn);x2(cIH(xC,yC,yn);y))
A1(gI,XiI(x)Xz(ai(gl(x)))XdD(gI(N(gL(x))))Xzc(ai(gl(x)))XZC(Ay=aI(xn);x2(CH(xt-tB,&cBI,cHI,0,cLI,0,cCI)(xC,yC,yn);y))et1(x))
A1(gL,XlL(x)Xz(al(gl(x)))Xt(gt(x,gL))XD(Ay=aL(xn);x2(cDL(xC,yC,yn);y))x=N(gI(x));Ay=aL(xn);x2(cIL(xC,yC,yn);y))
A1(gD,XdD(x)Xz(ad(gl(x)))Xt(gt(x,gD))x=N(gL(x));Ay=aD(xn);x2(cLD(xC,yC,yn);y))
A1(gS,XsS(x)XC(x=str0(x);x(as(syP(xC))))Xc(as(xv))XmMA(eac1(x,gS))et1(x))
A1(pI,XmMA(eac1(x,pI))Xc(pI(enl(x)))XC(x=str0(x);Qs=xC;P(!*s,x(_R(cn[tl])))Lv=pl(&s);x(*s?_R(cn[tl]):az(v)))et1(x))
X(ct,{[tA]=blw,gB,gH,gI,gL,gD,gC,gS})
A2(cst,P(xtS||ytmMA,eac2(x,y,CST))P(xtz&&ytcC,K("{y@(!x)+(x<0)*#y}",x,enla(y)))
 Xs(Ss("b","h","i","l","d","c","","s","I")Sf(x,y,gB,gH,gI,gL,gD,gC,gS,gS,pI))en2(x,y))
A1(sqz,P(!xtA||!xn,x)Ay=oA;i(xn,yq(_R(xa)))x(y))
A1(blw,XA(x)Xt(a1(x))Et(xtm,x)Nn=xN;Ay=aA(n);i(yn,ya=get(x,i))x(y))
A1(fir,Xt(x)Xm(fir(val(x)))x(getr(x,0)))
A1(las,Xt(x)Xm(las(val(x)))x(getr(x,xN-1)))
L tru(Ax/*1*/)_(Lv=xtF?x==av0:xtt?gl_(x):xN;x(0);v)
I mtc_(Ax,Ay/*00*/)_(P(x==y,1)P(xtZ&&ytZ&&xn==yn,gl(rdc(MUL,A(eql(xR,yR)),1)))P(xtz&&ytz,gl_(x)==gl_(y))
 P(xt-yt||xtP||(xtr&&xw-yw)||xn-yn,0)P(!xtR,i(xn*ZT[xt],P(xc-yc,0))1)i(xn,P(!mtc_(xa,ya),0))1)
A2(mtc,x(y(ai(mtc_(x,y)))))
S C ot(Ax)_(xtz?tl:xtZ?tL:xt)S L od(Dd)_(Lv=*(L*)&d;v^(UL)(v>>63)>>1)S I cL(Li,Lj)_(i<j?-1:i>j)I cD(Dd,Dv)_(cL(od(d),od(v)))
S I cA(Ax,Ay/*00*/)_(P(mtc_(x,y),0)
 P(xtd&&ytd,cD(gd_(x),gd_(y)))P(xtzc&&ytd,cD(gl_(x),gd_(y)))P(xtd&&ytzc,cD(gd_(x),gl_(y)))
 Iv=ot(x)-ot(y);P(v,v)Xzc(cL(gl_(x),gl_(y)))Xd(Dv=gd_(x),w=gd_(y);v<w?-1:v>w?1:0)
 Xs(Lv=xv,w=yv;strcmp(syp(&v),syp(&w)))
 I(!xtP,Iv=cL(xn,yn);XT(i(min(xn,yn),Az=get(x,i),u=get(y,i);I d=cA(z,u);mr(z(u));P(d,d))v))cL(x,y))
S I*ascZ(O UC*v,UC*g,I*a,I*b,In,I w)_(UI c[257];iI(a,n);
 j(w,Ms(c,0,Z c);i(n,g[i]=v[w*a[i]+j])i(n,c[g[i]+1]++)I(c[1+*g]-n,i(255,c[i+1]+=c[i])i(n,b[c[g[i]]++]=a[i])SWP(b,a)))a)
S V mrg(OA*v,I*p,I*p1,I*q,I*q1,I*r){W(p<p1&&q<q1,*r++=cA(v[*p],v[*q])<=0?*p++:*q++)Mc(r,p<p1?p:q,p1-p+q1-q<<2);}
S V ascA(OA*v,I*a,I n,I*b){P(n<2,I(n,*b=*a);)I m=n/2;ascA(v,a+m,n-m,b+m);ascA(v,a,m,a+m);mrg(v,a+m,a+2*m,b+m,b+n,b);}
A1(asc,XZC(In=xn;Ez(n-xn,x)x=N(K("{x-&/x}",x));Ay=aC(n),z=aI(n),u=aI(n);x2(y2(ascZ(xC,yC,zI,uI,n,ZT[xt])==zI?u(z):z(u))))
 XA(In=xn;Ez(xn-n,x)Im=n/2;OA*v=xA;Ay=aI(n),z=aI(n-m);I*a=yI,*b=zI;iI(a,n);
  ascA(v,a+m,n-m,b);ascA(v,a,m,a+n-m);mrg(v,a+n-m,a+n,b,b+n-m,a);x(z(y)))
 XS(asc(N(eac1(x,str))))XD(asc(blw(x)))Xm(Ay=kv(&x);idx(x,N(asc(y))))Et(!(xts||xti),x)opn(x))
A1(dsc,Xz(cls(x))Xm(Ay=kv(&x);idx(x,Nx(dsc(y))))Et(!xtT,x)x=rev(asc(rev(x)));sub(ai(xN-1),x))
A1(grp,Xz(K("{x=/:x:!x}",x))Xt(et1(x))Xm(Ay=grp(kv(&x));yy=idx(x,yy);y)K("{x[*'g]!g@:<g:(&(~x~':x i),!0)_i:<x}",x))
A2(bin,Xmt(er2(x,y))YMT(K("{x''y}",x,y))Li=-1,j=xn;W(i+1<j,Lm=(i+j)/2;Az=get(x,m);cA(y,z)<0?j=m:(i=m);z(0))x(y(az(i))))
