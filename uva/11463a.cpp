#include<bits/stdc++.h>
using namespace std;

vector<int>node;
vector<int>G[109];
int level[109],level1[109],level2[109],level3[109],visited[109];
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
        for(i=0;i<n;i++)
            level1[i]=level[i];

        memset(level,0,sizeof(level));
        memset(visited,0,sizeof(visited));
        bfs(d);
        for(i=0;i<n;i++)
            level2[i]=level[i];

        for(i=0;i<n;i++)
            level3[i]=level1[i]+level2[i];

        sort(level3,level3+n);

        printf("Case %d: %d\n",t,level3[n-1]);

        for(i=0;i<=n;i++)
            G[i].clear();
    }
    return 0;
}

