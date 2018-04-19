#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 50009
#define lgn 16

ll n,m;
vector<ll>graph[mxn],cost[mxn];
ll node[mxn][lgn],weight[mxn][lgn];
ll par[mxn],cc[mxn],vis[mxn],level[mxn];

struct data{
    ll x,y,w;
    bool operator < (const data& P) const{
        return w<P.w;
    }
};
vector<data>E;

ll parent(ll r){
    if(par[r]==r) return r;
    return par[r]=parent(par[r]);
}

void kruskal(){
    for(ll i=1;i<=n;i++){
        par[i]=i;
        cc[i]=0;
        graph[i].clear();
        cost[i].clear();
    }

    sort(E.begin(),E.end());
    ll cnt=0;
    for(ll i=0;i<m;i++){
        ll u,v,c;
        u=E[i].x;
        v=E[i].y;
        c=E[i].w;
        u=parent(u);
        v=parent(v);
        if(u!=v){
            par[v]=u;
            graph[u].push_back(v);
            graph[v].push_back(u);
            cost[u].push_back(c);
            cost[v].push_back(c);
            cnt++;
            if(cnt==n-1) break;
        }
    }
}

void bfs(){
    queue<ll>Q;
    Q.push(1);
    vis[1]=1;
    while(!Q.empty()){
        ll u=Q.front();
        Q.pop();
        ll sz=graph[u].size();
        for(ll i=0;i<sz;i++){
            ll v=graph[u][i];
            ll ww=cost[u][i];
            if(vis[v]==0){
                vis[v]=1;
                par[v]=u;
                cc[v]=ww;
                level[v]=level[u]+1;
                Q.push(v);
            }
        }
    }
}

void sparse(){ //cout<<"sparse table\n";
    ll log=log2(n); //cout<<log<<"\n";
    for(ll j=1;j<=log;j++){
        for(ll i=1;i<=n;i++){
            if(node[i][j-1]==-1){
                node[i][j]=-1;
                weight[i][j]=0;
            }
            else{
                node[i][j]=node[node[i][j-1]][j-1];
                weight[i][j]=max(weight[i][j-1],weight[node[i][j-1]][j-1]);
            } //cout<<weight[i][j]<<" ";
        } //cout<<endl;
    }

//    for(ll i=1;i<=n;i++){
//        for(ll j=1;j<=log;j++) cout<<weight[i][j]<<" ";
//        cout<<endl;
//    }
}

ll lca(ll u,ll v){
    if(level[u]<level[v]) swap(u,v);
    ll log=log2(n);
    ll mx=0;
    for(ll i=log;i>=0;i--){
        if(node[u][i]!=-1 && (level[u]-(1<<i))>=level[v]){
            mx=max(mx,weight[u][i]);
            u=node[u][i];
        }
    }

    if(u==v) return mx;
    for(ll i=log;i>=0;i--){
        if(node[u][i]!=-1 && node[u][i]!=node[v][i]){
            mx=max(mx,max(weight[u][i],weight[v][i]));
            u=node[u][i];
            v=node[v][i];
        }
    }

    mx=max(mx,max(weight[u][0],weight[v][0]));
    return mx;
}

int main(){
    ll T,t,i,j,k,q;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld %lld",&n,&m);
        for(i=1;i<=m;i++){
            data D;
            scanf("%lld %lld %lld",&D.x,&D.y,&D.w);
            E.push_back(D);
        }

        kruskal();
        memset(vis,0,sizeof vis);
        level[1]=0;
        par[1]=-1;
        cc[1]=0;
        bfs();
        for(i=1;i<=n;i++){
            node[i][0]=par[i];
            weight[i][0]=cc[i];
        }

        sparse();
        printf("Case %lld:\n",t);
        scanf("%lld",&q);
        for(k=1;k<=q;k++){
            ll u,v;
            scanf("%lld %lld",&u,&v);
            printf("%lld\n",lca(u,v));
        }

        E.clear();
    }

    return 0;
}
