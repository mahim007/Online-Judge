#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
int main()
{
    i64 b,n,bank1,bank2,loan,i,j;
    while(scanf("%lld %lld",&b,&n)==2)
    {
        if(b==0 && n==0)
            break;

        i64 data[b+1];
        for(i=1;i<=b;i++)
            scanf("%lld",&data[i]);

        for(j=0;j<n;j++)
        {
            scanf("%lld %lld %lld",&bank1,&bank2,&loan);
            data[bank2]=data[bank2]+loan;
            data[bank1]=data[bank1]-loan;
        }
        bool flag=true;
        for(i64 k=1;k<=b;k++)
        {
            if(data[k]<0)
            {
                flag=false;
                break;
            }
        }
        if(flag==true)
            printf("S\n");
        else
            printf("N\n");
    }
    return 0;
}
