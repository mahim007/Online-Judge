#include<bits/stdc++.h>
using namespace std;
#define i64 long long int

int main()
{
    i64 sum,H,L,h_ans,l_ans;
    while(scanf("%lld %lld",&H,&L)==2)
    {
        sum=H+L-1;
        h_ans=sum-H;
        l_ans=sum-L;
        printf("%lld %lld\n",h_ans,l_ans);
    }
    return 0;
}
