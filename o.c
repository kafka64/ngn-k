#include"a.h" // ngn/k, (c) 2019-2023 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE

NI B mtc_(A x,A y/*00*/)_(
 P(x==y,1)
 P(xt==yt&&((1<<ti|1<<tc|1<<ts|1<<tu|1<<tv|1<<tw|1<<tx)&1<<xt),xv==yv)
 P(xtz&&ytz,gl_(x)==gl_(y))
 XE(x=gZ(xR);x(mtc_(x,y)))
 YE(mtc_(y,x))
 P(xtZ&&ytZ&&xt-yt&&xn==yn,C t=MAX(xt,yt);x=cT(t,xR);y=cT(t,yR);x(y(!memcmp(xV,yV,xn*xW))))
 P(xt-yt||xtP||(xtr&&xE-yE)||xn-yn,0)
 P(!xtR||(LH(tB,xt,tS)&&xt==yt&&xn==yn),!memcmp(xV,yV,(W)xn*TW[xt]+7>>3))
 i(xn|!xn,P(!mtc_(xa,ya),0))1)

A2(mtc,/*01*/y(ai(mtc_(x,y))))
S O W o=(-1ull>>12)-1;S L t(L v)_(v^(W)(v>>63)>>1);S A of_(A,I);
S L o0(L v)_(t(v-o))S V of0LL(O L*a,L*r,N n){i(n+3&~3,r[i]=o0(a[i]))}A1(of0,Q(xtlL);of_(x,0))
S L o1(L v)_(t(v)+o)S V of1LL(O L*a,L*r,N n){i(n+3&~3,r[i]=o1(a[i]))}A1(of1,Q(xtfF);of_(x,1))
S A of_(A x,I f)_(N n=xn;C t=xt+(tf-tl)*(1-2*f);A y=xr-1?an(n,t):AT(t,xR);Mx((f?of1LL:of0LL)(xV,yV,n))y)
S I ql(L i,L j)_(i<j?-1:i>j)
I qf(F u,F v)_(ql(o1(*(L*)&u),o1(*(L*)&v)))
I qA(A x,A y/*00*/)_(I v=TS[xt]-TS[yt];P(v,v)
 X(Ril(ql(gl_(x),gl_(y)))
   Rf(qf(*xF,*yF))
   Rs(L v=xv,w=yv;strcmp(qs(&v),qs(&w)))
   RT(i(MIN(xn,yn),A z=ii(x,i),u=ii(y,i);I d=qA(z,u);mr(z(u));P(d,d))ql(xn,yn))
   Ropqr(x=str(xR);y=str(yR);I r=qA(x,y);x(y(0));r)
   R_(ql(x,y)))0)
S I*ascZ(O UC*v,UC*g,I*a,I*b,I n,I w)_(U c[257];tilV(a,0,n,2);j(w,MS(c,0,SZ c);i(n,g[i]=v[w*a[i]+j])i(n,c[g[i]+1]++)I(c[1+*g]-n,i(255,c[i+1]+=c[i])i(n,b[c[g[i]]++]=a[i])SWP(b,a)))a)
S A grdm(A x/*1*/,A1 f)_(A y=kv(&x);x(x1(Nx(f(y)))))

