#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll dp[109][25009];
ll cost[109];

ll knapsack(ll n,ll m){ //cout<<"knapsack called...\n"; cout<<"n="<<n<<" m="<<m<<endl;
    ll i,j;
    for(i=0;i<=m;i++){
        dp[0][i]=0;
    } //cout<<"1st loop end\n";
    for(i=1;i<=n;i++){
        for(j=0;j<=m;j++){
            if(cost[i]<=j){
                dp[i][j]=max(dp[i-1][j],dp[i-1][j-cost[i]]+cost[i]);
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    return dp[n][m];
}

int main(){
    ll t,T,n,m,i,j,r,sum;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld",&n);
        sum=0;
        for(i=1;i<=n;i++){
            scanf("%lld",&cost[i]);
            sum+=cost[i];
        }
        ll x=knapsack(n,sum/2);
        printf("%lld\n",sum-2*x);
    }
    return 0;
}
