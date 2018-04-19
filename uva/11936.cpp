#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,t,a,b,c;

    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if((a+b>c) && (b+c>a) && (a+c>b))
            printf("OK\n");
        else
            printf("Wrong!!\n");
    }
    return 0;
}
