#include<stdio.h>

int main()
{
        long long int i,j,t,x1,x2,y1,y2,num,x,y;
        
        scanf("%lld",&t);
        for(i=1;i<=t;i++)
        {
                scanf("%lld %lld %lld %lld",&x1,&y1,&x2,&y2);
                scanf("%lld",&num);
                printf("Case %lld:\n",i);
                for(j=1;j<=num;j++)
                {
                        scanf("%lld %lld",&x,&y);
                        
                        if((x1<=x)&&(x<=x2)&&(y1<=y)&&(y<=y2))
                                printf("Yes\n");
                        else
                                printf("No\n");
                }
        }
        
        return 0;
}