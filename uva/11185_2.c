#include <stdio.h>
int main()
{
    long long int i,num,n;
    int a[1000];
    while(scanf("%lld",&num)==1)
    {
        if(num<0)
            break;
        else
        {
            if(num==0)
                printf("0\n");
            else
            {
                n=0;
                while(num>0)
                {
                    a[n]=num%3;
                    num=num/3;
                    n++;
                }

                for(i=n-1; i>=0; i--)
                {
                    printf("%d",a[i]);
                }
                printf("\n");
            }
        }
    }

    return 0;
}
