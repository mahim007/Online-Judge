#include<bits/stdc++.h>
using namespace std;
#define i64 unsigned int
int main()
{
    i64 m,n,ans;

    while(scanf("%u %u",&m,&n)==2)
    {
        ans=m^n;
        printf("%u\n",ans);
    }
    return 0;
}
