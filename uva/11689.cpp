#include<bits/stdc++.h>
using namespace std;

#define i64 long long int

int main()
{
    i64 i,counter,bottle,t,e,f,c,limit;

    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld %lld %lld",&e,&f,&c);
        bottle=e+f;
        counter=0;
        limit=c-1;

        while(bottle>=c)
        {
            bottle=bottle-limit;
            counter++;
        }
        printf("%lld\n",counter);

    }
    return 0;
}
