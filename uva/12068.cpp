#include<bits/stdc++.h>
using namespace std;

#define i64 long long int

int main()
{
    i64 T,t,hor,lob,i,gcd,data[10],n;

    scanf("%lld",&T);
    for(t=1;t<=T;t++)
    {
        scanf("%lld",&n);
        hor=1;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&data[i]);
            gcd=__gcd(hor,data[i]);
            hor=(hor*data[i])/gcd;
        }

        lob=0;
        for(i=0;i<n;i++)
        {
            lob=lob+(hor/data[i]);
        }

        hor=hor*n;
        gcd=__gcd(hor,lob);
        hor=hor/gcd;
        lob=lob/gcd;

        printf("Case %lld: %lld/%lld\n",t,hor,lob);
    }
    return 0;
}
