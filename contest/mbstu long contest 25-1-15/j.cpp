#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
#define maxx 65536
#define maxx2 6550


int main()
{
    i64 n,root;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
            break;
        root=sqrt(n);

        if((root*root)==n)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}
