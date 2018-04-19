#include<bits/stdc++.h>
using namespace std;

#define maax 10009
bool visited[maax];
vector<int>G[maax];

void bfs(int s)
{
    queue<int>Q;
    Q.push(s);
    visited[s]=1;
    while(!Q.empty())
    {
        int u=Q.front();
        Q.pop();
        for(int i=0;i<G[u].size();i++)
        {
            int v=G[u][i];
            if(visited[v]==0)
            {
                visited[v]=1;
                Q.push(v);
            }
        }
    }
}

int main()
{
    int T,t,n,m,l,i,j,cnt,ans;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        cnt=0;
        ans=0;
        scanf("%d %d %d",&n,&m,&l);
        for(i=1;i<=m;i++)
        {
            int x,y;
            scanf("%d %d",&x,&y);
            G[x].push_back(y);
        }
        for(i=1;i<=l;i++)
        {
            int u;
            scanf("%d",&u);
            bfs(u);
            cnt=0;
            for(int i=1;i<=n;i++)
            {
                if(visited[i]==1)
                cnt++;
            }

            ans=ans+cnt;
        }

        printf("%d\n",cnt);
        memset(visited,0,sizeof(visited));
        for(i=0;i<=n;i++)
            G[i].clear();
    }
    return 0;
}
