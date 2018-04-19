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
#define maax 109
vector<ll>graph[maax];
vector<ll>weight[maax];
ll dis[maax][maax];
ll fuel[maax];
ll cap;
struct node
{
    ll nd,gas,price;
    node(ll i,ll j,ll k){nd=i,gas=j,price=k;}
    bool operator < (const node& p) const
    {
        return price>p.price;
    }
};

ll dijkstra(ll src,ll dest)
{
    memset(dis,63,sizeof dis);
    dis[src][0]=0;
    priority_queue<node>pq;
    pq.push(node(src,0,0));
    while(!pq.empty())
    {
        node top=pq.top();pq.pop();
        ll u=top.nd;
        ll g=top.gas;
        if(u==dest)
            return top.price;
        if(g+1<=cap && dis[u][g+1]>dis[u][g]+fuel[u])
        {
            dis[u][g+1]=dis[u][g]+fuel[u];
            pq.push(node(u,g+1,dis[u][g+1]));
        }
        ll s=graph[u].size();
        for(ll i=0;i<s;i++)
        {
            ll v=graph[u][i];
            ll d=weight[u][i];
            if(g<d) continue;
            if(dis[v][g-d]>dis[u][g])
            {
                dis[v][g-d]=dis[u][g];
                pq.push(node(v,g-d,dis[u][g]));
            }
        }
    }
    return -1;
}

int main()
{
    ll T,t,i,j,N,E;
    scanf("%lld",&T);
    for(t=1;t<=T;t++)
    {
        scanf("%lld %lld",&N,&E);
        for(i=0;i<N;i++)
        {
            scanf("%lld",&fuel[i]);
        }
        for(i=0;i<E;i++)
        {
            ll u,v,w;
            scanf("%lld %lld %lld",&u,&v,&w);
            graph[u].push_back(v);
            graph[v].push_back(u);
            weight[u].push_back(w);
            weight[v].push_back(w);
        }
        ll q,ans,src,dest;
        scanf("%lld",&q);
        printf("Case %lld:\n",t);
        for(j=1;j<=q;j++)
        {
            scanf("%lld %lld %lld",&cap,&src,&dest);
            ans=dijkstra(src,dest);
            if(ans==-1)
                printf("impossible\n");
            else
                printf("%lld\n",ans);
        }
        for(i=0;i<N;i++)
        {
            graph[i].clear();
            weight[i].clear();
        }
    }
    return 0;
}
