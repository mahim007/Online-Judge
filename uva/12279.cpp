#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ans,zero,nonzero,n,i,nmbr,t=1;
    while(scanf("%d",&n)==1)
    {
        zero=0;
        nonzero=0;
        if(n==0)
            break;

        for(i=1;i<=n;i++)
        {
            scanf("%d",&nmbr);
            if(nmbr==0)
                zero++;
            else
                nonzero++;
        }
        ans=nonzero-zero;
        printf("Case %d: %d\n",t++,ans);
    }
    return 0;
}
