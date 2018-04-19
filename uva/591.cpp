#include<bits/stdc++.h>
using namespace std;

int data[70];

int main()
{
    int n,i,j,ans,sum,avg,t=1;
    while(scanf("%d",&n)==1)
    {
        ans=0;
        sum=0;
        if(n==0)
            break;

        for(i=1;i<=n;i++)
        {
            scanf("%d",&data[i]);
            sum=sum+data[i];
        }

        printf("Set #%d\n",t++);
        avg=sum/n;
        for(i=1;i<=n;i++)
        {
            if(data[i]>avg)
            {
                ans=ans+data[i]-avg;
            }
        }
        printf("The minimum number of moves is %d.\n\n",ans);
    }
    return 0;
}
