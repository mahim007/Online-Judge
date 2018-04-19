#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 100009
#define lim 1000000009
vector<ll>G[mxn],C[mxn];
ll arr[mxn];
map<ll,ll>M;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,i,j,k,d,u,v,m,q;
    cin>>n>>m>>q;
    for(i=1;i<=m;i++){
        cin>>u>>v>>d;
        G[u].push_back(v);
        G[v].push_back(u);
        C[u].push_back(d);
        C[v].push_back(d);
    }

    //cin>>q;
    for(i=1;i<=q;i++){
        cin>>arr[i];
        M[arr[i]]=1;
    }

    ll ans=lim; //cout<<ans<<"\n";
    for(i=1;i<=q;i++){
        u=arr[i];
        for(j=0;j<G[u].size();j++){
            v=G[u][j];
            if(M[v]==0){
                ans=min(ans,C[u][j]);
            }
        }
    }
    if(ans==lim) ans=-1;
    cout<<ans<<"\n";
    return 0;
}
