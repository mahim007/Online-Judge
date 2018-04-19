#include <string.h>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <bitset>
#include <list>
#include <stack>
#include <queue>
#include <algorithm>
#include <numeric>
#include <sstream>
using namespace std;

#define ll long long int
#define sci(n) scanf("%d",&n)
#define scl(n) scanf("%lld",&n)
#define scd(n) scanf("%lf",&n)
#define sc scanf
#define pf printf
#define pfi(n) printf("%d",n)
#define pfl(n) printf("%lld",n)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define mem(a,n) memset(a,n,sizeof(a))
#define maax 3009
vector<ll>G[maax];
ll vis[maax];

ll bfs(ll src,ll dst,ll w){
    queue<ll>Q;
    Q.push(src);
    memset(vis,-1,sizeof vis);
    vis[src]=0;
    while(!Q.empty()){
        ll u=Q.front();Q.pop();
        if(u==dst){
            if(vis[u]<=w)
                return 1;
            else
                return -1;
        }
        for(ll i=0;i<G[u].size();i++){
            ll v=G[u][i];
            if(vis[v]==-1){
                vis[v]=vis[u]+1;
                Q.push(v);
            }
        }
    }
}

int main(){
    ll n,m,i,j;
    cin>>n>>m;
    for(i=1;i<=m;i++){
        ll u,v;
        cin>>u>>v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    ll s1,t1,w1,s2,t2,w2;
    cin>>s1>>t1>>w1;
    cin>>s2>>t2>>w2;
    ll ans=bfs(s1,t1,w1);
    if(ans==-1){
        printf("-1\n");
        return 0;
    }
    ll level[maax];
    memset(level,-1,sizeof level);
    for(i=0;i<n;i++){
        level[i]=vis[i];
    }
    //cin>>s1>>t1>>w1;
    ans=bfs(s2,t2,w2);
    if(ans==-1){
        printf("-1\n");
        return 0;
    }
    for(i=1;i<=n;i++){
        level[i]=vis[i];
    }
    ans=0;
    for(i=1;i<=n;i++){
        if(level[i]==-1){
            ans++;
        }
    }
    cout<<ans<<endl;
}

