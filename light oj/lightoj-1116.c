#include<stdio.h>

int main()
{
        unsigned long long int i,t,w,w1,j,x;
        
        scanf("%llu",&t);
        for(i=1;i<=t;i++)
        {
                scanf("%llu",&w);
                w1=w/2;
                for(j=2;j<=w1;j=j+j)
                {
                        if((w%j)==0)
                        {
                                x=w/j;
                                if(x&1)
                                {
                                        printf("Case %llu: %llu %llu\n",i,x,j);
                                        break;
                                }
                        }
                        
                }
                if(j>w1)
                                printf("Case %llu: Impossible\n",i);
                
        }
        
        return 0;
}