#include<stdio.h>
int binary(long long int num);

int main()
{
        int i,t,count1,count2;
        long long int num1,num2;
        
        scanf("%d",&t);
        for(i=1;i<=t;i++)
        {
                count1=0,count2=0;
                scanf("%lld",&num1);
                count1=binary(num1);
                num2=num1;
                num2++;
                
                while(count1!=count2)
                {
                        count2=binary(num2);
                        if(count1==count2)
                                break;
                        num2++;
                }
                printf("Case %d: %lld\n",i,num2);
        }
        return 0;
}

int binary(long long int num)
{
        int count=0;
        while(num>0)
        {
                if(num & 1)
                        count++;
                        
                num=num>>1;
        }
        return count;
}