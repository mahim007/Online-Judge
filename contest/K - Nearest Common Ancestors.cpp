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
using namespace std;
#define ll long long int
#define mx 10009
vector<ll>G[mx];
ll parent[mx],lvl[mx];
ll sp[mx][15];
ll indegree[mx];

void bfs(ll src){
    queue<ll>Q;
    Q.push(src);
    parent[src]=-1;
    lvl[src]=0;
    ll vis[mx]={0};
    vis[src]=1;
    while(!Q.empty()){
        ll u=Q.front();
        Q.pop();
        for(ll i=0;i<G[u].size();i++){
            ll v=G[u][i];
            if(!vis[v]){
                vis[v]=1;
                lvl[v]=lvl[u]+1;
                parent[v]=u;
                Q.push(v);
            }
        }
    }
}

void lca_init(ll n){
    memset(sp,-1,sizeof sp);
    for(ll i=1;i<=n;i++){
        sp[i][0]=parent[i];
    }

    for(ll j=1;(1<<j)<n;j++){
        for(ll i=1;i<=n;i++){
            if(sp[i][j-1]!=-1)
                sp[i][j]=sp[sp[i][j-1]][j-1];
        }
    }
}

ll lca_query(ll n,ll p,ll q){
    ll stp=0,d,i;
    if(lvl[p]<lvl[q])
        swap(p,q);
    while(1){
        d=stp+1;
        if((1<<d)>lvl[p]) break;
        stp++;
    }

    for(ll i=stp;i>=0;i--){
        if((lvl[p]-(1<<i))>=lvl[q]){
            p=sp[p][i];
        }
    }

    if(p==q) return p;
    for(ll i=stp;i>=0;i--){
        if(sp[p][i]!=-1 && sp[p][i]!=sp[q][i]){
            p=sp[p][i];
            q=sp[q][i];
        }
    }

    return parent[p];
}

int main(){
    ll t,T,n,src,i,j,k,x,y;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld",&n);
        for(i=1;i<n;i++){
            scanf("%lld %lld",&x,&y);
            indegree[y]++;
            G[x].push_back(y);
        }

        for(i=1;i<=n;i++){
            if(indegree[i]==0){
                src=i;
                break;
            }
        }


    bfs(src);
    lca_init(n);
    scanf("%lld %lld",&x,&y);
    printf("%lld\n",lca_query(n,x,y));
    memset(parent,-1,sizeof parent);
    memset(lvl,0,sizeof lvl);
    memset(indegree,0,sizeof indegree);
    for(ll i=0;i<=n;i++) G[i].clear();
    }
    return 0;
}
