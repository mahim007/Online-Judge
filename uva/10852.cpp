#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
#define maxx 10009
bool tag[maxx];
vector<i64>V;

int main()
{
    tag[0]=tag[1]=1;
    for(i64 i=4;i<maxx;i=i+2)
        tag[i]=1;
    for(i64 i=3;i*i<maxx;i=i+2)
    {
        if(tag[i]==0)
        {
            for(i64 j=i*i;j<maxx;j=j+i+i)
                tag[j]=1;
        }
    }
    for(i64 i=2;i<maxx;i++)
    {
        if(tag[i]==0)
            V.push_back(i);
    }

    i64 i,j,n,p,dis,t,T,ans;
    scanf("%lld",&T);
    for(t=1;t<=T;t++)
    {
        scanf("%lld",&n);
        dis=-1;
        for(i=0;V[i]<n;i++)
        {
            p=n/V[i];
            if(dis<(n-(p*V[i])))
            {
                dis=(n-(p*V[i]));
                ans=V[i];
            }
        }
        printf("%lld\n",ans);
    }
    return 0;
}
