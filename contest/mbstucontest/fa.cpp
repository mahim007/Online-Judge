#include<bits/stdc++.h>
using namespace std;
#define i64 long long int

int gcd(i64 a,i64 b)
{
    i64 c;
    while(1)
    {
        c=a%b;
        if(c==0)
            return b;
        if(c==1)
            return 1;
        a=b;
        b=c;
    }
}
int main()
{
    i64 T,t,N,counter;
    scanf("%lld",&T);
    for(t=1;t<=T;t++)
    {
        counter=0;
        scanf("%lld",&N);
        if(N!=1){
        for(i64 k=1;k<N;k++)
        {
            if(gcd(N,k)==1)
            {
                counter++;
            }
        }
    }
    else
    {
        counter++;
    }

        printf("Case %lld: %lld\n",t,counter);
    }
}
