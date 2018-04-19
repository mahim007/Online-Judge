#include<stdio.h>
#include<math.h>
int main()
{
        long long int a,b,n,m,num,count;
        
        while(scanf("%lld %lld",&n,&m)==2)
        {
                num=sqrt(n);
                a=0;
                count=0;
                while(a<=num)
                {
                        b=n-a*a;
                        
                        if(m==a+b*b)
                                count++;
                        
                        a++;
                }
                        
                printf("%lld\n",count);
                        
        }
        
        return 0;
}