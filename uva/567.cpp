#include<bits/stdc++.h>
using namespace std;

vector<int>G[21];

int bfs(int x,int y)
{
    queue<int>Q;
    int visited[21]={0};
    int level[21];
    Q.push(x);
    visited[x]=1;
    level[x]=0;

    while(!Q.empty())
    {
        int u=Q.front();
        Q.pop();

        if(u==y)
            return level[u];

        for(int i=0;i<G[u].size();i++)
        {
            int v=G[u][i];
            if(visited[v]==0)
            {
                visited[v]=1;
                level[v]=level[u]+1;
                Q.push(v);
            }
        }
    }
}

int main()
{ //freopen("567 output","w",stdout);
    int i,j,u,v,x,t=1;
    i=1;
    while(scanf("%d",&x)==1)
    {
        for(j=1;j<=x;j++)
        {
            scanf("%d",&v);
            G[i].push_back(v);
            G[v].push_back(i);
        }

        for(i=2;i<=19;i++)
        {
            scanf("%d",&x);
            for(j=1;j<=x;j++)
            {
                scanf("%d",&v);
                G[i].push_back(v);
                G[v].push_back(i);
            }
        }

        printf("Test Set #%d\n",t++);
        int n;
        scanf("%d",&n);
        int k;
        for(k=1;k<=n;k++)
        {
            scanf("%d %d",&u,&v);
            int x=u;
            int y=v;
            if(x>y)
                swap(x,y);
            int ans=bfs(x,y);
            printf("%2d to %2d: %d\n",u,v,ans);
        }
        printf("\n");

        for(i=0;i<21;i++)
            G[i].clear();
        i=1;
    }
    return 0;
}
