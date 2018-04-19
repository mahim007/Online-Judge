#include<bits/stdc++.h>
using namespace std;
#define ll long long int
//ll arr[109];
int main(){
    ll t,T;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        ll f,b,s=0;
        scanf("%lld %lld",&f,&b);
        for(ll i=1;i<=b;i++){
            ll k;
            scanf("%lld",&k);
            ll x=1;
            for(ll j=1;j<=k;j++){
                ll d;
                scanf("%lld",&d);
                x=(x*d)%f;
            }
            s=s+x;
            s=s%f;
        }
        printf("%lld\n",s);
    }
    return 0;
}
