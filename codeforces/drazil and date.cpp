#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
int main()
{
    i64 x,y,stp;
    while(scanf("%lld %lld %lld",&x,&y,&stp)==3)
    {
        i64 distance;
        distance=abs(x)+abs(y);

        if(distance>stp)
            printf("No\n");
        else
        {
            if((stp-distance)%2==0)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}
