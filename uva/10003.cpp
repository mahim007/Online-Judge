#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 59

ll dp[mxn][59];
ll cut[59],mn;

ll fun(ll l,ll r){
    if(l+1==r) return 0;
    ll &ret=dp[l][r];
    if(ret!=-1) return ret;
    ret=1e14;
    for(ll i=l+1;i<r;i++){
        ret=min(ret,cut[r]-cut[l]+fun(l,i)+fun(i,r));
    }

    return ret;
}

int main(){
    ll n,i,j,k,w;
    while(scanf("%lld",&w)==1){
        if(w==0) break;

        scanf("%lld",&n);
        for(i=1;i<=n;i++) scanf("%lld",&cut[i]);

        memset(dp,-1,sizeof dp);
        cut[0]=0;
        cut[n+1]=w;
        ll ans=fun(0,n+1);

        printf("The minimum cutting is %lld.\n",ans);
    }

    return 0;
}
