#include<bits/stdc++.h>
using namespace std;

#define i64 long long int
#define maax 3000

i64 par[maax];

i64 findparent(i64 u)
{
    if(par[u]==u)
        return u;
    return par[u]=findparent(par[u]);
}

void Union(i64 u,i64 v)
{
    u=findparent(u);
    v=findparent(v);

    if(u!=v)
    {
        par[v]=u;
    }
}

int main()
{ //freopen("793 output","w",stdout);
    i64 n,yes,no,i,j,t,T;
    char ch;

    scanf("%lld",&T);
    getchar();
    for(t=1;t<=T;t++)
    {
        scanf("%lld",&n);
        getchar();
        yes=no=0;
        for(i=1;i<=maax;i++)
            par[i]=i;

        ch=getchar();
        while(ch!='\n' && ch!=EOF){

        if(ch=='c')
        {
            i64 u,v;
            scanf("%lld %lld",&u,&v);
            getchar();
            Union(u,v);
        }
        else
        {
            i64 u,v;
            scanf("%lld %lld",&u,&v);
            getchar();
            u=findparent(u);
            v=findparent(v);
            if(u==v)
                yes++;
            else
                no++;
        }
        ch=getchar();
        }
        printf("%lld,%lld\n",yes,no);
        if(t!=T)
            printf("\n");
    }
    return 0;
}
