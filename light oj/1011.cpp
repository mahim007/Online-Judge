#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 19

bool check(ll k,ll pos) { return (bool) (k & (1<<pos)); }
ll sett(ll k,ll pos) { return k=k | (1<<pos); }


ll arr[mxn][mxn];
ll dp[(1<<16)+2];
ll n;

ll fun(ll r,ll mask){ //cout<<"r="<<r<<" mask="<<mask<<"\n";
    if(((1<<n)-1)==mask) return 0;
    if(r>=n) return 0;

    ll &ret=dp[mask];
    if(ret!=-1) return ret;

    ll p1=-1;
    for(ll i=0;i<n;i++){ //cout<<"here...\n";
        if(check(mask,i)==0){ //cout<<"calling...\n";
            p1=max(p1,arr[r][i]+fun(r+1,sett(mask,i)));
        }
    }

    return ret=p1;
}

int main(){
    ll T,t,i,j,k;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld",&n);

        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                scanf("%lld",&arr[i][j]);
            }
        }

        memset(dp,-1,sizeof dp);
        ll ans=fun(0,0ll);
        printf("Case %lld: %lld\n",t,ans);
    }

    return 0;
}
