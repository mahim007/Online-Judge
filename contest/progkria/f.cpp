#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
int main()
{
    i64 T,t,i,n,prison[1001];
    double res,val;
    scanf("%lld",&T);
    for(t=1;t<=T;t++)
    {
        res=0;
        scanf("%lld",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%lf",&val);
            res=res+(double)((double)(1/(double)n)*val);
        }

        printf("%-18.015lf\n",res);
    }
    return 0;
}
