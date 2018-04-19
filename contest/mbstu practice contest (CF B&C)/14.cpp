#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 1009
ll cost[mxn],vis[mxn];
vector<ll>G[mxn];
ll ans,n;

void dfs(ll u){
    vis[u]=1;
    ll sz=G[u].size();
    for(ll i=0;i<sz;i++){
        ll v=G[u][i];
        ans+=min(cost[u],cost[v]);
        if(vis[v]==0){
            dfs(v);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll m,i,j,k,u,v;
    cin>>n>>m;
    for(i=1;i<=n;i++) cin>>cost[i];
    for(i=1;i<=m;i++){
        cin>>u>>v;
        G[u].push_back(v);
        //G[v].push_back(u);
    }

    for(i=1;i<=n;i++){
        if(vis[i]==0){
            dfs(i);
        }
    }

    cout<<ans<<"\n";
    return 0;
}
