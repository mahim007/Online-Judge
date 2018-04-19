#include<bits/stdc++.h>
using namespace std;
#define i64 unsigned long long int
i64 N,M;
void simulation(i64 N,i64 R)
{
    i64 i,j,k,ans;
    ans=1;
    for(i=N,j=1;j<=R;j++,i--)
    {
        ans=(ans*i)/j;
    }
    printf("%llu things taken %llu at a time is %llu exactly.\n",N,M,ans);
}
int main()
{
    while(scanf("%llu %llu",&N,&M)==2)
    {
        if(N==0 && M==0)
            break;
        i64 R=min(M,N-M);
        simulation(N,R);
    }
    return 0;
}
