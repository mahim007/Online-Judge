#include<stdio.h>

int main()
{
        long long int a,b,c;
        int i,t;
        scanf("%d",&t);
        for(i=1;i<=t;i++)
        {
                scanf("%lld %lld %lld",&a,&b,&c);
                
                if(((a+b)>c) || ((b+c)>a) ||((a+c)>b))
                {
                        if(((a*a+b*b)==c*c) || ((b*b+c*c)==a*a) ||((a*a+c*c)==b*b))
                                printf("Case %d: yes\n",i);
                        else
                                printf("Case %d: no\n",i);
                }
                else
                        printf("Case %d: no\n",i);
            
        }
        return 0;
}