#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 200009

ll vis[mxn],col[mxn];
map<ll,ll>M;
vector<ll>V[mxn];

void dfs(ll u){
    vis[u]=1;
    M[col[u]]++;
    for(ll i=0;i<V[u].size();i++){
        ll v=V[u][i];
        if(vis[v]==0) dfs(v);
    }
}

int main(){
    ll n,m,k,i,j,u,v;
    scanf("%lld %lld %lld",&n,&m,&k);
    for(i=1;i<=n;i++){
        scanf("%lld",&col[i]);
    }

    for(i=1;i<=m;i++){
        scanf("%lld %lld",&u,&v);
        V[u].push_back(v);
        V[v].push_back(u);
    }

    ll ans=0,cnt=0,mx=0;
    for(i=1;i<=n;i++){
        mx=0;
        cnt=0;
        M.clear();
        if(vis[i]==0){
            dfs(i);
        }

        for(map<ll,ll>::iterator it=M.begin();it!=M.end();it++){
            mx=max(mx,it->second);
            cnt+=it->second;
        }

        ans+=cnt-mx;
    }

    printf("%lld\n",ans);
    return 0;
}
