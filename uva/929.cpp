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
#define maax 1020
ll graph[maax][maax];
ll dis[maax][maax];
ll R,C;
ll fx[]={1,-1,0,0};
ll fy[]={0,0,1,-1};

struct node
{
    ll u,v,cost;
    node(ll x,ll y,ll z)
    {
        u=x;
        v=y;
        cost=z;
    }
    bool operator < (const node& p) const
    {
        return cost>p.cost;
    }
};



ll dijkstra(ll srcx,ll srcy,ll desx,ll desy)
{
    memset(dis,1,sizeof dis);
    dis[srcx][srcy]=graph[srcx][srcy];
    priority_queue<node>pq;
    pq.push(node(srcx,srcy,dis[srcx][srcy]));
    while(!pq.empty())
    {
        node top=pq.top();
        ll ux=top.u; //cout<<"ux:"<<ux<<endl;
        ll uy=top.v;// cout<<"vx:"<<uy<<endl;
        ll ucost=top.cost; //cout<<"ucost:"<<ucost<<endl<<endl;
        pq.pop(); //system("pause");
        if(ux==desx && uy==desy)
            return ucost;
        for(ll i=0;i<4;i++)
        {
            ll vx=ux+fx[i];
            ll vy=uy+fy[i];
            if((vx>=0 && vx<R && vy>=0 && vy<C))
            {
                if((dis[ux][uy]+graph[vx][vy]<dis[vx][vy])){
                dis[vx][vy]=dis[ux][uy]+graph[vx][vy];
                pq.push(node(vx,vy,dis[vx][vy]));
                }
            }
        }
    }
}

int main()
{
    ll T,t,i,j;
    scanf("%lld",&T);
    for(t=1;t<=T;t++)
    {
        scanf("%lld %lld",&R,&C);
        for(i=0;i<R;i++)
        {
            for(j=0;j<C;j++)
            {
                scanf("%lld",&graph[i][j]);
            }
        }
        ll ans=dijkstra(0,0,R-1,C-1);
        printf("%lld\n",ans);
    }
    return 0;
}

