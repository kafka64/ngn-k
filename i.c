// ngn/k, (c) 2019-2022 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
#include<sys/socket.h>
#include<sys/wait.h>
#include<netinet/in.h>
#include<netinet/tcp.h>
#include<fcntl.h>
#include<arpa/inet.h>
#include<unistd.h>
#include<sys/time.h>
#undef __USE_EXTERN_INLINES
#include<sys/stat.h>
#include<sys/mman.h>
#include"a.h"
S UI addr(Q*p)_(Qs=*p;P(!*s,0x0100007f)UC v[4];i(4,I(i,P(*s-'.',ed0())s++)v[i]=pu(&s);P(v[i]>255,ed0()))*p=s;*(UI*)v)
S I skt(UI h,UH p)_(If=socket(AF_INET,SOCK_STREAM,0);P(f<0,eo0())Iv=setsockopt(f,IPPROTO_TCP,TCP_NODELAY,(I[]){1},4);P(v<0,eo0())
 ST sockaddr_in a;a.sin_family=AF_INET;a.sin_addr.s_addr=h;a.sin_port=rot(p,8);P(connect(f,(ST sockaddr*)&a,SZ a)<0,eo0())f)
I osf(Qs,L fl)_(P(!SC(s,':'),If=open(s,fl,0666);P(f<3/*fbsd*/,eo0())f)UI h=addr(&s);P(*s-':',ed0())s++;UL p=pu(&s);P(*s,ed0())skt(h,p))
S I o(Ax/*1*/,I fl)_(Xz(gl(x))Xs(Lv=xv;P(!v,1)Qs=qs(&v);osf(s,fl))XC(x=str0(x);xe(osf(xV,fl)))et1(x))
S I fmd(If)_(ST stat s;fstat(f,&s)<0?0:s.st_mode)
A1(opn,az(N(o(x,O_RDWR|O_CREAT))))
AL(cls,close(n);au)
A1(u0c,x=N(spl(N(u1c(x))));xn&&!_n(xA[xn-1])?drp(-1,x):x)
S V d(V*p,Qs){*(A*)p=apc(cts(*(A*)p,s,Sn(s)),10);}
A1(u1c,Xz(If=gl(x);Cb[1024];x=oC;W(1,Ik=read(f,b,SZ b);P(k<0,eo1(x))x=cts(x,b,k);P(k-SZ b,x))0)
 If=N(o(x,O_RDONLY));P(f<3,u1c(ai(f)))Im=fmd(f);
 P(S_ISDIR(m),Ax=oC;dir(f,d,&x);close(f);x)
 P(S_ISREG(m),Ln=lseek(f,0,SEEK_END);P(n<0,close(f);eo0())P(!n,oC)Ax=mf(f,n);close(f);x)
 Ay=u1c(ai(f));close(f);y)
A2(v0c,YA(v0c(x,Nx(jc(10,y))))YC(v1c(x,apc(y,10)))et2(x,y))
A2(v1c,P(!ytC,et2(x,y))
 Xz(If=gl(x);Nn=yn;Qs=yV;P(f<3||!S_ISREG(fmd(f)),ye(Az=au;W(n>0,Lk=write(f,s,n);I(k<0,z=eo0())B(k<=0)s+=k;n-=k)z))
    ftruncate(f,n);V*p=mmap(0,n,PROT_READ|PROT_WRITE,MAP_SHARED,f,0);Mc(p,s,n);munmap(p,n);y(au))
 If=N(o(x,O_RDWR|O_CREAT|O_TRUNC));Az=v1c(ai(f),y);f>2&&close(f);z)

S A rda(If)_(Ax=aC(256-ZA);L m=0,k;
 W((k=read(f,xV+m,xn-m))>0,m+=k;I(m+1000000>xn&&2*m>xn,Ay=aC(2*xn+ZA);Mc(yV,xV,m);x=x(y)))close(f);AN(m,x))
S I lC(Ax)_(P(!xtA,0)i(xn,P(_t(xa)-tC,0))1) //list of strings?
A1(frk,P(!xtA||xn-2,et1(x))Ay=kv(&x);P(!lC(x)||!ytC,ed2(x,y))x=Ny(eac1f(x,str0));Q a[xn+1];i(xn,a[i]=_V(xa))a[xn]=0;
 I p[4];pipe(p);pipe(p+2);I pid=fork();P(!pid,dup2(*p,0);dup2(p[3],1);i(4,close(p[i]))exit(execve(*a,(C**)a,(C*O*)env));0)
 close(*p);close(p[3]);N(v0c(ai(p[1]),x(y)));close(p[1]);Ax=rda(p[2]);wait4(pid,0,0,0);x)
L now()_(ST timeval t;gettimeofday(&t,0);1000000ll*t.tv_sec+t.tv_usec)
