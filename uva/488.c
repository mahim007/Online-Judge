#include<stdio.h>

int main()
{
        long long int t,i,j,k,amp,fre;
        
        scanf("%lld",&t);
        printf("\n");
        
        for(i=1;i<=t;i++)
        {
                scanf("%lld %lld",&amp,&fre);
                
                while(fre>=1)
                {
                        for(j=1;j<=amp;j++)
                        {
                                for(k=1;k<=j;k++)
                                        printf("%lld",j);
                                printf("\n");
                        }
                        for(j=amp-1;j>=1;j--)
                        {
                                for(k=1;k<=j;k++)
                                {
                                        printf("%lld",j);
                                }
                                printf("\n");
                        }
                        fre--;
                        if(fre!=0)
                                printf("\n");
                        
                }
        }
        return 0;
}