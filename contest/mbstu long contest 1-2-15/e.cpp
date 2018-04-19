#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
int main()
{
    i64 T,t,n,i,res,save,ans;
    scanf("%lld",&T);
    for(t=1;t<=T;t++)
    {
        scanf("%lld",&n);
        if(n<=1)
        {
            printf("0\n");
            continue;
        }
        ans=1;
        save=n;
        for(i=2;i*i<=n;i++)
        {
            i64 mul=i;
            if(n%i==0)
            {
                while(n%i==0)
                {
                    n=n/i;
                    mul=mul*i;
                }
                ans=ans*((mul-1)/(i-1));
            }
        }
        if(n>1)
            ans=ans*(n+1);
        printf("%lld\n",ans-save);
    }
    return 0;
}
