#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 100009
#define lgn 18

ll n,mn,mx;
ll vis[mxn],level[mxn];
ll par[mxn][lgn],MN[mxn][lgn],MX[mxn][lgn];

vector<ll>graph[mxn],cost[mxn];

void bfs(){
    memset(vis,0,sizeof vis);
    vis[1]=1;
    level[1]=0;
    queue<ll>Q;
    Q.push(1);
    while(!Q.empty()){
        ll u=Q.front();
        Q.pop();
        ll sz=graph[u].size();
        for(ll i=0;i<sz;i++){
            ll v=graph[u][i];
            if(vis[v]==0){
                vis[v]=1;
                level[v]=level[u]+1;
                par[v][0]=u;
                MN[v][0]=cost[u][i];
                MX[v][0]=cost[u][i];
                Q.push(v);
            }
        }
    }

//    cout<<"min  max\n";
//    for(ll i=1;i<=n;i++){
//        printf("%lld\t%lld\n",MN[i][0],MX[i][0]);
//    }
}

void sparse(){ //cout<<"sparse table\n";
    ll log=log2(n);
    for(ll j=1;j<=log;j++){
        for(ll i=1;i<=n;i++){
            if(par[i][j-1]==-1){
                par[i][j]=-1;
                MN[i][j]=mxn;
                MX[i][j]=-mxn;
            }
            else{
                ll p=par[i][j-1];
                par[i][j]=par[p][j-1];
                MN[i][j]=min(MN[i][j-1],MN[p][j-1]);
                MX[i][j]=max(MX[i][j-1],MX[p][j-1]);
            }
        }
    }

//    cout<<"min table\n";
//    for(ll i=1;i<=n;i++){
//        for(ll j=0;j<=log;j++){
//            cout<<MN[i][j]<<" ";
//        } cout<<"\n";
//    }
//
//    cout<<"max table\n";
//    for(ll i=1;i<=n;i++){
//        for(ll j=0;j<=log;j++){
//            cout<<MX[i][j]<<" ";
//        } cout<<"\n";
//    }
}

void lca(ll u,ll v){
    if(level[u]<level[v]) swap(u,v); //cout<<"level u:"<<level[u]<<" level v:"<<level[v]<<"\n";
    ll log=log2(n);//cout<<"log:"<<log<<"\n";
    mn=mxn;
    mx=-mxn;
    for(ll i=log;i>=0;i--){
        if(par[u][i]!=-1 && (level[u]-(1<<i))>=level[v]){ //cout<<"u:"<<u<<" i:"<<i<<endl;
            mn=min(mn,MN[u][i]);
            mx=max(mx,MX[u][i]);
            u=par[u][i];
        }
    }

    if(u==v) return;
    for(ll i=log;i>=0;i--){
        if(par[u][i]!=-1 && par[u][i]!=par[v][i]){
            mn=min(mn,min(MN[u][i],MN[v][i]));
            mx=max(mx,max(MX[u][i],MX[v][i]));
            u=par[u][i];
            v=par[v][i];
        }
    }

    mn=min(mn,min(MN[u][0],MN[v][0]));
    mx=max(mx,max(MX[u][0],MX[v][0]));
}

int main(){
    //freopen("lightoj 1162.txt","w",stdout);
    ll T,t,i,j,k,x,y,z,q;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld",&n);
        for(i=1;i<n;i++){
            scanf("%lld %lld %lld",&x,&y,&z);
            graph[x].push_back(y);
            graph[y].push_back(x);
            cost[x].push_back(z);
            cost[y].push_back(z);
        }

        par[1][0]=-1;
        MN[1][0]=mxn;
        MX[1][0]=-mxn;
        bfs();
        sparse();
        printf("Case %lld:\n",t);
        scanf("%lld",&q);
        for(k=1;k<=q;k++){
            scanf("%lld %lld",&x,&y);
            lca(x,y);
            if(mn==mxn) mn=0;
            if(mx==-mxn) mx=0;
            printf("%lld %lld\n",mn,mx); //system("pause");
        }

        for(i=1;i<=n;i++){
            graph[i].clear();
            cost[i].clear();
        }
    }

    return 0;
}
