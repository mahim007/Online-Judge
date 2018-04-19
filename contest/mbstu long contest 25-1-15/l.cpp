#include<bits/stdc++.h>
using namespace std;
#define i64 long long int

int main()
{
    i64 i,n,m,cntr,T,t;
    scanf("%lld",&T);
    for(t=1;t<=T;t++)
    {
        scanf("%lld %lld",&m,&n);
        cntr=0;
        for(i=m;i<=n;i++)
        {
            i64 p=i;
            while(p%m==0)
            {
                cntr++;
                p=p/m;

            }
        }
        printf("Case %lld:\n",t);
        printf("%lld\n",cntr);
    }
    return 0;
}
