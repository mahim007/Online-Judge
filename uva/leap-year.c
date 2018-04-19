#include<stdio.h>


int main()
{
        long long int year,count;

        while(scanf("%lld",&year)==1)
        {
                count=0;
                if(((year%4)==0 &&(year%100)!=0 ||(year%400)==0)){
                        printf("This is leap year.\n");
                        count=1;
                }
                if((year%15)==0){
                        printf("This is huluculu festival year.\n");
                        count=1;
                }
                if((((year%4)==0 &&(year%100)!=0 ||(year%400)==0))==1 && (year%55)==0){
                        printf("This is bulukulu festival year.\n");
                        count=1;
                }
                if(count==0)
                        printf("This is an ordinary year.\n");
                printf("\n");
        }
        return 0;
}
