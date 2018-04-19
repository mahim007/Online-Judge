#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
i64 rat[1025][1025];
int main()
{
    i64 T,t,d,n,x,y,p,maax,i,j,k;
    scanf("%lld",&T);
    for(t=1;t<=T;t++)
    {
        memset(rat,0,sizeof(rat));
        scanf("%lld",&d);
        scanf("%lld",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%lld %lld %lld",&x,&y,&p);

            for(j=x-d;j<=x+d;j++)
            {
                if(j<0 || j>1024)
                    continue;

                for(k=y-d;k<=y+d;k++)
                {
                    if(k<0 || k>1024)
                        continue;

                    rat[j][k]=rat[j][k]+p;
                }

            }
        }
        maax=0;
        for(i=0;i<1025;i++)
        {
            for(j=0;j<1025;j++)
            {
                if(rat[i][j]>maax)
                {
                    maax=rat[i][j];
                    x=i;
                    y=j;
                }
            }
        }
        printf("%lld %lld %lld\n",x,y,maax);
    }
    return 0;
}
