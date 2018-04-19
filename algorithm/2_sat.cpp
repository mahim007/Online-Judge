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

//#define ll i64
#define i64 long long int
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
#define mx 50
vector<i64>G[2*mx],GR[2*mx];
i64 vis[2*mx],finish[2*mx],order[2*mx],t=0,parent,leader[2*mx];
map<i64,int>M;

void dfs_rev(i64 u){
    vis[u]=1;
    for(i64 i=0;i<GR[u].size();i++){
        i64 v=GR[u][i];
        if(!vis[v]){
            dfs_rev(v);
        }
    }
    t++;
    finish[u]=t;
}

void dfs(i64 u){
    vis[u]=1;
    leader[u]=parent;
    for(i64 i=0;i<G[u].size();i++){
        i64 v=G[u][i];
        if(!vis[v]){
            dfs(v);
        }
    }
}

int SCC(i64 u,i64 v){
    return leader[u]==leader[v];
}

int main(){
    i64 N,E;
    i64 i,j,k;
    scanf("%lld %lld",&N,&E);
    for(i=1;i<=E;i++){
        i64 x,y;
        scanf("%lld %lld",&x,&y);
        if(x>0){
            if(y>0){
                G[N+x].push_back(y); G[N+y].push_back(x);
                GR[y].push_back(N+x); GR[x].push_back(N+y);
            }
            else{
                G[N+x].push_back(N-y); G[-y].push_back(x);
                GR[N-y].push_back(N+x); GR[x].push_back(-y);
            }
        }
        else{
            if(y>0){
                G[-x].push_back(y); G[N+y].push_back(N-x);
                GR[y].push_back(-x); GR[N-x].push_back(N+y);
            }
            else{
                G[-x].push_back(N-y); G[-y].push_back(N-x);
                GR[N-y].push_back(-x); GR[N-x].push_back(-y);
            }
        }
    }

    memset(vis,0,(2*N+1)*sizeof(long long int));
    for(i=2*N;i>0;i--){
        if(!vis[i])
            dfs_rev(i);
        order[finish[i]]=i;
    }

    memset(vis,0,(2*N+1)*sizeof(i64));
    for(i=2*N;i>0;i--){
        if(!vis[order[i]]){
            parent=order[i];
            dfs(order[i]);
        }
    }

    for(i=2*N;i>0;i--){
        i64 u=order[i];
        if(u>N){
            if(SCC(u,u-N)) break;
            if(M.find(leader[u])==M.end()){
                M[leader[u]]=1;
                M[leader[u-N]]=0;
            }
        }
        else{
            if(SCC(u,u+N)) break;
            if(M.find(leader[u])==M.end()){
                M[leader[u]]=1;
                M[leader[u+N]]=0;
            }
        }
    }
    if(i>0){
        printf("un-staisfied\n");
    }
    else{
        printf("satisfied\n");
        for(i=1;i<=N;i++){
            printf("%lld %s\n",i,M[leader[i]]?"true":"false");
        }
    }
    return 0;
}
