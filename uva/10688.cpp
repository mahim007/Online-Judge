#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define inf 99999999999999
#define mxn 509

ll t,k;
ll dp[mxn][mxn];
ll vis[mxn][mxn];

ll fun(ll l,ll r){
    if(l>=r) return 0;

    ll &ret=dp[l][r];
    if(ret!=-1) return ret;

    //vis[l][r]=t;
    ret=inf;
    for(ll i=l;i<=r;i++){
        ret=min(ret,((r-l+1)*(i+k))+fun(l,i-1)+fun(i+1,r));
    }

    return ret;
}

int main(){
    ll T,i,j,n;
    scanf("%lld",&T);
    //memset(dp,-1,sizeof dp);
    for(t=1;t<=T;t++){
        scanf("%lld %lld",&n,&k);

        memset(dp,-1,sizeof dp);
        ll ans=fun(1ll,n);
        printf("Case %lld: %lld\n",t,ans);
    }

    return 0;
}
