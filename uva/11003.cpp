#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll dp[1001][6002];
ll vis[1001][6002];
ll N,t;
ll w[1001],cap[1001];

ll knapsack(ll i,ll amount){
    if(i==N+1){
        return 0;
    }
    ll &res=dp[i][amount];
    if(res!=-1) return dp[i][amount];

    ll p1=0,p2=0;

    if(w[i]>amount){
        res=knapsack(i+1,amount);
    }
    else{
        res=max(knapsack(i+1,amount),1+knapsack(i+1,min(amount-w[i],cap[i])));
    }

    return res;
}

int main(){
    t=1;
    while(scanf("%lld",&N)==1){
        if(N==0) break;
        ll i;
        for(i=1;i<=N;i++){
            scanf("%lld %lld",&w[i],&cap[i]);
        }

        memset(dp,-1,sizeof dp);
        ll ans=knapsack(1,6001);
        printf("%lld\n",ans);
        t++;
    }
}
