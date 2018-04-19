#include<stdio.h>
#define LIMIT 214748

int main()
{
        long long int a,b,i,j,num,k,count,t,arr[LIMIT/2];
        //long long int arr1[LIMIT]
        num=0;
        for(i=1;i<LIMIT/2;i++)
        {
                num=num*10+i;
                arr[i]=num;
        }
        scanf("%lld",&t);
        for(i=1;i<=t;i++)
        {       
                count=0;
                scanf("%lld %lld",&a,&b);
                for(j=a;j<=b;j++)
                {
                        if((arr[j]%3)==0)
                                count++;
                }
                printf("Case %lld: %lld\n",i,count);
                
       }
       
       return 0;
}