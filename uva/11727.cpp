#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,t,a,b,c;

    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        scanf("%d %d %d",&a,&b,&c);

        if((a>b && a<c) || (a<b && a>c))
            printf("Case %d: %d\n",t,a);
        else if((b>a && b<c) || (b<a && b>c))
            printf("Case %d: %d\n",t,b);
        else
            printf("Case %d: %d\n",t,c);
    }
    return 0;
}
