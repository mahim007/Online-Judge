#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll>V[55];
ll vis[55],com;

void bfs(ll src){
    queue<ll>Q;
    Q.push(src);
    ll lev[55]={0};
    lev[src]=0;
    vis[src]=1;
    while(!Q.empty()){
        ll u=Q.front();
        Q.pop();
        for(ll i=0;i<V[u].size();i++){
            ll v=V[u][i];
            if(vis[v]==0){
                com++;
                vis[v]=1;
                Q.push(v);
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie();
    ll n,i,j,k,m,ans=1;
    cin>>n>>m;
    for(i=1;i<=m;i++){
        ll u,v;
        cin>>u>>v;
        V[u].push_back(v);
        V[v].push_back(u);
    }

    for(i=1;i<=n;i++){
        if(vis[i]==0){
            com=0;
            bfs(i);
            if(com!=0){
                ans*=(ll)pow(2,com);
            }
        }
    }

    cout<<ans<<"\n";
    return 0;
}
