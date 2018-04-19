#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll dp[101][10201];
ll vis[101][10201];
ll cost[101],favor[101];
ll t,n,m;

ll knapsack(ll i,ll amount){
    if(amount>m && m<=1800){
        return -10;
    }

    if(amount>m+200)
        return -10;
    if(i==n+1){
        if(amount>m && amount<=2000)
            return -10;
        return 0;
    }

    if(vis[i][amount]==t) return dp[i][amount];
    ll p1=0,p2=0;
    p1=favor[i]+knapsack(i+1,amount+cost[i]);
    p2=knapsack(i+1,amount);
    vis[i][amount]=t;
    dp[i][amount]=max(p1,p2);
    return dp[i][amount];
}

int main(){
    ll i,j,k;
    t=1;
    while(scanf("%lld %lld",&m,&n)==2){
        for(i=1;i<=n;i++){
            scanf("%lld %lld",&cost[i],&favor[i]);
        }

        if(m>=2000) m+=200;
        ll ans=knapsack(1,0);
        printf("%lld\n",ans);
        t++;
    }
    return 0;
}
