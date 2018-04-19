#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
int main()
{
    i64 T,t,n,m,x,y;
    while(scanf("%lld",&T)==1)
    {
        if(T==0)
            break;

        scanf("%lld %lld",&n,&m);
        for(t=1;t<=T;t++)
        {
            scanf("%lld %lld",&x,&y);
            if(x==n || y==m)
                printf("divisa\n");
            else if(x>n && y>m)
                printf("NE\n");
            else if(x>n && y<m)
                printf("SE\n");
            else if(x<n && y>m)
                printf("NO\n");
            else
                printf("SO\n");
        }
    }
    return 0;
}
