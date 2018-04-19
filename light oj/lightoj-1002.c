#include<stdio.h>
//int a, b, c, d, e, f;
long long int fn(int n)
{
        if( n == 0 ) return 0;
    if( n == 1 ) return 1;
    if( n == 2 ) return 2;
    if( n == 3 ) return 3;
    if( n == 4 ) return 4;
    if( n == 5 ) return 5;
        return( fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6) );
}
int main()
{
        int n;
        scanf("%d",&n);
        
        printf("result is: %lld",fn(n));
        
        return 0;
}

