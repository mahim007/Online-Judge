#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll dp[11][101][101];
ll vis[11][101][101];
ll arr[11][101];
ll t,N,M;

ll call(ll i,ll j,ll m){ //cout<<"now at:"<<i<<" "<<j<<" "<<m<<endl;
    if(m==0){
        if(i==N+1)
            return 0;
        else return -9999999;
    }

    if(i==N+1)
        return 0;
    if(vis[i][j][m]==t)
        return dp[i][j][m];
    ll p1=-9999999;
    if(arr[i][j]>=5)
        p1=max(p1,arr[i][j]+call(i+1,1,m-1));
    if(j<M)
    p1=max(p1,call(i,j+1,m-1));
    vis[i][j][m]=t;
    return dp[i][j][m]=p1;
}

int main(){ //freopen("11341 output","w",stdout);
    ll T,i,j,k,m;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld %lld",&N,&M);


    for(i=1;i<=N;i++){
        for(j=1;j<=M;j++){
            scanf("%lld",&arr[i][j]);
        }
    }

    ll ans=call(1,1,M); //cout<<ans<<endl;
    if(((double)ans/(double)N)+1e-9<5.0)
        printf("Peter, you shouldn't have played billiard that much.\n");
    else
        printf("Maximal possible average mark - %.2lf.\n",((double)ans+1e-9)/((double)N));
    }
}
