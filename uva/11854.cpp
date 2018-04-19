#include<bits/stdc++.h>
using namespace std;

#define i64 long long int

int main()
{
    i64 a,b,c;

    while(scanf("%lld %lld %lld",&a,&b,&c)==3)
    {
        if(a==0 && b==0 && c==0)
            break;

        a=a*a;
        b=b*b;
        c=c*c;

        if((a==b+c) || (b==c+a) || (c==a+b))
        {
            printf("right\n");
        }
        else
            printf("wrong\n");
    }
    return 0;
}
