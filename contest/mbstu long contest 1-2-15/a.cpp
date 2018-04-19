#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
i64 __lcm(i64 a,i64 b)
{
    return ((a/__gcd(a,b))*b);
}
int main()
{
    i64 n,a,b,c,lcm,gcd,intr,res;
    while(scanf("%lld",&n)==1)
    {
        if(n>=3)
        {
            if(n%2==1)
                {
                    res=n*(n-1)*(n-2);
                }
            else
            {
                res=-1;
                for(i64 a=n-50;a<=n;a++)
                {
                    if(a<3) continue;
                    for(b=a-1;b<=n;b++)
                    {
                        for(c=a-2;c<=n;c++)
                        {

                    lcm=__lcm(a,__lcm(b,c));
                    if(lcm>res)
                        res=lcm;
                        }
                    }
                }
            }
        }
        else if(n==2)
            res=2;
        else
            res=1;

        printf("%lld\n",res);
    }
    return 0;
}
