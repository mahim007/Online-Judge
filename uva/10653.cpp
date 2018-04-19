#include<bits/stdc++.h>
using namespace std;

int graph[1009][1009];
//bool visited[1009][1009];
//int level[1009][1009];
int xx[]={-1,0,1,0};
int yy[]={0,-1,0,1};
int startx,starty,endx,endy,R,C;

int isvalid(int x,int y)
{
    if(graph[x][y]==-2 && x<0 || y<0 ||x>=R || y>=C)
        return 0;
    return 1;
}

int bfs()
{
    //memset(visited,0,sizeof(visited));
    //memset(level,0,sizeof(level));

    queue<int>Q;
    Q.push(startx);
    Q.push(starty);
    //visited[startx][starty]=1;
    graph[startx][starty]=0;

    while(!Q.empty())
    {
        int u=Q.front();
        Q.pop();
        int v=Q.front();
        Q.pop();
        if(u==endx && v==endy)
            return graph[u][v];
        for(int i=0;i<4;i++)
        {
            int x=u+xx[i];
            int y=v+yy[i];
            if(x>=0 && y>=0 && x<R && y<C && graph[x][y]!=-2 && graph[x][y]==-1)
            {
                //visited[x][y]=1;
                graph[x][y]=graph[u][v]+1;
                Q.push(x);
                Q.push(y);
            }
        }
    }
}

int main()
{
    int i,j,u,v,n,x;
    while(scanf("%d %d",&R,&C)==2)
    {
        if(R==0 && C==0)
            break;
        memset(graph,-1,sizeof(graph));
        scanf("%d",&x);
        for(i=1;i<=x;i++)
        {
            scanf("%d %d",&u,&n);
            for(j=1;j<=n;j++)
            {
                scanf("%d",&v);
                graph[u][v]=-2;
            }
        }
        scanf("%d %d",&startx,&starty);
        scanf("%d %d",&endx,&endy);
        int ans=bfs();
        printf("%d\n",ans);

    }
    return 0;
}
