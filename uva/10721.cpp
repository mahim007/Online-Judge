#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 59

ll dp[mxn][mxn][mxn];
ll vis[mxn][mxn][mxn];
ll t,m;

ll fun(ll n,ll k,ll p){ //cout<<n<<" "<<k<<" "<<p<<" "<<m<<"\n";
    if(n==0) return (k==0); //cout<<"here\n";
    if(p<=0) return 0; //cout<<"here\n";
    if(k<=0) return 0; //cout<<"here\n";

    ll &rr=dp[n][k][p];
    if(vis[n][k][p]==t){
            //cout<<"executed\n";
        return rr;
    }
    vis[n][k][p]=t;
    ll p1=fun(n-1,k-1,m);
    ll p2=fun(n-1,k,p-1);

    rr=p1+p2;
    return rr;
}

int main(){
    ll n,k;
    t=1;
    while(scanf("%lld %lld %lld",&n,&k,&m)==3){
        ll ans=fun(n,k,m);
        printf("%lld\n",ans);
        t++;
    }

    return 0;
}
