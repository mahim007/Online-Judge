#include<stdio.h>

int main()
{
        long long int i,j,n,city[100000];
        
        while(scanf("%lld",&n)==1)
        {
                for(i=1;i<=n;i++)
                        scanf("%lld",&city[i]);
                long  long int count=1;
                long long int k;
                long long int distance=100000000000;
                for(j=1;j<=n;j++)
                {
                        if(distance>city[j])
                        {
                                distance=city[j];
                                k=j;
                               
                        }
                        else
                        {
                                if(distance==city[j])
                                        {
                                                count++;
                                        }
                        }
                                
                }
              
                if(count>1)
                        printf("Still Rozdil\n");
                else
                        printf("%lld\n",k);
       
        }  

        return 0;
}