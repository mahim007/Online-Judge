#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll bigmod(ll b,ll p){
    if(p==0){
        return 1;
    }
    ll ans=bigmod(b,p/2);
    ans=(ans*ans)%100;
    if(p&1){
        ans=(ans*b)%100;
    }
    return ans;
}

int main(){
    ll a,b,p;
    while(scanf("%lld %lld",&b,&p)==2){
        a=bigmod(b,p);
    printf("%02lld\n",a%100);
    }

    return 0;
}
