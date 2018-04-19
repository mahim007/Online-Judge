#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define maax 20009
#define black 1
#define red 2
vector<ll>G[maax];
ll V,L,res;
ll color[maax];
//bool vis[maax];

void bfs(ll src)
{
    queue<ll>Q;
    Q.push(src);
    while(!Q.empty())
    {
        ll u=Q.front();
        Q.pop();
        for(ll i=0;i<G[u].size();i++)
        {
            ll v=G[u][i];
            if(color[v]==0)
            {
                Q.push(v);
                if(color[u]==black)
                {
                    color[v]=red;
                    L++;
                }
                else
                {
                    color[v]=black;
                    V++;
                }
            }
        }
    }
    res+=max(V,L);
}

int main()
{
    ll T,t,i,j,n;
    scanf("%lld",&T);
    for(t=1;t<=T;t++)
    {
        scanf("%lld",&n);
        for(i=1;i<=n;i++)
        {
            ll u,v;
            scanf("%lld %lld",&u,&v);
            G[u].push_back(v);
            G[v].push_back(u);
        }
        for(i=1;i<maax;i++)
        {
            V=L=0;
            if(color[i]==0 && G[i].size()>0)
            {
                color[i]=black;
                V++;
                bfs(i);
            }
        }
        printf("Case %lld: %lld\n",t,res);
        memset(color,0,sizeof(color));
        for(i=1;i<maax;i++)
            G[i].clear();
        res=0;
    }
}
