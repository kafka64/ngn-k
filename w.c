#include"a.h" // ngn/k, (c) 2019-2020 ngn, GNU AGPLv3 - https://bitbucket.org/ngn/k/raw/master/LICENSE
S AX(enc,P(n>1,ern(n,a))P(xtiI,x=gL(xR);Au=enc(x,a,n);xr;u)P(!xtlL,etn(n,a))
 Ay=N(gL(*a));Yt(Az=enc(x,A(enl(y)),1);zn?fir(flp(z)):dex(z,aL(0)))
 Xt(UL v=gl_(x),r=0,m=0,b=1;F(yn,UL w=yl;Y(r<w,r=w))W(m<64&&b<=r,m++;b*=v)x=rsh(al(m),al(v));dex(x,enc(x,&y,1)))
 P(!xn,yr;a0())Au=aA(xn);y=mut(y);Li=xn;W(--i>0,UL m=xl;m+=!m;Az=ua=aL(yn);F(yn,UL v=yl,w=yl=v/m;zl=v-w*m))
 UL m=*xL;ux=y;Y(m,F(yn,yl%=m))u)
S AX(spl,Q(xtcC);P(n>1,ern(n,a))Ay=*a;Et(!ytC,y)C*s=xtc?(V*)&x:xC;L l=len_(x);El(!l,y)
 Au=a0();C*p=yC,*q=yC,*q2=yC+yn,*q1=q2+1-len_(x);W(q<q1,C m=1;F(l,m&=s[i]==q[i])Y(m,u=apd(u,aCm(p,q));p=q+=l)E(q++))
 Y(x-ac(10)||p<q2,u=apd(u,aCm(p,q2)))yr;u)
S AX(join,Q(xtcC);P(n>1,ern(n,a))Ay=*a;Et(!ytA,y)C*s=xtc?(V*)&x:xC;Lm=len_(x),k=yn,l=m*(k-!!k);
 F(k,Az=ya;Et(!ztcC,y)l+=len_(z))Au=aC(l);C*p=uC;F(k-1,Az=ya;Y(ztc,*p++=gc(z))E(mc(p,zC,zn);p+=zn)mc(p,s,m);p+=m)
 Y(k,Az=yA[k-1];Y(ztc,*p=gc(z))E(mc(p,zC,zn)))yr;u)
A ea1(A1 f,Ax)_(Xt(f(x))Xm(x=mut(x);xy=ea1(f,xy);P(!xy,xy=au0;xr;0)x)I b=xtA&&Ar(x)==1;Ln=len_(x);P(!n,x)Au=a0();
 F(n,Ay=f(b?xa:get(x,i));Y(!y,Y(b,mrn(xn-i-1,xA+i+1))ur;u=0;B)u=apd(u,y))Y(b,x=AN(0,x))xr;u)
S L cfm(OA*a/*0*/,Ln)_(Lm=-1;F(n,Ax=a[i];Y(!xtt,L l=len_(x);P(m>=0&&m-l,-2)m=l))m)
S AX(eaca,Az,b[8];F(n,Ay=a[i];Y(ytm,z=yx;B))zR;F(n,Ay=b[i]=a[i];Y(ytm,P(!mtc_(z,yx),zr,edn(n,b))b[i]=val(y)))
 Au=eac(x,b,n);(u?am:dex)(z,u))
AX(eac,P(xtilIL,n>1?ern(n,a):K("{$[|/`i`l=@x;y(!x)+/:!0|1-x-#y;-1+/~x>\\:y]}",xR,*a))A b[8];Ct[8];Lm=-1;
 F(n,Ay=b[i]=a[i];Ym(eaca(x,a,n))t[i]=pkd(y)?0:ytt?1:ytA?2+(Ar(y)>1):4;Y(t[i]>1,L l=len_(y);P(m>=0&&m-l,eln(n,a))m=l))
 P(m<0,app(x,a,n))F(n,Y(t[i]==1,Ar(a[i])+=m))Au=m?0:a0(); //0:pkdatm,1:refatm,2:tA(r=1),3:tA(r>1),4:other
 Fj(m,F(n,Ay=a[i];Y(t[i]==2,b[i]=yA[j])Y(t[i]>2,b[i]=get(y,j)))
      Az=app(x,b,n);Y(!j,u=sim(z)?AN(0,atn(tT(zt),m)):a0())
      Y(!z,ur;u=0;F(n,Ay=a[i];Y(t[i]==1,Ar(y)-=m-j-1)Y(t[i]==2,mrn(m-j-1,yA+j+1)))B)u=apd(u,z))
 F(n,mr(t[i]-2?a[i]:AN(0,a[i])))u)
S AX(cvg,
 P(n==2,Ay=*a,u=a[1];P(ytil,F(gl(y),u=N(app(x,&u,1)))u)W(1,uR;Az=N2(y,u,app(y,&u,1));Y(!tru(z),B)u=Ny(app(x,&u,1)))yr;u)
 P(n==1,Ay=*a,z=yR,u;W(1,zR;u=N2(y,z,app(x,&z,1));P(mtc_(u,y)||mtc_(u,z),yr;ur;z)zr;z=u)yr;zr;u)ern(n,a))
