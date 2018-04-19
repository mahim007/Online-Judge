#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 10009

ll vis[mxn],low[mxn],deg[mxn],scc[mxn],par[mxn],discover[mxn];
set<pair<ll,ll> >bridge;
vector<ll>graph[mxn];
ll tym,com;

void tarjan(ll u){
    vis[u]=1;
    discover[u]=low[u]=++tym;
    for(ll i=0;i<graph[u].size();i++){
        ll v=graph[u][i];
        if(vis[v]==0){
            par[v]=u;
            tarjan(v);
            low[u]=min(low[u],low[v]);
            if(discover[u]<low[v]){
                bridge.insert(make_pair(min(u,v),max(u,v)));
            }
        }
        else if(v!=par[u]){
            low[u]=min(low[u],discover[v]);
        }
    }
}

void dfs(ll u){
    vis[u]=1;
    scc[u]=com;
    for(ll i=0;i<graph[u].size();i++){
        ll v=graph[u][i];
        pair<ll,ll>p=make_pair(min(u,v),max(u,v));
        if(bridge.count(p)>0) continue;
        if(vis[v]==1) continue;
        dfs(v);
    }
}

int main(){
    ll T,t,i,j,k,n,m,x,y;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld %lld",&n,&m);
        for(i=1;i<=m;i++){
            scanf("%lld %lld",&x,&y);
            graph[x].push_back(y);
            graph[y].push_back(x);
        }

        tym=0;
        memset(vis,0,sizeof vis);
        for(i=0;i<n;i++){
            if(vis[i]==0){
                tarjan(i);
            }
        }

        memset(vis,0,sizeof vis);
        memset(scc,0,sizeof scc);

        com=0;
        for(i=0;i<n;i++){
            if(vis[i]==0){
                com++;
                dfs(i);
            }
        }

        memset(deg,0,sizeof deg);
        for(set<pair<ll,ll> >::iterator it=bridge.begin();it!=bridge.end();it++){
            pair<ll,ll>p;
            p=*it;
            deg[scc[p.first]]++;
            deg[scc[p.second]]++;
        }

        ll ans=0;
        for(i=1;i<=com;i++){
            if(deg[i]==1) ans++;
        }

        printf("Case %lld: %lld\n",t,(ans+1)/2);

        for(i=0;i<n;i++) graph[i].clear();
        bridge.clear();
    }

    return 0;
}