S V mrg(A x/*0*/,I*p,I*q,I*b,I*d,I k){I*r=p-q+b;W(1,I(qA(xA[*p],xA[*b])<k,*r++=*p++;P(p==q))E(*r++=*b++;B(b==d)))MC(r,p,q-p<<2);}//merge(k=1),mergeR(k=0)
S V cis(A x/*0*/,I*p,N n,I*r){i(n,I j=0,k=i,v=p[i];A y=xA[v];W(j<k,I m=j+k>>1;I(qA(y,xA[r[m]])<0,k=m)E(j=m+1))memmove(r+j+1,r+j,i-j<<2);r[j]=v)}//copying_insertionsort
S V cms(A x/*0*/,I*p,N n,I*r){P(n<17,cis(x,p,n,r);)N m=n/2;cms(x,p+m,n-m,r+m);cms(x,p,m,p+m);mrg(x,p+m,p+2*m,r+m,r+n,1);}//copying_mergesort
A1(ascA,N n=xn;A z=aI(n);I*p=zI;tilV(p,0,n,2);P(n<17,cis(x,p,n,p);x(z))N m=n/2;A y=aI(n-m);I*t=yI;cms(x,p+m,n-m,t);cms(x,p,m,p+n-m);mrg(x,t,t+n-m,p+n-m,p+n,0);x(y(z)))
X1(asc,Rt(opn(x))Rm(grdm(x,asc))RM(K1("{(!#x){x@<y x}/|.+x}",x))RS(asc(str(x)))RF(asc(of1(x)))RA(P(xn-(I)xn,ez(x))ascA(x))RE(Lij x(0);aE(0,j-i))
 RGC(P(xn-(I)xn,ez(x))N n=xn;I c[257]={},*c129=c+129;i(n,c129[xg]++)i(256,c[i+1]+=c[i])A y=aI(n);I*c128=c+128;Mx(i(n,yI[c128[xg]++]=i))cT(tZ(n-1),y))
 R_(P(xn-(I)xn,ez(x))x=N(K1("{x-&/x}",x));N n=xn;A y=aC(n),z=aI(n),u=aI(n);Mx(My(u=ascZ(xV,yV,zV,uV,n,xW)==zV?u(z):z(u)))u))
X1(dsc,RMT(x=rev(asc(rev(x)));sub(ai(xN-1),x))Rm(grdm(x,dsc))Ril(cls(gl(x)))R_(et(x)))
X1(grp,Ril(K1("=/:/2#,!:",x))Rm(A y=kv(&x);y=Nx(grp(y));yy=x(i1(x,yy));y)R_(et(x))
 RGC(A r[  256]={};UC b[  256];U nb=0;U c[  256]={};i(xn,UC v=xg;I(!c[v]++,b[nb++]=v))A z=aA(nb);i(nb,za=r[b[i]]=aI(c[b[i]]))I(!nb,*zA=emp(tG))MS(c,0,SZ c);i(xn,UC v=xg;_I(r[v])[c[v]++]=i)x(am(aV(xt,nb,b),z)))
 RH( A r[65536]={};UH b[65536];U nb=0;U c[65536]={};i(xn,UH v=xh;I(!c[v]++,b[nb++]=v))A z=aA(nb);i(nb,za=r[b[i]]=aI(c[b[i]]))I(!nb,*zA=emp(tG))MS(c,0,SZ c);i(xn,UH v=xh;_I(r[v])[c[v]++]=i)x(am(aV(xt,nb,b),z)))
 RI(K1("{$[x;(x[*'g])!g@:<g:(&~(~*x)=':x i)_i:<x;x!0#,!0]}",x))
 R6(tA,tE,tL,tF,tS,tM,K1("{$[#x;(x[*'g])!g@:<g:(&~x~':x i)_i:<x;x!0#,!0]}",x)))
S A1(cSI,Q(xtS||xtI)C t=tS^tI^xt;xr-1?x(aV(t,xn,xV)):AT(t,x))
X1(unq,RM(en(x))Rm(unq(val(x)))RE(x)RS(cSI(unq(cSI(x))))Ril(rndF(gl(x)))R_(et(x))RB(unq(cG(x)))
 RGC(C a[256]={},r[256],t=xt;U n=0;Mx(i(xn,UC v=xg;I(!a[v],a[v]=1;r[n++]=v)))aV(t,n,r))
 R5(tA,tH,tI,tL,tF,P(xn<2,x)P(xn<<xw<pg&&!xtA,K1("{x@&(x?x)=!#x}",x))K1("{x@i@<i@:&@[;0;:;1]@~~':x@i:<x}",x)))
