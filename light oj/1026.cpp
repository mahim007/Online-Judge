#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 10009

vector<ll>G[mxn];
vector<pair<ll,ll> >bridge;
ll vis[mxn],dis[mxn],low[mxn],par[mxn];
ll tym;

void dfs(ll u){
    vis[u]=1;
    dis[u]=low[u]=++tym;
    for(ll i=0;i<G[u].size();i++){
        ll v=G[u][i];
        if(par[u]==v) continue;
        if(vis[v]==0){
            par[v]=u;
            dfs(v);
            low[u]=min(low[u],low[v]);
            if(dis[u]<low[v]){
                bridge.push_back(make_pair(min(u,v),max(u,v)));
            }
        }
        else if(vis[v]==1 && par[v]!=u){
            low[u]=min(low[u],dis[v]);
        }
    }
}

int main(){
    ll T,t,n,i,d,j,k,u,v;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld",&n);
        for(k=1;k<=n;k++){
        scanf("%lld (%lld)",&u,&d);
        G[u].clear();
        for(i=1;i<=d;i++){
            scanf("%lld",&v);
            G[u].push_back(v);
        }
        }

        memset(vis,0,sizeof vis);
        memset(dis,0,sizeof dis);
        bridge.clear();

        tym=0;
        for(i=0;i<n;i++){
            if(vis[i]==0) dfs(i);
        }
        sort(bridge.begin(),bridge.end());
        printf("Case %lld:\n",t);
        printf("%lld critical links\n",bridge.size());
        d=bridge.size();
        for(i=0;i<d;i++){
            printf("%lld - %lld\n",bridge[i].first,bridge[i].second);
        }
    }

    return 0;
}
