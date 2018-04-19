#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lim 200009
ll vis[lim],level[lim],n;
vector<ll>V[lim];

void bfs(){
    queue<ll>Q;
    Q.push(1);
    for(ll i=1;i<=n;i++) level[i]=999999;
    vis[1]=1;
    level[1]=0;
    while(!Q.empty()){
        ll u=Q.front();
        Q.pop();
        for(ll i=0;i<V[u].size();i++){
            ll v=V[u][i];
            if(vis[v]==0){
                vis[v]=1;
                level[v]=level[u]+1;
                Q.push(v);
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll i,j,d;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>d;
        V[i].push_back(d);
        V[i-1].push_back(i);
        V[i].push_back(i-1);
    }

    bfs();
    for(i=1;i<=n;i++){
        d=min(level[i],i-1);
        cout<<d;
        cout<<" ";
    }

    cout<<"\n";
    return 0;
}
