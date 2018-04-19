#include <stdio.h>
int main()
{
    long long int a,b,c,d,i;
    scanf("%lld",&d);
    for(i=1;i<=d;i++){

    scanf("%lld %lld %lld",&a,&b,&c);
    if(b>a && b<c || b<a && b>c)
        printf("Case %lld: %lld\n",i,b);
    else if(c<b && c>a || c>b && c<a)
        printf("Case %lld: %lld\n",i,c);
    else
        printf("Case %lld: %lld\n",i,a);}

    return 0;
}
