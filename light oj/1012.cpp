#include<bits/stdc++.h>
using namespace std;

string graph[21];
bool visited[21][21];
int xx[]={-1,0,1,0};
int yy[]={0,-1,0,1};
int w,h;

void bfs(int sx,int sy)
{
    queue<int>Q;
    visited[sx][sy]=1;
    Q.push(sx);
    Q.push(sy);
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
            if(x>=0 && x<h && y>=0 && y<w && visited[x][y]==0 && graph[x][y]=='.')
            {
                visited[x][y]=1;
                Q.push(x);
                Q.push(y);
            }
        }
    }
}

int main()
{
    int i,j,T,t,sx,sy,ans;
    cin>>T;
    for(t=1;t<=T;t++)
    {
        ans=0;
        cin>>w>>h;
        for(i=0;i<h;i++)
        {
            cin>>graph[i];
        }
        for(i=0;i<h;i++)
        {
            for(j=0;j<w;j++)
            {
                if(graph[i][j]=='@')
                {
                    sx=i;
                    sy=j;
                }
            }
        }
        bfs(sx,sy);

        for(i=0;i<h;i++)
        {
            for(j=0;j<w;j++)
            {
                if(visited[i][j]==1)
                    ans++;
            }
        }
        printf("Case %d: %d\n",t,ans);
        for(i=0;i<21;i++)
            graph[i].clear();
        memset(visited,0,sizeof(visited));
    }
    return 0;
}
