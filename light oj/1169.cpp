#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define maax 1009
ll dp[maax][2];
ll arr[maax][2];
ll jump[maax][2];
ll n;

ll knapsack(ll i,ll j){
    if(i==n) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    ll p1=0,p2=0;
    p1=arr[i][j]+knapsack(i+1,j);
    p2=arr[i][j]+jump[i][j]+knapsack(i+1,!j);
    dp[i][j]=min(p1,p2);
    return dp[i][j];
}

int main(){
    ll t,T,j,k,i;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld",&n);
        for(i=0;i<n;i++){
            scanf("%lld",&arr[i][0]);
        }
        for(i=0;i<n;i++){
            scanf("%lld",&arr[i][1]);
        }
        for(i=0;i<n-1;i++){
            scanf("%lld",&jump[i][0]);
        }
        jump[n-1][0]=0;
        for(i=0;i<n-1;i++){
            scanf("%lld",&jump[i][1]);
        }
        jump[n-1][1]=0;
        memset(dp,-1,sizeof dp);
        ll n1=knapsack(0,0);
        memset(dp,-1,sizeof dp);
        ll n2=knapsack(0,1);
        printf("Case %lld: %lld\n",t,min(n1,n2));
    }
    return 0;
}
