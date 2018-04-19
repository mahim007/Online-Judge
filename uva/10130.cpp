#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mx_n 1009
#define mx_w 39
ll dp[mx_n][mx_w];
ll cost[mx_n],weight[mx_n];
ll cap,n;

ll knapsack(ll i,ll w){
    if(i==n+1) return 0;
    if(dp[i][w]!=-1){
        return dp[i][w];
    }
    ll p1=0,p2=0;
    if(w-weight[i]>=0){
        p1=cost[i]+knapsack(i+1,w-weight[i]);
    }
    p2=knapsack(i+1,w);
    dp[i][w]=max(p1,p2);
    return dp[i][w];
}

int main(){
    ll T,t,i,j,k,p,sum;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld",&n);
        for(i=1;i<=n;i++){
            scanf("%lld %lld",&cost[i],&weight[i]);
        }
        sum=0;
        scanf("%lld",&p);
        memset(dp,-1,sizeof dp);
        for(j=1;j<=p;j++){
            scanf("%lld",&cap);
            sum+=knapsack(1,cap); //cout<<"sum"<<sum<<endl;
        }
        printf("%lld\n",sum);
    }
    return 0;
}
