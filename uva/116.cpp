#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define inf 9999999999

ll a[19][109];
ll dp[19][109];
ll dir[19][109];
ll n,m;

ll call(ll r,ll c){
    if(c>=m) return 0;
    if(dp[r][c]!=inf) return dp[r][c];

    ll ret=inf;
    ret=a[r][c]+call((n+r-1)%n,c+1);
    if(ret<dp[r][c] || (ret==dp[r][c] && dir[r][c]>((n+r-1)%n))){
        dp[r][c]=ret;
        dir[r][c]=(n+r-1)%n;
    }

    ret=a[r][c]+call(r,c+1);
    if(ret<dp[r][c] || (ret==dp[r][c] && dir[r][c]>r)){
        dp[r][c]=ret;
        dir[r][c]=r;
    }

    ret=a[r][c]+call((n+r+1)%n,c+1);
    if(ret<dp[r][c] || (ret==dp[r][c] && dir[r][c]>((n+r+1)%n)) ){
        dp[r][c]=ret;
        dir[r][c]=(n+r+1)%n;
    }

    return dp[r][c];
}

int main(){
    ll i,j,k,ans,r;
    while(scanf("%lld %lld",&n,&m)==2){
        ans=inf;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                scanf("%lld",&a[i][j]);
                dp[i][j]=inf;
            }
        }

        for(i=0;i<n;i++){
            ll ret=call(i,0); //cout<<ret<<"\n";
            if(ret<ans){
                ans=ret;
                r=i;
            }
        }

        for(j=0;j<m;j++){
            if(j==0){
                printf("%lld",r+1);
            }
            else printf(" %lld",r+1);
            r=dir[r][j];
        }

        printf("\n");
        printf("%lld\n",ans);
    }

    return 0;
}
