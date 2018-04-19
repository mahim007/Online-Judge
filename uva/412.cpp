#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,k,counter,total,data[50];
    double res;

    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;

        for(i=0;i<n;i++)
            scanf("%d",&data[i]);

        total=counter=0;

        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                total++;
                if((__gcd(data[i],data[j]))==1)
                    counter++;
            }
        }

        if(counter==0)
            printf("No estimate for this data set.\n");
        else
        {
            res=sqrt((6.0*(double)total)/(double)counter);
            printf("%.6lf\n",res);
        }
    }
    return 0;
}
