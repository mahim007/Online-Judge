#include<stdio.h>

int main()
{
        long long int a,b,i,j,temp,total,max,num;
        
        while(scanf("%lld %lld",&a,&b))
        {
                if(a==0 && b==0)
                        break;
                
                max=0;
                total=0;
                
                if(a>b)
                {
                        temp=b;
                        b=a;
                        a=temp;
                }
                
                
                for(i=a;i<=b;i++)
                { 
                      
                        total=0;
                          j=i;
                while(1)
                {
                                if(j==1)
                        {
                                        total++;
                                        break;
                        }
                        total++;        
                        if(j%2==0)
                                j=j/2;
                        else
                                j=3*j+1;
                        
                }
                        if(max<total)
                                {
                                        max=total;
                                        num=i;
                                }

          }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",a,b,num,max-1);
        }
        
        return 0;
}