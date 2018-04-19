#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll getlast(ll b,ll e){
    b%=1000;
    ll ans=1;
    while(e>0){
        if(e&1){
            ans*=b;
            ans%=1000;
        }
        b*=b;
        b%=1000;
        e>>=1;
    }
    ans%=1000;
    return ans;
}

ll getfast(ll b,ll e){
    double c=e*log(b)/log(10);
    c-=floor(c);
    return ((pow(10,c)+1e-9)*100);
}

int main(){
    ll T,t;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        ll a,b;
        scanf("%lld %lld",&a,&b);
        ll last,fast;
        last=getlast(a,b);
        fast=getfast(a,b);
        printf("%03lld...%03lld\n",fast,last);
    }
    return 0;
}
