#include<stdio.h>

int main()
{
        int i,j,m,n,t,result;
        
        
        scanf("%d",&t);
        for(i=1;i<=t;i++)
        {
                scanf("%d %d",&m,&n);
                result=m*n;
                if((result%2)==1)
                {
                        result=result+1;
                        result=result/2;
                        printf("Case %d: %d\n",i,result);
                }
                else
                        printf("Case %d: %d\n",i,result/2);
        }
        
        return 0;
}