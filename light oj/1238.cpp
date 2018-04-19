#include<bits/stdc++.h>
using namespace std;

char graph[21][21];
bool visited[21][21];
int level[21][21];
int xx[]={-1,0,1,0};
int yy[]={0,-1,0,1};
int m,n;

int bfs(int sx,int sy)
{
    memset(visited,0,sizeof(visited));
    memset(level,0,sizeof(level));

    queue<int>Q;
    Q.push(sx);
    Q.push(sy);
    visited[sx][sy]=1;
    level[sx][sy]=0;
    while(!Q.empty())
    {
        int u=Q.front();
        Q.pop();
        int v=Q.front();
        Q.pop();
        for(int i=0;i<4;i++)
        {
            int x=u+xx[i];
            int y=v+yy[i];
            //char z=graph[x][y];
            if(x>=0 && x<m && y>=0 && y<n && visited[x][y]==0 && (graph[x][y]=='a' || graph[x][y]=='b' || graph[x][y]=='c' || graph[x][y]=='.' || graph[x][y]=='h'))
            {
                visited[x][y]=1;
                level[x][y]=level[u][v]+1;
                Q.push(x);
                Q.push(y);
            }
            if(graph[x][y]=='h')
                return level[x][y];
        }
    }
}

int main()
{
    int T,t,i,j,maax,sx,sy,res;
    cin>>T;
    for(t=1;t<=T;t++)
    {
        cin>>m>>n;
        for(i=0;i<m;i++)
        {
            cin>>graph[i];
        }
        maax=-1;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(graph[i][j]=='a' || graph[i][j]=='b' || graph[i][j]=='c')
                {
                    sx=i;
                    sy=j;
                    res=bfs(sx,sy);
                    maax=max(maax,res);
                }
            }
        }
        printf("Case %d: %d\n",t,maax);
    }
    return 0;
}
