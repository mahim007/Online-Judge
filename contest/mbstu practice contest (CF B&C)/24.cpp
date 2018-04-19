#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 100009
ll a[mxn],b[mxn],vis[mxn],cnt;
vector<ll>order,G[mxn];

void dfs(ll u,ll odd,ll evn,ll lvl){//cout<<"u:"<<u<<" odd:"<<odd<<" evn:"<<evn<<" lvl:"<<lvl<<"\n";
    vis[u]=1;
    if(lvl%2==0){
        a[u]=(a[u]+evn)%2;
        if(a[u]!=b[u]){
            cnt++;
            order.push_back(u);
            evn++;
        }
    }
    else{
        a[u]=(a[u]+odd)%2;
        if(a[u]!=b[u]){
            cnt++;
            order.push_back(u);
            odd++;
        }
    } //cout<<"a[u]:"<<a[u]<<" b[u]:"<<b[u]<<"\n\n";

    for(ll i=0;i<G[u].size();i++){
        ll v=G[u][i];
        if(vis[v]==0){
            dfs(v,odd,evn,lvl+1);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,i,j,k;
    cin>>n;
    for(i=1;i<n;i++){
        ll u,v;
        cin>>u>>v;
        G[u].push_back(v);
        G[v].push_back(u);
    }

    for(i=1;i<=n;i++) cin>>a[i];
    for(i=1;i<=n;i++) cin>>b[i];
    dfs(1,0,0,0);
    cout<<order.size()<<"\n";
    ll sz=order.size();
    for(i=0;i<sz;i++) cout<<order[i]<<"\n";
    cout<<"\n";
    return 0;
}
