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
#define maax 19
vector<ll>graph[maax];
vector<ll>cost[maax];
ll par[maax];
ll dis[maax];
struct node
{
    ll u,w;
    node(ll x,ll y){u=x,w=y;}
    bool operator <(const node& p) const
    {
        return w>p.w;
    }
};

ll dijkstra(ll src,ll dest)
{
    memset(dis,-1,sizeof dis);
    dis[src]=0;
    par[src]=-1;
    priority_queue<node>pq;
    pq.push(node(src,0));
    while(!pq.empty())
    {
        node top=pq.top();
        ll u=top.u;
        if(u==dest)
            return top.w;
        pq.pop();
        ll s=graph[u].size();
        for(ll i=0;i<s;i++)
        {
            ll v=graph[u][i];
            if(dis[v]==-1 || (dis[u]+cost[u][i]<dis[v]))
            {
                dis[v]=dis[u]+cost[u][i];
                par[v]=u;
                pq.push(node(v,dis[v]));
            }
        }
    }
}

int main()
{
    ll n,i,j,u,w,t=1;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
            break;
        for(i=1;i<=n;i++)
        {
            ll m;
            scanf("%lld",&m);
            for(j=1;j<=m;j++)
            {
                scanf("%lld %lld",&u,&w);
                graph[i].push_back(u);
                cost[i].push_back(w);
            }
        }
        ll src,dest;
        scanf("%lld %lld",&src,&dest);
        ll ans=dijkstra(src,dest);
        vector<ll>path;
        while(dest!=-1)
        {
            path.push_back(dest);
            dest=par[dest];
        }
        printf("Case %lld: Path =",t++);
        reverse(path.begin(),path.end());
        ll s=path.size();
        for(i=0;i<s;i++)
            printf(" %lld",path[i]);
        printf("; %lld second delay\n",ans);

        for(i=0;i<maax;i++)
        {
            graph[i].clear();
            cost[i].clear();
        }
    }
}

