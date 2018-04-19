#include<bits/stdc++.h>
using namespace std;
vector<int>graph[101];
int n;
void bfs(int strt)
{
    int connected[101]={0};

    queue<int>Q;
    Q.push(strt);
    while(!Q.empty())
    {
        int u=Q.front();
        Q.pop();
        for(int i=0;i<graph[u].size();i++)
        {
            int v=graph[u][i];
            if(connected[v]!=1)
            {
                connected[v]=1;
                Q.push(v);
            }
        }
    }

    vector<int>V;
    for(int i=1;i<=n;i++)
    {
        if(connected[i]==0)
        {
            V.push_back(i);
        }
    }
    int S=V.size();
    if(S>=1)
    {
        printf("%d ",S);
    for(int j=0;j<S;j++)
    {
        if(j==S-1)
            printf("%d\n",V[j]);
        else
            printf("%d ",V[j]);
    }
    }
    if(S==0)
        printf("%d\n",S);
}

int main()
{
    int i,k,vertex,u,tst,strt;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;

        for(int z=0;z<=n;z++)
            graph[z].clear();

        k=1;
        while(1)
        {
            scanf("%d",&vertex);
            if(k==1 && vertex!=0)
            {
                u=vertex;
                k++;
            }
            else if(k!=1 && vertex!=0)
            {
                graph[u].push_back(vertex);
                k++;
            }
            else if(k!=1 && vertex==0)
            {
                k=1;
                continue;
            }
            else if(k==1 && vertex==0)
            {
                break;
            }
        }

        scanf("%d",&tst);
        for(i=1;i<=tst;i++)
        {
            scanf("%d",&strt);

            bfs(strt);

        }
    }
    return 0;
}
