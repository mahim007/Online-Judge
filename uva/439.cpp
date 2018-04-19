#include<bits/stdc++.h>
using namespace std;

int cost[9][9];
int vis[9][9];
int xx[]={1,1,-1,-1,2,2,-2,-2};
int yy[]={2,-2,2,-2,1,-1,1,-1};
int startx,starty,endx,endy,ans;

int issafe(int u,int v)
{
    if(u<1 || u>8 || v<1 || v>8)
        return 0;
    return 1;
}

int bfs(int sx,int sy)
{
    queue<int>Q;
    cost[sx][sy]=0;
    vis[sx][sy]=1;
    Q.push(sx);
    Q.push(sy);

    while(Q.empty()==0)
    {
        int u=Q.front();
        Q.pop();
        int v=Q.front();
        Q.pop();

        if(u==endx && v==endy)
            return cost[u][v];

        for(int i=0;i<8;i++)
        {
            int x=u+xx[i];
            int y=v+yy[i];
            if(issafe(x,y)==1 && vis[x][y]==0)
            {
                vis[x][y]=1;
                cost[x][y]=cost[u][v]+1;
                Q.push(x);
                Q.push(y);
            }
        }
    }

}

int main()
{
    int u,v,cnt;
    char ch1,ch2;
    while(cin>>ch1>>u>>ch2>>v)
    {
        startx=ch1-'a'+1;
        starty=u;
        endx=ch2-'a'+1;
        endy=v;
        ans=bfs(startx,starty);
        printf("To get from %c%d to %c%d takes %d knight moves.\n",ch1,u,ch2,v,ans);

        memset(vis,0,sizeof(vis));
        memset(cost,0,sizeof(cost));
    }
}
