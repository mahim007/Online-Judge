#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 10009

ll dp[mxn][109],a[mxn];
ll n,m;

ll fun(ll pos,ll sum){
    if(pos>n){
        if(sum==0) return 1;
        else return 0;
    }

    ll &r=dp[pos][sum];
    if(r!=-1) return r;
    ll p1,p2;
    p1=fun(pos+1,((((sum+a[pos])%m)+m)%m));
    p2=fun(pos+1,((((sum-a[pos])%m)+m)%m));
    r=p1||p2;
    return r;
}

int main(){
    ll i,j,k,t,T;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld %lld",&n,&m);
        for(i=1;i<=n;i++) scanf("%lld",&a[i]);
        memset(dp,-1,sizeof dp);
        ll ans=fun(1,0);
        if(ans==1) printf("Divisible\n");
        else printf("Not divisible\n");
    }

    return 0;
}
