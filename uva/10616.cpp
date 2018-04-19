#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll dp[201][11][21];
ll vis[201][11][21];
ll val[201];
ll D,n,t,m;

ll knapsack(ll i,ll taken,ll amount){
    if(taken==0){
        if(amount==0) return 1;
        else return 0;
    }
    if(i>n) return 0;
    if(vis[i][taken][amount]==t)
        return dp[i][taken][amount];
    ll p1=0,p2=0;
    p1=knapsack(i+1,taken-1,((amount+val[i]%D)+D)%D);
    p2=knapsack(i+1,taken,amount);
    vis[i][taken][amount]=t;
    dp[i][taken][amount]=p1+p2;
    return dp[i][taken][amount];
}

int main(){
    ll i,j,q,k=1;
    t=1;
    while(scanf("%lld %lld",&n,&q)==2){
        if(n==0 && q==0)
            break;
        for(i=1;i<=n;i++){
            scanf("%lld",&val[i]);
        }
        printf("SET %lld:\n",k++);
        for(i=1;i<=q;i++){
            scanf("%lld %lld",&D,&m);
            ll ans=knapsack(1,m,0);
            printf("QUERY %lld: %lld\n",i,ans);
            t++;
        }
    }
    return 0;
}
