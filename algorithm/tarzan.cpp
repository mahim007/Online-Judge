#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 100009
#define mod 1000000007
#define inf 999999999999999999

ll cost[mxn],low[mxn],start[mxn],vis[mxn],running[mxn];
vector<ll>G[mxn];
stack<ll>S;
ll ans,way,tym;

ll dfs(ll u){
    tym++;
    vis[u]=1;
    running[u]=1;
    low[u]=tym;
    start[u]=tym;
    S.push(u);
    ll sz=G[u].size();
    for(ll i=0;i<sz;i++){
        ll v=G[u][i];
        if(vis[v]==0){
            dfs(v);
            low[u]=min(low[u],low[v]);
        }
        else if(running[v]){
            low[u]=min(low[u],start[v]);
        }
    }

    if(low[u]==start[u]){
        ll d=0,x=-1,mn=inf;
        while(x!=u){
            x=S.top();
            S.pop();
            running[x]=0;
            if(cost[x]<mn){
                mn=cost[x];
                d=0;
            }

            if(cost[x]==mn) d++;
        }

        way*=d;
        way%=mod;
        ans+=mn;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,i,j,k,u,v,m;
    cin>>n;
    for(i=1;i<=n;i++) cin>>cost[i];
    cin>>m;
    for(i=1;i<=m;i++){
        cin>>u>>v;
        G[u].push_back(v);
    }

    way=1;
    for(i=1;i<=n;i++){
        if(vis[i]==0){
            dfs(i);
        }
    }

    cout<<ans<<" "<<way<<"\n";
    return 0;
}
