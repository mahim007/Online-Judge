#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[5009],sum[5009],m;
ll dp[5009][5009];

ll call(ll i,ll k){
    if(i<=0) return 0;
    if(k<=0) return 0;
    if(dp[i][k]!=-1) return dp[i][k];
    ll p1=0,p2=0;
    p1=sum[i]+call(i-m,k-1);
    p2=call(i-1,k);
    return dp[i][k]=max(p1,p2);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie();

    ll i,n,k;
    cin>>n>>m>>k;
    for(i=1;i<=n;i++){
        cin>>a[i];
        a[i]+=a[i-1];
    }

    for(i=n;i>=m;i--){
        sum[i]=a[i]-a[i-m];
    }

    memset(dp,-1,sizeof dp);
    cout<<call(n,k)<<"\n";
    return 0;
}
