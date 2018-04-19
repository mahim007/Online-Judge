#include<bits/stdc++.h>
using namespace std;

int main()
{
    int wall[52],T,t,n,i,H,L;

    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        scanf("%d",&n);
        for(i=1;i<=n;i++)
            scanf("%d",&wall[i]);

        H=L=0;

        for(i=1;i<=n;i++)
        {
            if(i==n)
                break;

            if(wall[i]<wall[i+1])
                H++;
            if(wall[i]>wall[i+1])
                L++;
        }
        printf("Case %d: %d %d\n",t,H,L);
    }
    return 0;
}
