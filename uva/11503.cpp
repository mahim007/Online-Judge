#include<bits/stdc++.h>
using namespace std;

#define i64 long long int
i64 parent[100009];

i64 findparent(i64 n)
{
    if(parent[n]<0)
        return n;
    return parent[n]=findparent(parent[n]);
}

int main()
{
    i64 tst,m,t,u,v;

    scanf("%lld",&tst);
    for(t=1;t<=tst;t++)
    {
        scanf("%lld",&m);
        map<string,i64>frnd;
        memset(parent,-1,sizeof(parent));
        i64 indx=1;

        for(i64 k=0;k<m;k++)
        {
            string name1,name2;
            cin>>name1>>name2;

            if(!frnd[name1])
                frnd[name1]=indx++;
            if(!frnd[name2])
                frnd[name2]=indx++;

            u=findparent(frnd[name1]);
            v=findparent(frnd[name2]);

            if(u==v)
            {
                printf("%lld\n",parent[u]*(-1));
                continue;
            }

            if(parent[u]<parent[v])
            {
                parent[u]=parent[u]+parent[v];
                parent[v]=u;
                printf("%lld\n",parent[u]*(-1));
            }

            else
            {
                parent[v]=parent[v]+parent[u];
                parent[u]=v;
                printf("%lld\n",parent[v]*(-1));
            }
        }
    }
    return 0;
}
