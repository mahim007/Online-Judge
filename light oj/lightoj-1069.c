#include<stdio.h>

int main()
{
        long long int i,t,a,b,def,time;
        
        scanf("%lld",&t);
        
        for(i=1;i<=t;i++)
        {
                scanf("%lld %lld",&a,&b);
                if(a>=b)
                        def=a-b;
                else
                        def=b-a;
                time=4*def+3*2+5*2+3+4*a;
                printf("Case %lld: %lld\n",i,time);
        }
        
        return 0;
}