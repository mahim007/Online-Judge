#include<bits/stdc++.h>
using namespace std;
#define i64 long long int

int main()
{
    i64 stp,mod,gcd;
    while(scanf("%lld %lld",&stp,&mod)==2)
    {
        i64 a=stp;
        i64 b=mod;
        if(stp==mod)
        {
            if(stp==1)
            {
                printf("%10lld%10lld    Good Choice\n\n",a,b);
            }
            else
                printf("%10lld%10lld    Bad Choice\n\n",a,b);
            continue;
        }

        gcd=__gcd(stp,mod); //cout<<stp<<" "<<mod<<endl;
        if(gcd==1)
            printf("%10lld%10lld    Good Choice\n\n",a,b);
        else
            printf("%10lld%10lld    Bad Choice\n\n",a,b);
    }
    return 0;
}
