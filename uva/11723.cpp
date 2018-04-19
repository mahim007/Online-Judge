#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
int main()
{
    i64 road,nmbr,res,t;
    t=1;
    while(scanf("%lld %lld",&road,&nmbr)==2)
    {
        if(road==0 && nmbr==0)
            break;
        if(nmbr+nmbr*26>=road)
        {
            road=road-nmbr;
            res=0;
            while(road>0)
            {
                res++;
                road=road-nmbr;
            }
            printf("Case %lld: %lld\n",t++,res);
        }
        else
        {
            printf("Case %lld: impossible\n",t++);
        }
    }
    return 0;
}
