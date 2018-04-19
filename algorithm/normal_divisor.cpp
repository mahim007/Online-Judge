#include<bits/stdc++.h>
using namespace std;

int main()
{
    int div=0,n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            div++;
    }
    printf("%d\n",div);
    return 0;
}
