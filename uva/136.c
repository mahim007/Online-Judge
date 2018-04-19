#include<stdio.h>
long long int ugly[20000];
int main()
{
        long long int i,num,j,count=1;
        
        ugly[1]=1;
        for(i=2;count<11;i++)
        {
                num=i;
                if(num%2==0)
                {
                        count++;
                        ugly[count]=num;
                        continue;
                }
                if(num%3==0)
                {
                        count++;
                        ugly[count]=num;
                        continue;
                }
                if(num%5==0)
                {
                        count++;
                        ugly[count]=num;
                        continue;
                }
        }
        printf("%lld\n",ugly[count]);
        
        return 0;
}











