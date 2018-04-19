#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mx 509
ll boy[mx],girl[mx],vis[mx];
vector<ll>V[mx];
ll T,t,i,j,k,bolt,nut;

bool kuhn(ll u){ //cout<<"kuhn of "<<u<<" called\n";
    for(ll i=0;i<V[u].size();i++){
        ll v=V[u][i];
        if(vis[v]) continue;
        vis[v]=1;
        if(girl[v]==-1 || kuhn(girl[v])){
            girl[v]=u;
            boy[u]=v;
            return true;
        }
 /*       else if(kuhn(girl[v])){
            girl[v]=u;
            boy[u]=v;
            return true;
        } */
    }
    return false;
}

ll bipartite(){ //cout<<"bipartite called\n";
    memset(boy,-1,sizeof boy);
    memset(girl,-1,sizeof girl);
    ll cnt=0;
    for(ll i=1;i<=bolt;i++){
        memset(vis,0,sizeof vis);
        if(kuhn(i)) cnt++;
    }
    return cnt;
}

int main(){
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld %lld",&bolt,&nut);
        for(i=1;i<=bolt;i++){
            for(j=1;j<=nut;j++){
                ll d;
                scanf("%lld",&d);
                if(d) V[i].push_back(j);
            }
        }

        printf("Case %lld: a maximum of %lld nuts and bolts can be fitted together\n",t,bipartite());
        for(i=1;i<=bolt;i++) V[i].clear();
    }

    return 0;
}
