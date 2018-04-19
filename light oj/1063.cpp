#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn  10009

vector<ll>G[mxn];
vector<ll>ans;
ll vis[mxn],dis[mxn];
ll par[mxn],low[mxn];
ll cnt[mxn];
ll tym;
ll n,m;

void dfs(ll u){
    vis[u]=1;
    dis[u]=low[u]=++tym;
    ll child=0;
    for(ll i=0;i<G[u].size();i++){
        ll v=G[u][i];
        if(par[u]==v) continue;
        if(vis[v]==0){
            child++;
            par[v]=u;
            dfs(v);
            low[u]=min(low[u],low[v]);
            if(par[u]!=0 && dis[u]<=low[v]){
                cnt[u]=1;
                //ans.push_back(u);
            }

            if(child>1 && par[u]==0){
                cnt[u]=1;
            }
        }
        else if(par[u]!=v){
            low[u]=min(low[u],dis[v]);
        }
    }
}

int main(){
    ll T,t,u,v,i,j,k;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld %lld",&n,&m);
        for(i=1;i<=m;i++){
            scanf("%lld %lld",&u,&v);
            G[u].push_back(v);
            G[v].push_back(u);
        }

        memset(vis,0,sizeof vis);
        memset(par,0,sizeof par);
        memset(cnt,0,sizeof cnt);

        tym=0;
        //cnt=0;
        for(i=1;i<=n;i++){
            if(vis[i]==0){
                dfs(i);
            }
        }

        k=0;
        for(i=1;i<=n;i++) k+=cnt[i];
        printf("Case %lld: %lld\n",t,k);
        for(i=1;i<=n;i++) G[i].clear();
        //for(i=1;i<=n;i++) cout<<i<<" "<<dis[i]<<" "<<low[i]<<"\n";
        //cout<<"articulation point....\n";
        //for(i=0;i<ans.size();i++) cout<<ans[i]<<" "; cout<<"\n";
        //ans.clear();
    }

    return 0;
}
