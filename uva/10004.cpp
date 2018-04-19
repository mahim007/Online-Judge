#include<bits/stdc++.h>
using namespace std;
vector<int>G[200];
int n,e;

int bicolor()
{
    queue<int>Q;
    int color[n];
    memset(color,0,sizeof(color));
    color[0]=1;
    Q.push(0);
    while(!Q.empty())
    {
        int u=Q.front(); //cout<<"u="<<u<<endl;cout<<"color="<<color[u]<<endl;
        Q.pop();
        for(int i=0;i<G[u].size();i++)
        {
            int v=G[u][i]; //cout<<"v="<<v<<endl; cout<<"color="<<color[v]<<endl;
            if(color[v]==0)
            {
                if(color[u]==1)
                    color[v]=2;
                else
                    color[v]=1;
                //cout<<"color="<<color[v]<<endl;
                Q.push(v);
            }
            else
            {
                if(color[v]==color[u])
                    return 0;
            }
        }
    }
    return 1;
}

int main()
{
    int i,j,k,res;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        scanf("%d",&e);
        for(i=1;i<=e;i++)
        {
            int x,y;
            scanf("%d %d",&x,&y);
            G[x].push_back(y);
            G[y].push_back(x);
        }
        res=bicolor();
        if(res==1)
            printf("BICOLORABLE.\n");
        else
            printf("NOT BICOLORABLE.\n");
        for(i=0;i<n;i++)
            G[i].clear();
    }
    return 0;
}
