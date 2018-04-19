#include<stdio.h>

int main()
{
        long long int num,i,j,t,count;
        
        
        scanf("%lld",&t);
        for(i=1;i<=t;i++)
        {
                scanf("%lld",&num);
                count=0;
                while(num>0)
                {
                        if((num%2)==1)
                                count++;
                        
                        num=num/2;
                }
                
                if((count%2)==1)
                        printf("Case %lld: odd\n",i);
                
                else
                        printf("Case %lld: even\n",i);
        }
        
        return 0;
}