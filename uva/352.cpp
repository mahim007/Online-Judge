#include<bits/stdc++.h>
using namespace std;

char graph[25][25];
bool vis[25][25];
int xx[]={-1,-1,-1,0,0,1,1,1};
int yy[]={-1,0,1,-1,1,-1,0,1};
int N;

int issafe(int i,int j)
{
    if(i<0 || j<0 || i>=N || j>=N)
       {
            return 0;
       }
    return 1;
}

void dfs(int i,int j)
{
    vis[i][j]=true;
    int k;
    for(k=0;k<8;k++)
    {
        int x=i+xx[k];
        int y=j+yy[k];

        if(graph[x][y]=='1' && vis[x][y]==0 && issafe(x,y)==1)
        {
            //vis[x][y]=1;
            dfs(x,y);
        }
    }
}

int main()
{
    int i,j,k,cnt,t=1;

    while(scanf("%d",&N)==1)
    {
        getchar();
        for(i=0;i<N;i++)
        scanf("%s",graph[i]);

    memset(vis,false,sizeof(vis));
    cnt=0;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if(graph[i][j]=='1' && vis[i][j]==0)
            {
                cnt++;
                dfs(i,j);
            }
        }
    }
    printf("Image number %d contains %d war eagles.\n",t++,cnt);

    //memset(graph,'0',sizeof(graph));
    memset(vis,false,sizeof(vis));
    }
    return 0;
}
