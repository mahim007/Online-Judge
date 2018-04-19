#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mx_n 109
#define mx_w 509
ll dp[mx_n][mx_w];
ll cost[mx_n];
ll n,cap;
ll knapsack(ll i,ll w){
    if(i==n+1) return 0;
    if(dp[i][w]!=-1) return dp[i][w];
    ll p1=0,p2=0;
    p1=cost[i]+knapsack(i+1,w+cost[i]);
    p2=knapsack(i+1,w);
    if((ll)abs(p1-cap)<(ll)abs(p2-cap)){
        dp[i][w]=(ll)abs(p1-cap);
    }
    else{
        dp[i][w]=(ll)abs(p2-cap);
    }
    printf("i=%lld\n",i); printf("p1=%lld p2=%lld \n dif=%lld\n",p1,p2,(ll)abs(p1-p2));
    return dp[i][w];
}

int main(){
    ll i,j,k,ans,t,T,w;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        w=0;
        scanf("%lld",&n);
        memset(dp,-1,sizeof dp);
        for(i=1;i<=n;i++){
            scanf("%lld",&cost[i]);
            w+=cost[i];
        }
        cap=w;
        printf("%lld\n",knapsack(1,0));
    }
}
