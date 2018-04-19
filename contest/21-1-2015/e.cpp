#include<bits/stdc++.h>
using namespace std;
#define i64 long long int

struct data
{
    i64 strt,endd;
}nd[100005];
vector<i64>V;
i64 m,N;

void srch(i64 t)
{
    while(t>=m)
    {
        t-=m;
    }
    for(i64 i=1;i<=N;i++)
    {
        if(t>=nd[i].strt && t<nd[i].endd)
        {
            printf("%lld\n",i);
            break;
        }
    }
}

int main()
{
    i64 q;
    while(scanf("%lld %lld",&N,&q)==2)
    {
        for(i64 i=1;i<=N;i++)
    {
        i64 x;
        scanf("%lld",&x);
        V.push_back(x);
    }
    nd[1].strt=0;
    nd[1].endd=V[0];
    m=m+V[0];
    for(i64 i=2;i<=N;i++)
    {
        m+=V[i-1];
        nd[i].strt=nd[i-1].endd;
        nd[i].endd=m;
    }

    for(i64 z=1;z<=q;z++)
    {
        i64 t;
        scanf("%lld",&t);
        srch(t);
    }
    }


    return 0;
}
