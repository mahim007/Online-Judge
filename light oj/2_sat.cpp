#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mx 20009
ll vis[2*mx],order[2*mx],finish[2*mx],x=0,leader[2*mx],parent;
vector<ll>G[2*mx],GR[2*mx],ans;
map<ll,int>M;

void dfs_rev(ll u){
    vis[u]=1;
    for(ll i=0;i<GR[u].size();i++){
        ll v=GR[u][i];
        if(!vis[v]){
            dfs_rev(v);
        }
    }
    x++;
    finish[u]=x;
}

void dfs(ll u){
    vis[u]=1;
    leader[u]=parent;
    for(ll i=0;i<G[u].size();i++){
        ll v=G[u][i];
        if(!vis[v]){
            dfs(v);
        }
    }
}

int SCC(ll u,ll v){
    return leader[u]==leader[v];
}

int main(){
    ll T,t,i,j,k,u,v,n,e;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld %lld",&e,&n);
        for(i=1;i<=e;i++){
            scanf("%lld %lld",&u,&v);
            if(u>0){
                if(v>0){
                    G[n+u].push_back(v); G[n+v].push_back(u);
                    GR[v].push_back(n+u); GR[u].push_back(n+v);
                }
                else{
                    G[n+u].push_back(n-v); G[-v].push_back(u);
                    GR[n-v].push_back(n+u); GR[u].push_back(-v);
                }
            }
            else{
                if(v>0){
                    G[-u].push_back(v); G[n+v].push_back(n-u);
                    GR[v].push_back(-u); GR[n-u].push_back(n+v);
                }
                else{
                    G[-u].push_back(n-v); G[-v].push_back(n-u);
                    GR[n-v].push_back(-u); GR[n-u].push_back(-v);
                }
            }
        }
        x=0;
        memset(vis,0,(2*n+1)*sizeof(ll));
        for(i=2*n;i>0;i--){
            if(!vis[i]){
                dfs_rev(i);
            }
            order[finish[i]]=i;
        }

        memset(vis,0,(2*n+1)*sizeof(ll));
        for(i=2*n;i>0;i--){
            if(!vis[order[i]]){
                parent=order[i];
                dfs(order[i]);
            }
        }

        for(i=2*n;i>0;i--){
            u=order[i];
            if(u>n){
                if(SCC(u,u-n)) break;
                if(M.find(leader[u])==M.end()){
                    M[leader[u]]=1;
                    M[leader[u-n]]=0;
                }
            }
            else{
                if(SCC(u,u+n)) break;
                if(M.find(leader[u])==M.end()){
                    M[leader[u]]=1;
                    M[leader[u+n]]=0;
                }
            }
        }
        printf("Case %lld: ",t);
        if(i>0){
            printf("No\n");
        }
        else{
            printf("Yes\n");
            for(i=1;i<=n;i++){
                if(M[leader[i]]==1){
                    ans.push_back(i);
                }
            }
            printf("%lld",ans.size());
            for(i=0;i<ans.size();i++){
                printf(" %lld",ans[i]);
            }
            printf("\n");
        }
        for(i=0;i<=2*n;i++){
            G[i].clear();
            GR[i].clear();
        }
        M.clear();
        ans.clear();
        //memset(order,0,(2*n+1)*sizeof(ll));
        memset(finish,0,(2*n+1)*sizeof(ll));
        memset(leader,0,(2*n+1)*sizeof(ll));
    }
    return 0;
}
