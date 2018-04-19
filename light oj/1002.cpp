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
#define maax 509
vector<ll>graph[maax];
vector<ll>cost[maax];
ll dis[maax];
struct node
{
    ll x,w;
    node(ll i,ll j){x=i,w=j;}
    bool operator < (const node& p) const
    {
        return w>p.w;
    }
};

void dijkstra(ll src)
{
    memset(dis,-1,sizeof dis);
    dis[src]=0;
    priority_queue<node>pq;
    pq.push(node(src,dis[src]));
    while(!pq.empty())
    {
        node top=pq.top();
        ll u=top.x;
        pq.pop();
        ll s=graph[u].size();
        for(ll i=0;i<s;i++)
        {
            ll v=graph[u][i];
            if(dis[v]==-1 || max(dis[u],cost[u][i])<dis[v])
            {
                dis[v]=max(dis[u],cost[u][i]);
                pq.push(node(v,dis[v]));
            }
        }
    }
}

int main()
{
    ll T,t,i,j,n,e,src;
    scanf("%lld",&T);
    for(t=1;t<=T;t++)
    {
        scanf("%lld %lld",&n,&e);
        for(i=1;i<=e;i++)
        {
            ll u,v,w;
            scanf("%lld %lld %lld",&u,&v,&w);
            graph[u].push_back(v);
            graph[v].push_back(u);
            cost[u].push_back(w);
            cost[v].push_back(w);
        }
        scanf("%lld",&src);
        dijkstra(src);
        printf("Case %lld:\n",t);
        for(i=0;i<n;i++)
        {
            if(dis[i]==-1)
                printf("Impossible\n");
            else
                printf("%lld\n",dis[i]);
            graph[i].clear();
            cost[i].clear();
        }
    }
}
