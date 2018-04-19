#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,t;

    scanf("%d",&T);
    printf("Lumberjacks:\n");

    for(t=1;t<=T;t++)
    {
        int data[10];
        for(int i=0;i<10;i++)
            scanf("%d",&data[i]);

        int j,flag=1;
        if(data[0]<data[1])
        {
            for(j=0;j<10-1;j++)
            {
                if(data[j]>=data[j+1])
                {
                    flag=0;
                    break;
                }
            }
        }

        if(data[0]>data[1])
        {
            for(j=0;j<10-1;j++)
            {
                if(data[j]<=data[j+1])
                {
                    flag=0;
                    break;
                }
            }
        }

        if(flag==1)
            printf("Ordered\n");
        if(flag==0)
            printf("Unordered\n");
    }
    return 0;
}
