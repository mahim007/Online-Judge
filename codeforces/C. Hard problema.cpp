#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 100009
#define lim 999999999999999
string V1[mxn][2];
ll a[mxn];
ll dp[mxn][2],n;

ll call(ll i,ll p){
    if(i==n-1) return 0;
    if(dp[i][p]!=-1) return dp[i][p];
    ll ret=lim;
    if(V1[i][p]<=V1[i+1][0]){
        ret =min(ret,call(i+1,0));
    }
    if(V1[i][p]<=V1[i+1][1]){
        ret=min(ret,call(i+1,1)+a[i+1]);
    }

    return dp[i][p]=ret;
}

int main(){
    ll i,j,k,ans=0,flag=1;
    scanf("%lld",&n);
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }

    for(i=0;i<n;i++){
        string s;
        cin>>s;
        V1[i][0]=s;
        reverse(s.begin(),s.end());
        V1[i][1]=s;
    }

    memset(dp,-1,sizeof dp);
    ans=min(call(0,0),call(0,1)+a[0]);
    if(ans==lim) ans=-1;
    printf("%lld\n",ans);
    return 0;
}