AX(rdc,P(xtilIL,n>1?ern(n,a):K("{z+x*y}/[0;;]",xR,*a))P(xtcC,join(x,a,n))P(xk<2,cvg(x,a,n))
 Ay=n>1?n--,*a++:0,z=*a;Lm=cfm(a,n);P(m==-1,y?app(x,a-1,n+1):*a)P(m<0,Y(y,yr)eln(n,a))P(!m&&!y,Au=id_(x,z);mrn(n,a);u)
 Y(xtv&&xv<11&&(!y||ytt)&&n==1&&(ztC||ztIL||ztD),Y(ztC,z=gL(z);P(!z,Y(y,yr);0))Y(y&&ytdD||ztdD,Y(y,y=gD(y))z=gD(z))
  P(ztI,I*p=zI,a=!y?m--,*p++:gi(y);m2(z,((V(*)(V*,V*,L))arf[zt-tI][xv][4])(&a,p,m);0);ai(a))
  P(ztL,L*p=zL,a=!y?m--,*p++:gl(y);m2(z,((V(*)(V*,V*,L))arf[zt-tI][xv][4])(&a,p,m);0);al(a))
  P(ztD,D*p=zD,a=!y?m--,*p++:gd(y);m2(z,((V(*)(V*,V*,L))arf[zt-tI][xv][4])(&a,p,m);0);ad(a)))
 Li=!y;Y(i,y=get(z,0))A b[8];W(i<m,*b=y;Fj(n,b[j+1]=get(a[j],i))y=app(x,b,n+1);Y(!y,B)i++)mrn(n,a);y)
S AX(cvi,P(n>2,ern(n,a))Ay,z,u;Y(n==1,y=0;z=*a)E(y=*a;z=a[1])
 P(!y,A y0=y=zR;u=enl(yR);W(1,z=yR;y=app(x,&y,1);P(!y,zr;ur;mr(y0);0)I m=mtc_(y,z)||mtc_(y,y0);zr;Y(m,B)u=apd(u,yR))
      mr(y0);yr;u)
 P(ytil,u=enl(zR);F(gl(y),z=Nu(app(x,&z,1));u=apd(u,zR))zr;u)
 u=enl(zR);W(1,zR;A w=app(y,&z,1);P(!w,yr;zr;ur;0)Y(!tru(w),B)z=app(x,&z,1);P(!z,yr;ur;0)u=apd(u,zR))yr;zr;u)
AX(scn,P(xtilIL,enc(x,a,n))P(xtcC,spl(x,a,n))P(xk<2,cvi(x,a,n))
 P(n==1,Az=*a;P(ztt||!zn,z)P(ztm,z=mut(z);zy=scn(x,&zy,1);z)P(x==cv(','),scn(x,A(a0(),z),2))
  P(xtv&&xv<11&&(ztIL||ztD||ztC),Y(ztC,z=N(gL(z)))
   I w=ZT[zt];Au=ax(z);mc(uC,zC,w);((V(*)(V*,V*,V*,L))arf[zt-tI][xv][5])(zC,zC+w,uC+w,zn-1);u)
  Ay=get(z,0),u=enl(yR);Li=0,n=zn;W(++i<n,y=N(app(x,A(y,get(z,i)),2));u=apd(u,yR))yr;zr;u)
 Y(n==2,Au=a[1];P(utm,u=mut(u);uy=scn(x,A(*a,uy),2);u)P(utt,ern(n,a))P(!un,mr(*a),u))
 Ay=*a++;n--;Lm=cfm(a,n);P(m==-2,yr;eln(n,a))Au=a0(),b[8];
 F(m,*b=y;Fj(n,b[j+1]=get(a[j],i))y=app(x,b,n+1);P(!y,mrn(n,a);ur;0)u=apd(u,yR))mrn(n,a);yr;u)
AX(eap,P(n==1&&xtilIL,eac(x,a,n))P(n>2,ern(n,a))Az=a[n-1],y=n-1?*a:zt-tS?id_(x,*a):as(0);Et(!ztT,y,z)P(!zn,yr;z)
 Y(xtv&&xv<11,
  P(yti&&(ztI||ztC) ,I a=gi(gI(y));z=N(gI(z));Au=ax(z);((V(*)(V*,V*,V*,L))arf[zt-tI][xv][6])(&a,zC,uC,zn);u)
  P(ytil&&(ztL||ztC),L a=gl(gL(y));z=N(gL(z));Au=ax(z);((V(*)(V*,V*,V*,L))arf[zt-tI][xv][6])(&a,zC,uC,zn);u)
  P(ytd||ztD        ,D a=gd(gD(y));z=N(gD(z));Au=ax(z);((V(*)(V*,V*,V*,L))arf[zt-tI][xv][6])(&a,zC,uC,zn);u))
 Au=a0();F(zn,y=app(x,A(get(z,i),y),2);P(!y,zr;ur;0)u=apd(u,y);y=get(z,i))yr;zr;u)
AX(ear,P(n==1&&xtilIL,rdc(x,a,n))P(n-2,enn(n,a))x=prj(x,A(*a,au_plc  ),n);dex(x,eac(x,a+1,1)))
AX(eal,P(n==1&&xtilIL,scn(x,a,n))P(n-2,enn(n,a))x=prj(x,A(au_plc,a[1]),n);dex(x,eac(x,a  ,1)))
