#include<iostream>
#include<queue>
#include<vector>
#include<cstdio>
using namespace std;

vector<int>G[100];
void BFS(int n,int src);

int main()
{
    int N,E,i,j,src;

    scanf("%d %d",&N,&E);
    for(i=1;i<=E;i++)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        G[x].push_back(y);
        G[y].push_back(x);
    }
    cout<<"Enter your source:";
    cin>>src;

    BFS(N,src);

    return 0;
}

void BFS(int n,int src)
{
    queue<int>Q;
    Q.push(src);
    int visited[100]={0};
    int level[100];
    int parent[100];

    level[src]=0;
    visited[src]=1;

    while(!Q.empty())
    {
        int u=Q.front();
        Q.pop();
        for(int i=0;i<G[u].size();i++)
        {
            int v=G[u][i];
            if(!visited[v])
            {
                level[v]=level[u]+1;
                visited[v]=1;
                parent[v]=u;
                Q.push(v);
            }
        }
    }

    for(int i=1;i<=n;i++)
        {
            printf("From %d to %d distance is %d\n",src,i,level[i]);
            int z=i;
            cout<<"path :"<<i<<" ";
            while(z!=src)
            {
                printf("%d ",parent[z]);
                z=parent[z];
            }
            printf("\n");
        }
}
