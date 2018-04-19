#include<stdio.h>
int main(){
    long long int T,t,i,j,a,b,cap,mx,n;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld",&n);
        cap=0;
        mx=-1;
        for(i=1;i<n;i++){
            scanf("%lld %lld",&a,&b);
            cap-=b;
            cap+=a;
            if(cap>mx)
                mx=cap;
        }
        printf("Case %lld: %lld\n",t,mx);
    }
    return 0;
}
