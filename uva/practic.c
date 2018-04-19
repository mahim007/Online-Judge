#include<stdio.h>


int main()
{
    long long int n,i,div=0,sum1=0,sum=0,sum2=0,k=0;
    scanf("%lld",&n);


        while(n>=10){{
        div=n%10;
        sum1=sum1+div;
        n=n/10;
        }
        sum=sum1+n;}


        if(sum>9){
            k=sum,div=0,sum1=0;
        while(k>9){{
        div=k%10;
        sum1=sum1+div;
        k=k/10;
        }
        sum2=sum1+k;}
        printf("%lld",sum2);}


        else
           printf("%lld",sum);

return 0;
}

