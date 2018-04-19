#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll call(ll n,ll k,ll d1,ll d2){
    if(n%3) return 0;
    for(ll i=-1;i<=1;i=i+2){
        for(ll j=-1;j<=1;j=j+2){
        ll D1=i*d1;
        ll D2=j*d2;
        ll x2=(k+D2-D1)/3;
        if((k+D2-D1)%3){
            continue;
        }

        if(x2>=0 && x2<=k){
            ll x1=D1+x2;
            ll x3=x2-D2;
            if(x1>=0 && x1<=k && x3>=0 && x3<=k)
            if(x1<=n/3 && x2<=n/3 && x3<=n/3){
                if(abs(x1-x2)==d1 && abs(x2-x3)==d2)
                    return 1;
            }
        }

        }
    }

    return 0;
}

int main(){
    ll n,i,j,k,ans=0,T,t,d1,d2;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld %lld %lld %lld",&n,&k,&d1,&d2);
        ans=call(n,k,d1,d2);
        if(ans) printf("yes\n");
        else printf("no\n");
    }

    return 0;
}
