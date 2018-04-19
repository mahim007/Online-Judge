#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define inf 1e9

ll dp[12][1009];
ll air[12][1009];
ll n,w;

ll fun(ll row,ll col){
    if(row>9 || row<0 || col>w) return inf;

    if(col==w){
        if(row==0) return 0;
        else return inf;
    }

    ll &rr=dp[row][col];
    if(rr!=-1) return rr;

    ll x,y,z;
    x=60-air[row][col]+fun(row+1,col+1);
    y=30-air[row][col]+fun(row,col+1);
    z=20-air[row][col]+fun(row-1,col+1);
    rr=min(x,min(y,z));
    return rr;
}

int main(){
    ll i,j,k,t,T;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld",&n);
        w=n/100;

        for(i=9;i>=0;i--){
            for(j=0;j<w;j++){
                scanf("%lld",&air[i][j]);
            }
        }

        memset(dp,-1,sizeof dp);
        ll ans=fun(0,0);
        printf("%lld\n\n",ans);
    }

    return 0;
}
