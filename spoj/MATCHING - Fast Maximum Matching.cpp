#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mx 50009
ll cow[mx],bull[mx],vis[mx];
//ll V[mx][mx];
vector<ll>V[mx];

bool kuhn(ll u){
    if(vis[u]) return false;
    vis[u]=true;
    for(ll i=0;i<V[u].size();i++){
        ll v=V[u][i];
        //if(vis[v]) continue;
        //vis[v]=1;
        if(bull[v]==-1){
            bull[v]=u;
            cow[u]=v;
            return true;
        }
    }
    for(ll i=0;i<V[u].size();i++){
        ll v=V[u][i];
        if(kuhn(bull[v])){
            bull[v]=u;
            cow[u]=v;
            return true;
        }
    }

    return false;
}

int main(){
    ll c,b,n,i,j;
    scanf("%lld %lld %lld",&c,&b,&n);
        ll cnt=0;
        for(i=1;i<=n;i++){
            ll p,q;
            scanf("%lld %lld",&p,&q);
            V[p].push_back(q);
        }

        memset(cow,-1,sizeof cow);
        memset(bull,-1,sizeof bull);
        bool found=1;
        while(found){
            memset(vis,0,sizeof vis);
            found=false;
            for(i=1;i<=c;i++){
                if(cow[i]==-1){
                    if(kuhn(i)){
                        cnt++;
                        found=1;
                    }
                }
            }
        }

        printf("%lld\n",cnt);
        //for(i=1;i<=c;i++) V[i].clear();
    return 0;
}
