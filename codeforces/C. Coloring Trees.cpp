#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define inf 1e17
#define mxn 109

ll m;
ll arr[mxn];
ll cost[mxn][mxn];
ll dp[mxn][mxn][mxn];

ll solve(ll pos,ll pre,ll k){
    if(k<0) return inf;
    else if(pos==0 && k==0) return 0;
    else if(pos==0 && k!=0) return inf;

    ll ret=inf;
    if(dp[pos][pre][k]!=-1) return dp[pos][pre][k];
    if(arr[pos]!=0){
        if(arr[pos]==pre) ret=min(ret,0ll+solve(pos-1,pre,k));
        else ret=min(ret,0ll+solve(pos-1,arr[pos],k-1));
    }
    else{
        for(ll i=1;i<=m;i++){
            if(pre==i){
                ret=min(ret,cost[pos][i]+solve(pos-1,i,k));
            }
            else{
                ret=min(ret,cost[pos][i]+solve(pos-1,i,k-1));
            }
        }
    }

    return dp[pos][pre][k]=ret;
}

int main(){
    ll n,q,i,j,k,ans=0;
    scanf("%lld %lld %lld",&n,&m,&q);
    for(i=1;i<=n;i++) scanf("%lld",&arr[i]);
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            scanf("%lld",&cost[i][j]);
        }
    }

    memset(dp,-1,sizeof dp);
    ans=solve(n,-1,q);
    if(ans==inf) ans=-1;
    printf("%lld\n",ans);
    return 0;
}
