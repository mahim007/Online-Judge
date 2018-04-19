#include<bits/stdc++.h>
using namespace std;

vector<int>node;
vector<int>G[109];
int level[109],visited[109];
int maxdepth,n,r,cnt;

int bfs2(int s,int d)
{
    queue<int>Q;
    level[s]=0;
    visited[s]=1;
    Q.push(s);
    while(!Q.empty())
    {
        int u=Q.front();
        if(u==d)
        {
            return level[u];
        }
        Q.pop();
        for(int i=0;i<G[u].size();i++)
        {
            int v=G[u][i];
            if(!visited[v])
            {
                visited[v]=1;
                level[v]=level[u]+1;
                Q.push(v);
            }
        }
    }
}

void bfs(int s)
{
    queue<int>Q;
    level[s]=0;
    visited[s]=1;
    Q.push(s);
    while(!Q.empty())
    {
        int u=Q.front();
        Q.pop();
        for(int i=0;i<G[u].size();i++)
        {
            int v=G[u][i];
            if(!visited[v])
            {
                visited[v]=1;
                level[v]=level[u]+1;
                Q.push(v);
                if(maxdepth<level[v])
                {
                    maxdepth=level[v];
                }
            }
        }
    }
}

int main()
{
    int i,j,k,s,d,t,T;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        scanf("%d",&n);
        scanf("%d",&r);

        for(i=1;i<=r;i++)
        {
            int u,v;
            scanf("%d %d",&u,&v);
            G[u].push_back(v);
            G[v].push_back(u);
        }
        scanf("%d %d",&s,&d);

        maxdepth=cnt=0;
        memset(level,0,sizeof(level));
        memset(visited,0,sizeof(visited));
        bfs(s);
        cnt=cnt+maxdepth; //cout<<"maxdepth:"<<maxdepth<<endl;

        for(i=0;i<n;i++)
        {
            if(maxdepth==level[i])
                node.push_back(i);
        }
        maxdepth=0;
        for(i=0;i<node.size();i++)
        {
            memset(level,0,sizeof(level));
            memset(visited,0,sizeof(visited));
            //cout<<"from node "<<node[i]<<" to "<<d<<endl;
            int dist=bfs2(node[i],d); //cout<<"dist:"<<dist<<endl;
            if(dist>maxdepth)
                maxdepth=dist;
        }

        cnt=cnt+maxdepth;
        printf("Case %d: %d\n",t,cnt);

        for(i=0;i<=n;i++)
            G[i].clear();
        node.clear();
    }
    return 0;
}
