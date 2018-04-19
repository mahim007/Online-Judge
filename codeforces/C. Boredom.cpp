#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lim 100009
ll a[lim],b[lim];
ll dp[lim][2],n;

ll call(ll i,ll k){
    if(i>lim) return 0;
    if(dp[i][k]!=-1) return dp[i][k];

    ll p1=0,p2=0;
    p1=b[i]*i+call(i+2,1);
    p2=0ll+call(i+1,0);
    return dp[i][k]=max(p1,p2);
}

int main(){
    ll i,j,k,ans=0;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        scanf("%lld",&a[i]);
        b[a[i]]++;
    }

    memset(dp,-1,sizeof dp);
    ans=call(1,0);
    printf("%lld\n",ans);
    return 0;
}
