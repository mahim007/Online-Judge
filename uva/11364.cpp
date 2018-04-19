#include<bits/stdc++.h>
using namespace std;
#define i64 long long int

int main()
{
    i64 T,t,n,i;
    scanf("%lld",&T);
    for(t=1;t<=T;t++)
    {
        scanf("%lld",&n);
        i64 data;
        i64 maxx=0,minn=100;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&data);
            if(data>maxx)
                maxx=data;
            if(data<minn)
                minn=data;
        }
        printf("%lld\n",2*(maxx-minn));
    }
    return 0;
}
