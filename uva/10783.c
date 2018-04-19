#include <stdio.h>
int main()
{
    long long int i,r,a,b,c,j;

    scanf("%lld",&a);
    for(i=0;i<a;i++)
    {
        r=0;
        scanf("%lld \n %lld",&b,&c);

    for(j=b;j<=c;j++){
        if(j%2==1){
            r=r+j;}
        }
     printf("Case %lld: %lld\n",i+1,r);

     }


    return 0;
}
