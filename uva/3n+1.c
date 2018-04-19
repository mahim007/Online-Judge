#include<stdio.h>

int main()
{
        long long int a,b,i,j,temp,total,max;

        while(scanf("%lld %lld",&a,&b)==2)
        {
                max=0;
                total=0;
                if(a>b)
                {
                        temp=b;
                        b=a;
                        a=temp;
                }

                for(i=a;i<=b;i++)
                {

                        total=0;
                          j=i;
                while(1)
                {
                                if(j==1)
                        {
                                        total++;
                                        break;
                        }
                        total++;
                        if(j%2==0)
                                j=j/2;
                        else
                                j=3*j+1;

                }
                        if(max<total)
                                max=total;

          }
        printf("%lld\n",max);
        }

        return 0;
}
