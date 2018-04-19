#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,cnt,i,j,T,t;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        cnt=0;
        scanf("%d %d",&n,&m);
        n=n-2;
        m=m-2;

        i=1;
        j=1;

        while(i<=n)
        {
            j=1;
            while(j<=m)
            {
                cnt++;
                j=j+3;
            }
            i=i+3;
        }
        printf("%d\n",cnt);
    }
    return 0;
}
