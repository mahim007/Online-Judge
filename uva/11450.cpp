#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define inf 1e10

ll dp[209][29][29];
ll vis[209][29][29];
vector<ll>V[29];
ll t,c;

ll fun(ll sum,ll ii,ll r){
    if(ii>=c){
        if(r==0) return 0;
        if(r!=0) return -inf;
    }

    ll &rr=dp[sum][ii][r];
    if(vis[sum][ii][r]==t) return rr;
    vis[sum][ii][r]=t;
    ll v=-inf;
    for(ll i=0;i<V[ii].size();i++){
        if(sum-V[ii][i]>=0)
        v=max(v,max(V[ii][i]+fun(sum-V[ii][i],ii+1,r-1),(ll)(-inf-10)));
    }

    //v=max(v,max(fun(sum,ii+1,r),(ll)(-inf-10)));
    rr=v;
    return rr;
}

int main(){
    ll T,i,j,k,n;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld %lld",&n,&c);
        for(i=0;i<c;i++){
            scanf("%lld",&k);
            for(j=1;j<=k;j++){
                ll d;
                scanf("%lld",&d);
                V[i].push_back(d);
            }
        }

        ll ans=fun(n,0,c);
        if(ans>0)
            printf("%lld\n",ans);
        else printf("no solution\n");

        for(i=0;i<c;i++) V[i].clear();
    }

    return 0;
}
