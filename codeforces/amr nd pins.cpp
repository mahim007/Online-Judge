#include<bits/stdc++.h>
using namespace std;
#define i64 long long int

int main()
{
    double rad,x,y,x1,y1;
    double distnc;

    while(scanf("%lf %lf %lf %lf %lf",&rad,&x,&y,&x1,&y1)==5)
    {
        distnc=sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));
        i64 res=ceil(distnc/(2*rad));
        printf("%lld\n",res);
    }
    return 0;
}
