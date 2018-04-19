#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 109
#define inf 1e10
ll cost[mxn];
ll dp[mxn][mxn];

ll call(ll pos,ll r){ //cout<<"now pos:"<<pos<<" r:"<<r<<"\n";
    if(pos<1){
        if(r==0){
            return 0ll;
        }
        else return inf;
    }

    if(dp[pos][r]!=-1) return dp[pos][r];

    ll ret=inf;
    if(cost[pos]==-1){
        ret=min(ret,call(pos-1,r));
        dp[pos][r]=ret;
    }
    else{
        ll p1=inf;
        ll p2=inf;
        ll p3=inf;
        if(r-pos>=0)
        p1=min(p1,cost[pos]+call(pos,r-pos));
        if(r-pos>=0)
        p2=min(p2,cost[pos]+call(pos-1,r-pos));
        p3=min(p3,call(pos-1,r));
        dp[pos][r]=min(p1,min(p2,p3));
    }

    return dp[pos][r];
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n,m,k,i,j,T,t;
    cin>>T;
    for(t=1;t<=T;t++){
        cin>>n>>k;
        for(i=1;i<=k;i++){
            cin>>cost[i];
        }

        memset(dp,-1,sizeof dp);
        ll ans=call(k,k);
        if(ans==inf) ans=-1;
        cout<<ans<<"\n";
    }

    return 0;
}
