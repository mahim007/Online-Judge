#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll T,t,n,x,sum,flag,i;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        sum=0;
        flag=0;
        scanf("%lld",&n);
        for(i=1;i<=n;i++){
            scanf("%lld",&x);
            if(x>0) flag++;
            sum+=abs(x);
        }
        printf("Case %lld: ",t);
        if(flag==0) printf("inf\n");
        else{
            ll d=__gcd(sum,flag);
            sum=sum/d;
            flag=flag/d;
            printf("%lld/%lld\n",sum,flag);
        }
    }
    return 0;
}
