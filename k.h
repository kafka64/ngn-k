// https://github.com/ktye/i/blob/master/%2B/k.h
typedef long long K;typedef void V;typedef char C;typedef int I;typedef double F;typedef size_t N;typedef const C*S;
V kinit(),unref(K),CK(C*,K),IK(I*,K),FK(F*,K),LK(K*,K),*dK(K),KA(S/*todo*/,K),KR(S,V*,I);C TK(K),cK(K);N NK(K);I iK(K);F fK(K);
K Kc(C),Ks(C*),Ki(I),Kf(F),KC(C*,N),KS(C**,N),KI(I*,N),KF(F*,N),ref(K),Kp(V*),KE(S),KL(K*,N),K0(K*,S,K*,I);
#define Kx(s,a...) ({static K f;K0(&f,s,(K[]){a},sizeof((K[]){a})/sizeof(K));})
