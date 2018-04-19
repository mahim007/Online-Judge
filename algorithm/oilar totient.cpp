#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,ret,save;
    while(scanf("%d",&n)==1)
    {
        ret=n;
        save=n;
        for(i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                while(n%i==0)
                {
                    n=n/i;
                }
                ret=ret-(ret/i);
            }
        }
        if(n>1)
            ret=ret-ret/n;
        printf("phi(%d)=%d\n",save,ret);
    }
    return 0;
}
