#include"a.h" // ngn/k, (c) 2019-2020 ngn, GNU AGPLv3 - https://bitbucket.org/ngn/k/raw/master/LICENSE
S C*s;S A0 jv;S C jw()_(W(si(" \n\t\r",*s)<4,++s)*s)S A0(je,0)
S A0(jd,Im=*s=='-';s+=m;Cc=*s++;P(!dgt(c),0)Dv=c-'0';W(dgt(*s),v*=10;v+=*s++-'0')
 Y(*s=='.',s++;D t=1;W(dgt(*s),t/=10;v+=(*s++-'0')*t))
 Y((*s|32)=='e',s++;s+=*s=='+';L e=pl(&s);D t=10;Y(e<0,e=-e;t=.1)P(e>308,0)i(e,v*=t))ad(m?-v:v))
S A1(ju,Iv=0;i(4,Cc=*s++;v=16*v+(dgt(c)?c-'0':c3('a',c|32,'f')?(c|32)-'a'+10:99999);P(v<0,s--;0))
 P(v<128,apc(x,v))P(v<2048,x=apc(x,192|v>>6);apc(x,128|63&v))x=apc(x,224|v>>12);x=apc(x,128|63&v>>6);apc(x,128|63&v))
S A0(js,s++;Ax=aC0;W(1,C*t=s;Cc=*s++;W(c-'"'&&c-'\\'&&c>31,c=*s++)P(c<32,s--;xr;0)x=catc(x,t,s-1-t);P(c=='"',x)c=*s++;
                       Ii=si("\"\\/bfnrtu",c);P(i>8,xr;s--;0)x=i<8?apc(x,"\"\\/\b\f\n\r\t"[i]):ju(x);t=s)0)
S A0(ja,s++;Ax=aA0;P(jw()==']',s++;x)W(1,xq(Nx(jv()));P(*s==']',s++;x)Nx(*s==',');s++)0)
S A0(jo,s++;Ax=am0;Cc=jw();P(c=='}',s++;x)
 W(1,Nx(c=='"');_q(xx,gS(Nx(js())));Nx(jw()==':');s++;_q(xy,Nx(jv()));P(*s=='}',s++;x)Nx(*s==',');s++;c=jw())0)
S A jr(OC*t,Lv)_(Cc;W((c=*t++),P(c-*s,0)s++)al(v))S A0(jt,jr("true",1))S A0(jf,jr("false",0))S A0(jN,jr("null",NL))
S A0(jv,Cc=jw();Ii=si("-ftn[{\"",c)*!dgt(c);Ax=CH(i,&jd,jf,jt,jN,ja,jo,js,je)();jw();x)
A1(jsr,Et(!xtcC,x)x=str0(enla(x));s=xC;Au=jv();Y(u&&*s,ur;u=0)P(!u,eS(x,s-xC);Ep(1);0)xr;u)
A1(jsw,En(1);0)
