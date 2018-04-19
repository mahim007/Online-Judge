#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,t,n,p,k,res;

    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        scanf("%d %d %d",&n,&k,&p);
        res=k+p;
        if(res>n)
            res=res%n;
        if(res==0)
            res=n;
        printf("Case %d: %d\n",t,res);
    }
    return 0;
}
