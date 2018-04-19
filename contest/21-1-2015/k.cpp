#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
int main()
{
    i64 gold;
    i64 N,T;
    //vector<long double>V;
    scanf("%lld",&T);
    for(i64 t=1;t<=T;t++)
    {
        gold=0;
        scanf("%lld",&N);
        for(i64 i=0;i<N;i++)
        {
            i64 x;
            scanf("%lld",&x);
            gold=gold+x;
        }
        printf("Case %lld: %lld\n",t,gold);
    }
    return 0;
}
