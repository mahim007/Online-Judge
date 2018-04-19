#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000
#define mxn 109

ll dp[mxn][mxn];
ll vis[mxn][mxn];
ll t;

ll fun(ll sum,ll var){
    if(var==1 || sum==0) return 1;
    ll &r=dp[sum][var];
    if(vis[sum][var]==t) return r;
    vis[sum][var]=t;
    r=0;
    for(ll i=0;i<=sum;i++){
        r=(r%mod+fun(sum-i,var-1)%mod)%mod;
    }

    return r;
}

int main(){
    ll n,k,i,j;
    t=1;
    while(scanf("%lld %lld",&n,&k)==2){
        if(n==0 && k==0) break;
        ll ans=fun(n,k);
        printf("%lld\n",(ans+mod)%mod);
        t++;
    }

    return 0;
}
