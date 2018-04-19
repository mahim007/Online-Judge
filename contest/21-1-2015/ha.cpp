#include<bits/stdc++.h>
using namespace std;
#define i64 long long int

struct data
{
    i64 u,v,cost,color;
};

vector<data>V[100005];
i64 expense[100005];

void bfs(i64 src,i64 N)
{
    queue<data>Q;
    Q.push(edge[src]);
    i64 visited[100005]={0};
    i64 level[100005]={0};
    visited[src]=1;

    while(!Q.empty())
    {
        data uu=Q.front();
        i64 u=uu.u;
        Q.pop();
        for(i64 i=0;i<V[u].size();i++)
        {
            data vv=V[u][i];
            i64 v=vv.v;
            if(visited[v]==0)
            {
                Q.push(edge[v]);
                visited[v]=1;
                if(uu.color!=edge[v].color)
                {
                    expense[v]=uu.cost;
                }

            }
        }
    }
}

int main()
{
    i64 N,E,C,src,q;
    scanf("%lld %lld %lld",&N,&E,&C);
    for(i64 i=1;i<=E;i++)
    {
        i64 x,y,cst,clr;
        scanf("%lld %lld %lld %lld",&x,&y,&cst,&clr);
        data edge;
        edge.u=x;
        edge.v=y;
        edge.cost=cst;
        edge.color=clr;
        V[x].push_back(edge[x]);
    }
    scanf("%lld %lld",&src,&q);
    bfs(src,N);

}
