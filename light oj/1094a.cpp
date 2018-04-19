#include<bits/stdc++.h>
using namespace std;

#define i64 long long int
#define maax 30009
vector<i64>G[maax];
map<pair<i64,i64>,i64>M;
i64 dis[maax],n,node;

i64 bfs(i64 s)
{
    memset(dis,-1,sizeof(dis));
    i64 total=-1,temp=0;
    i64 high=0;
    queue<i64>Q;
    Q.push(s);
    dis[s]=0;
    while(!Q.empty())
    {
        i64 u=Q.front();
        Q.pop();
        for(i64 i=0;i<G[u].size();i++)
        {
            i64 v=G[u][i];
            if(dis[v]<0)
            {
                dis[v]=dis[u]+M[make_pair(u,v)];
                if(dis[v]>temp)
                {
                    temp=dis[v];
                    node=v;
                }
                Q.push(v);
            }
        }
    }
    total=temp; //cout<<"total:"<<total<<endl;
    return total;
}

int main()
{
    i64 T,t,ans;
    scanf("%lld",&T);
    for(t=1;t<=T;t++)
    {
        ans=-1;
        scanf("%lld",&n);
        for(i64 i=1;i<n;i++)
        {
            i64 u,v,w;
            scanf("%lld %lld %lld",&u,&v,&w);
            G[u].push_back(v);
            G[v].push_back(u);
            M[make_pair(u,v)]=w;
            M[make_pair(v,u)]=w;
        }
        i64 c=bfs(0);
        i64 s=node;
        i64 ans=bfs(s);
        printf("Case %lld: %lld\n",t,ans);
        for(i64 i=0;i<maax;i++)
        {
            G[i].clear();
        }
        M.clear();
    }
    return 0;
}


