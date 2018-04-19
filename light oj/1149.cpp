#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mx 209
ll n,m;
ll V[mx][mx];
ll a[mx],b[mx];
ll vis[mx],match[mx];

ll kuhn(ll u){
    for(ll i=1;i<=m;i++){
        if(vis[i]==0 && V[u][i]==1){
            vis[i]=1;
            if(match[i]==0){
                match[i]=u;
                return 1;
            }
            else{
                if(kuhn(match[i])){
                    match[i]=u;
                    return 1;
                }
            }
        }
    }
    return 0;
}

int main(){
    ll T,t,i,j,k,ans;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld",&n);
        for(i=1;i<=n;i++){
            scanf("%lld",&a[i]);
        }

        scanf("%lld",&m);
        for(i=1;i<=m;i++){
            scanf("%lld",&b[i]);
        }

        for(i=1;i<=n;i++){
            //if(a[i]==0) continue;
            for(j=1;j<=m;j++){
                if(b[j]==0) V[i][j]=1;
                else if(a[i]==0) continue;
                else if(b[j]%a[i]==0) V[i][j]=1;
            }
        }

        ans=0;
        memset(match,0,sizeof match);
        for(i=1;i<=n;i++){
            memset(vis,0,sizeof vis);
            if(kuhn(i))
                ans++;
        }

        printf("Case %lld: %lld\n",t,ans);
        memset(V,0,sizeof V);
        //for(i=1;i<=m;i++) cout<<match[i]<<" ";
    }
    return 0;
}
