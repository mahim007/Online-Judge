#include<bits/stdc++.h>
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
#define maax 39
vector<ll>G[maax];
ll level[maax];
map<ll,ll>M;
ll arr[maax];
ll ans;

void bfs(ll src,ll ttl)
{
    memset(level,-1,sizeof level);
    level[src]=0;
    queue<ll>Q;
    Q.push(src);
    while(!Q.empty())
    {
        ll u=Q.front(); Q.pop();
        ll s=G[u].size();
        for(ll i=0;i<s;i++)
        {
            ll v=G[u][i];
            if(level[v]==-1)
            {
                level[v]=level[u]+1;
                if(level[v]<=ttl)
                    ans++;
                Q.push(v);
            }
        }
    }
}

int main()
{
    ll T=1,t,i,j,ttl,n,src,nod;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
            break;
        nod=0;
        ll x=1;
        for(i=1;i<=n;i++)
        {
            ll u,v;
            scanf("%lld %lld",&u,&v);
            if(M[u]==0)
            {
                M[u]=x;
                arr[x]=u;
                x++;
                nod++;
            }
            if(M[v]==0)
            {
                M[v]=x;
                arr[x]=v;
                x++;
                nod++;
            }
            G[M[u]].push_back(M[v]);
            G[M[v]].push_back(M[u]);
        }
        for(;;)
        {
            scanf("%lld %lld",&src,&ttl);
            if(src==0 && ttl==0)
                break;
            ans=1;
            bfs(M[src],ttl);
            printf("Case %lld: %lld nodes not reachable from node %lld with TTL = %lld.\n",T++,nod-ans,src,ttl);
        }
        M.clear();
        for(ll z=0;z<maax;z++)
            G[z].clear();
    }
    return 0;
}
