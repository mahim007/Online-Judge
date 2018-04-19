#include<bits/stdc++.h>
using namespace std;

#define MAX 200009
#define i64 long long int
i64 parent[MAX];

struct edge
{
    i64 u,v,w;
    bool operator < (const edge& p)const
    {
        return w<p.w;
    }
};

vector<edge>e;

i64 findparent(i64 r)
{
    if(parent[r]==r)
        return r;
    return parent[r]=findparent(parent[r]);
}

i64 mst(i64 n)
{
    sort(e.begin(),e.end());
    for(i64 i=0;i<=n;i++)
        parent[i]=i;

    i64 counter=0,cost=0;
    for(i64 i=0;i<(i64)e.size();i++)
    {
        i64 u=findparent(e[i].u);
        i64 v=findparent(e[i].v);

        if(u!=v)
        {
            parent[u]=v;
            counter++;
            cost=cost+e[i].w;

            if(counter==n-1)
                break;


        }
    }
     return cost;
}


int main()
{
    i64 N,E,cost;
    while(scanf("%lld %lld",&N,&E)==2)
    {
        if(N==0 && E==0)
            break;
        cost=0;
        for(i64 i=1;i<=E;i++)
    {
        i64 u,v,w;
        scanf("%lld %lld %lld",&u,&v,&w);

        edge get;
        get.u=u;
        get.v=v;
        get.w=w;
        cost=cost+w;
        e.push_back(get);
    }

    cout<<cost-mst(N)<<endl;
    e.clear();
    }
    return 0;
}

