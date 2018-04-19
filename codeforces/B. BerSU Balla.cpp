#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[109],b[109],match[109],vis[109];
vector<ll>V[109];

ll kuhn(ll u){
    for(ll i=0;i<V[u].size();i++){
        ll v=V[u][i];
        if(vis[v]) continue;
        vis[v]=1;
        if(match[v]==-1){
            match[v]=u;
            return 1;
        }

        else
            if(kuhn(match[v])){
            match[v]=u;
            return 1;
        }
    }

    return 0;
}

int main(){
    ll n,m,i,j,d,ans=0;
    cin>>n;
    for(i=1;i<=n;i++) cin>>a[i];
    cin>>m;
    for(i=1;i<=m;i++) cin>>b[i];

    for(i=1;i<=n;i++){ //cout<<"\ni:"<<i<<endl;
        for(j=1;j<=m;j++){
            if(abs(a[i]-b[j])<=1){ //cout<<"j:"<<j;
                V[i].push_back(j);
            }
        }
    }

    memset(match,-1,sizeof match);
    for(i=1;i<=n;i++){
        memset(vis,0,sizeof vis);
        if(kuhn(i)) ans++; //cout<<"i:"<<i<<" ans:"<<ans<<"\n";
    }

    cout<<ans<<"\n";
    return 0;
}
