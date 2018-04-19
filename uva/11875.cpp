#include<bits/stdc++.h>
using namespace std;

int main()
{
    int age[12],T,t,n,i;

    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&age[i]);

        printf("Case %d: %d\n",t,age[n/2]);
    }
    return 0;
}
