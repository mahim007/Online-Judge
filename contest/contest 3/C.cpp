#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mxn 1003

ll vis[mxn],leaf[mxn],child[mxn],bad[mxn],par[mxn],tot[mxn],q;

vector<ll>graph[mxn];

void dfs(ll u){ //printf("u=%lld\n",u);
    vis[u]=1;

    ll ch=1;
    for(ll i=0;i<graph[u].size();i++){
        ll v=graph[u][i];
        if(vis[v]==0){
            ch=0;
            child[u]++;
            dfs(v);
            par[v]=u;
            //tot[u]+=tot[v];
        }
    }

    ll cut;
    if(u==1) cut=0;
    else cut=1;
    if(graph[u].size()-cut==q){
        for(ll i=0;i<graph[u].size();i++){
            ll v=graph[u][i];
            if(v==par[u]) continue;
            tot[u]+=tot[v];
        }

        tot[u]++;
    }
    else if(graph[u].size()-cut<q){
        tot[u]=1;
    }
    else{
        priority_queue<ll>pq;
        for(ll i=0;i<graph[u].size();i++){
            ll v=graph[u][i];
            if(v==par[u]) continue;
            pq.push(tot[v]);
        }

        ll tmp=q;
        while(tmp>0){
            tot[u]+=pq.top();
            pq.pop();
            tmp--;
        }

        tot[u]++;
    } //printf("u=%lld tot=%lld\n",u,tot[u]);


    leaf[u]=ch;
}


int main(){
    ll T,t,i,j,k;
    ll n,m;

    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld %lld",&n,&q);
        for(i=1;i<n;i++){
            ll u,v;
            scanf("%lld %lld",&u,&v);
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        dfs(1);
        printf("Case %lld: %lld\n",t,tot[1]);

        for(i=1;i<=n;i++) graph[i].clear();
        memset(vis,0,sizeof vis);
        memset(child,0,sizeof child);
        memset(tot,0,sizeof tot);

    }

    return 0;
}
