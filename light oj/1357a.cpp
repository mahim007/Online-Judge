#include<bits/stdc++.h>
using namespace std;

#define i64 long long int
#define maax 100009
vector<i64>V[maax];
i64 res,cnt;

void dfs(i64 u)
{
    cnt--; //cout<<"cnt:"<<cnt<<endl;
    //cout<<"now at u:"<<u<<endl;
    for(i64 i=0;i<V[u].size();i++)
    {
        i64 v=V[u][i]; //cout<<"u:"<<u<<" v:"<<v<<endl;
        dfs(v);
    }
    //cout<<"res:"<<res<<" cnt:"<<cnt<<endl;
    res=res+cnt; //cout<<"res:"<<res<<endl;
}

int main()
{
    i64 T,t,n,i,j;
    scanf("%lld",&T);
    for(t=1;t<=T;t++)
    {
        scanf("%lld",&n);
        for(i=1;i<n;i++)
        {
            i64 u,v;
            scanf("%lld %lld",&u,&v);
            V[u].push_back(v);
        }
        res=0;
        cnt=n;
        dfs(1);
        printf("Case %lld: %lld %lld\n",t,n-1,res);
        for(i=0;i<=n;i++)
            V[i].clear();
    }
    return 0;
}
