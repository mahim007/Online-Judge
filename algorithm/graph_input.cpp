#include<cstdio>
#include<vector>
#include<iostream>
using namespace std;

vector<int>g[10];
int in[10];

int main()
{
    int node,edge,i,j;
    scanf("%d %d",&node,&edge);

    for(i=1;i<=edge;i++)
    {
        int x,y;
        cin>>x>>y;

        g[x].push_back(y);
        in[y]++;
    }

    for(j=1;j<=node;j++)
    {
        int siz=g[j].size();
        cout<<"node "<<j<<" has indegree "<<in[j]<<" and out-degree "<<siz<<endl;
        cout<<j<<">> ";
        for(int k=0;k<siz;k++)
        {
            cout<<g[j][k]<<" ";
        }
        cout<<"\n\n";
    }
    return 0;
}
