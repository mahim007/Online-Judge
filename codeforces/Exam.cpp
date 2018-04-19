#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,res,i,j,mx;
    while(cin>>n)
    {
        if(n==1 || n==2)
        {
            printf("1\n");
            printf("1\n");
            continue;
        }
        if(n==3)
        {
            printf("2\n");
            printf("1 3\n");
            continue;
        }
        if(n==4)
        {
            printf("4\n");
            printf("3 1 4 2\n");
            continue;
        }
        printf("%lld\n",n);
        for(i=1;i<=n;i=i+2)
            printf("%lld ",i);
        for(i=2;i<=n;i=i+2)
        {
            if(i==n)
                printf("%lld",i);
            else
                printf("%lld ",i);
        }
        printf("\n");
    }
    return 0;
}
