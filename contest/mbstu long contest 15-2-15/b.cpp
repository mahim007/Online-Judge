#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
int main()
{
    i64 n,d,r,ans,over,i,j,m,e,day,night;
    while(scanf("%lld %lld %lld",&n,&d,&r)==3)
    {
        over=0;
        day=night=0;
        if(n==0 && d==0 && r==0)
            break;

        i64 droute[n];
        i64 nroute[n];
        for(i=0;i<n;i++)
        {
            scanf("%lld",&droute[i]);
        }
        sort(droute,droute+n);

            for(j=0;j<n;j++)
            {
                scanf("%lld",&nroute[j]);
            }
        sort(nroute,nroute+n);
        for(i=0;i<n;i++)
        {
            if(droute[i]+nroute[n-1-i]>d)
                over=over+(droute[i]+nroute[n-1-i]-d);
        }
        ans=over*r;
        printf("%lld\n",ans);
    }
    return 0;
}
