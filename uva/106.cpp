#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
int main()
{
    i64 i,j,n,ans,part;

    while(scanf("%lld",&n)==1)
    {
        bool have[n+1];
        memset(have,0,sizeof(have));
        ans=part=0;
        for(i=1;i*i<n;i++)
        {
            for(j=i+1;i*i+j*j<=n;j=j+2)
            {
                if(__gcd(i,j)!=1) continue;

                int a=2*i*j,b=j*j-i*i,c=j*j+i*i;
                ans++;
                int A=a,B=b,C=c;
                while(C<=n)
                {
                    if(have[A]==0) part++;
                    if(have[B]==0) part++;
                    if(have[C]==0) part++;
                    have[A]=1;
                    have[B]=1;
                    have[C]=1;
                    A=A+a;
                    B=B+b;
                    C=C+c;
                }
            }
        }
        printf("%lld %lld\n",ans,n-part);
    }
    return 0;
}
