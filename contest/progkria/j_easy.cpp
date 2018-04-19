#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
#define maxx 500009
vector<i64>V[maxx];
int main()
{
    i64 T,t,n,i,j,x,q,z;
    string op;

    scanf("%lld",&T);
    for(t=1;t<=T;t++)
    {
        for(i64 s=0;s<maxx;s++)
        V[s].clear();

        scanf("%lld %lld",&n,&q);
        printf("Case %lld:\n",t);
        for(z=1;z<=q;z++)
        {

        cin>>op;

        if(op=="push")
        {
            scanf("%lld %lld",&i,&x);
            V[i].push_back(x);
        }

        else if(op=="pop")
        {
            scanf("%lld",&i);
            vector<i64>:: iterator it;
            if(!V[i].empty())
                {
                it=V[i].end();
            it--;
            V[i].erase(it);
                }
        }

        else if(op=="put")
        {
            scanf("%lld %lld",&i,&j);
            for(i64 k=0;k<V[j].size();k++)
            {
                V[i].push_back(V[j][k]);
            }
            V[j].clear();
        }

        else if(op=="top")
        {
            i64 top;
            scanf("%lld",&top);
            i64 val;
            val=V[top].size();
            val--;
            if(val>=0)
                printf("%lld\n",V[top][val]);
            else
                printf("Empty!\n");
        }

        }
    }
    return 0;
}
