#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll arr[21][4];
ll dp[21][4];
ll val[4],n;

ll process(ll i,ll j){
    if(i>=1 && i<=n && j>=1 && j<=n){
        if(dp[i][j]!=-1)
            return dp[i][j];
        ll ret=999999999999;
        if(j==1){
            ret=min(ret,arr[i][j]+process(i+1,2));
            ret=min(ret,arr[i][j]+process(i+1,3));
            return dp[i][j]=ret;
        }
        else if(j==2){
            ret=min(ret,arr[i][j]+process(i+1,1));
            ret=min(ret,arr[i][j]+process(i+1,3));
            return dp[i][j]=ret;
        }
        else if(j==3){
            ret=min(ret,arr[i][j]+process(i+1,2));
            ret=min(ret,arr[i][j]+process(i+1,1));
            return dp[i][j]=ret;
        }
    }
    else
        return 0;
}

int main(){
    ll T,t,i,j;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld",&n);
        for(i=1;i<=n;i++){
            for(j=1;j<=3;j++){
                scanf("%lld",&arr[i][j]);
            }
        }
        memset(dp,-1,sizeof dp);
        ll mn=999999999999;
        for(i=1;i<=3;i++){
            val[i]=process(1,i);
            mn=min(mn,val[i]);
        }
        printf("Case %lld: %lld\n",t,mn);
    }
    return 0;
}
