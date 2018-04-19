#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
int main()
{
    i64 n,i,ret,save;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
            break;
        if(n==1)
        {
            printf("0\n");
            continue;
        }

        ret=n;
        for(i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                while(n%i==0)
                {
                    n=n/i;
                }
                ret=ret-(ret/i);
            }
        }
        if(n>1)
            ret=ret-ret/n;
        printf("%lld\n",ret);
    }
    return 0;
}

