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
#define maax 20099
vector<ll>G[maax];
vector<ll>cost[maax];
ll dis[maax];
ll n,m,s,d;
struct node
{
    ll n,w;
    node(ll u,ll v) {n=u,w=v;}
    bool operator < (const node& p) const
    {
        return w>p.w;
    }
};

ll dijkstra()
{
    memset(dis,-1,sizeof dis);
    dis[s]=0;
    priority_queue<node>pq;
    pq.push(node(s,0));
    while(!pq.empty())
    {
        node top=pq.top();
        ll u=top.n;
        if(u==d)
            return top.w;
        ll z=G[u].size();
        pq.pop();
        for(ll i=0;i<z;i++)
        {
            ll v=G[u][i];
            if(dis[v]==-1 || (dis[u]+cost[u][i]<dis[v]))
            {
                dis[v]=dis[u]+cost[u][i];
                pq.push(node(v,dis[v]));
            }
        }
    }
    return -1;
}

int main()
{ //freopen("10986 output","w",stdout);
    ll T,t,i,j;
    scanf("%lld",&T);
    for(t=1;t<=T;t++)
    {
        scanf("%lld %lld %lld %lld",&n,&m,&s,&d);
        for(i=1;i<=m;i++)
        {
            ll u,v,d;
            scanf("%lld %lld %lld",&u,&v,&d);
            G[u].push_back(v);
            G[v].push_back(u);
            cost[u].push_back(d);
            cost[v].push_back(d);
        }
        ll ans=dijkstra();
        printf("Case #%lld: ",t);
        if(ans==-1)
        {
            printf("unreachable\n");
        }
        else
        {
            printf("%lld\n",ans);
        }
        for(i=0;i<=n;i++){
            G[i].clear();
            cost[i].clear();
        }
    }
}
