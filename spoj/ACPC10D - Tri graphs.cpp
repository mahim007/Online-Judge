#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 100009
#define inf 99999999

ll a[mxn][4];
ll dp[mxn][4];
ll vis[mxn][4];
ll t=1,n;

ll call(ll x,ll y){
    if(x==n && y==2) return a[x][y];
    if(x>n || y<1 || y>3) return inf;
    if(vis[x][y]==t) return dp[x][y];
    vis[x][y]=t;
    ll p1,p2,p3,p4,ret=inf;
    p1=call(x,y+1);
    p2=call(x+1,y);
    p3=call(x+1,y+1);
    p4=call(x+1,y-1);
    ret=a[x][y]+min(ret,min(p1,min(p2,min(p3,p4))));
    return dp[x][y]=ret;
}

int main(){
    ll i,j,k;
    while(scanf("%lld",&n)==1){
        if(n==0) break;

        for(i=1;i<=n;i++){
            scanf("%lld %lld %lld",&a[i][1],&a[i][2],&a[i][3]);
        }

        ll ans=call(1,2);
        printf("%lld. %lld\n",t,ans);
        t++;
    }

    return 0;
}
