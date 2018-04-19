#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
int main()
{
    i64 T,t,n,i,temp;

    scanf("%lld",&T);
    for(t=1;t<=T;t++)
    {
        scanf("%lld",&n);
        i64 digit[12]={0};
        while(n)
        {
            temp=n;

        while(temp)
        {
            i64 mod=temp%10;
            digit[mod]++;
            temp=temp/10;
        }
        n--;
        }
        for(i=0;i<9;i++)
            printf("%lld ",digit[i]);
        printf("%lld\n",digit[i]);
    }
    return 0;
}
