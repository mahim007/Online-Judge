#include<bits/stdc++.h>
using namespace std;

vector<int>g[100];
void bfs(int src,int n)
{
    queue<int>q;
    q.push(src);
    int level[100]={0};
    int visited[100]={0};
    level[src]=0;
    visited[src]=1;

    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0;i<g[u].size();i++)
        {
            int v=g[u][i];
            if(!visited[v])
            {
                q.push(v);
                level[v]=level[u]+1;
                visited[v]=1;
            }
        }
    }

    for(int i=1;i<=n;i++)
    {
        printf("src:%d to %d distance:%d\n",src,i,level[i]);
    }

}

int main()
{
    int N,E;
    while(scanf("%d %d",&N,&E)==2)
    {
        for(int i=1;i<=E;i++)
        {
            int x,y;
            scanf("%d %d",&x,&y);
            g[x].push_back(y);
            g[y].push_back(x);
        }
        printf("Source:");
        int src;
        scanf("%d",&src);
        bfs(src,N);
    }
    return 0;
}
