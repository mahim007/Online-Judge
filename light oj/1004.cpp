#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll arr[209][209];
ll dp[209][209];
ll n;
ll process(ll i,ll j){
    if(arr[i][j]!=-1){
        if(dp[i][j]!=-1) return dp[i][j];
        ll ret=-99999999999;
        //ret=max(ret,process(i+1,j)+arr[i][j]);
        ret=max(ret,process(i+1,j+1)+arr[i][j]);
        ret=max(ret,process(i+1,j-1)+arr[i][j]);
        //cout<<"ret:"<<ret<<endl;
        return dp[i][j]=ret;
    }
    else{
        return 0;
    }
}

int main(){
    ll n,i,j,k,d;
    ll t,T;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld",&n);
        memset(arr,-1,sizeof arr);
        memset(dp,-1,sizeof dp);
        for(i=1;i<=n;i++){
            for(j=n-i+1,k=1;k<=i;j++,k++){
                scanf("%lld",&arr[i][j]);
                j++;
            }
        }

        for(i=1;i<n;i++){
            for(j=i+1,k=1;k<=n-i;j++,k++){
                scanf("%lld",&arr[i+n][j]);
                j++;
            }
        }

       /* for(i=1;i<=n*2-1;i++){
            for(j=1;j<=n*2-1;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }  */

        ll ans=process(1,n);
        printf("Case %lld: %lld\n",t,ans);
    }
    return 0;
}
