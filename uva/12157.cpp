#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
int main()
{
    i64 T,t,mile,juice,n,i,val;

    scanf("%lld",&T);
    for(t=1;t<=T;t++)
    {
        mile=juice=0;
        scanf("%lld",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&val);
            i64 k=0;
            while(k<=val)
            {
                mile++;
                k=k+29;
                k++;
            }
            k=0;
            while(k<=val)
            {
                juice++;
                k=k+59;
                k++;
            }
        }
        mile=mile*10;
        juice=juice*15;

        if(mile<juice)
            printf("Case %lld: Mile %lld\n",t,mile);
        else if(juice<mile)
            printf("Case %lld: Juice %lld\n",t,juice);
        else
            printf("Case %lld: Mile Juice %lld\n",t,mile);
    }
}
