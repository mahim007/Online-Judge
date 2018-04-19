#include<bits/stdc++.h>
using namespace std;
#define i64 long long int

vector<i64>graph[100000];
i64 color[100000];
i64 cost[100000];

int main()
{
    i64 N,E,C;
    for(i64 z=0;z<100001;z++)
        graph[z].clear();
    memset(cost,-1,sizeof(cost));
    memset(color,-1,sizeof(color));

    scanf("%lld %lld %lld",&N,&E,&C);
    for (i64 i=1;i<+E;i++)
    {
        i64 x,y,cst,clr;
        scanf("%lld %lld %lld %lld",&x,&y,&cst,&clr);
        graph[x].push_back(y);
        cst[y]=cst;
        clr[y]=clr;
    }
}
