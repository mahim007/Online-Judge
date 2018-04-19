#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,dif;

    while(scanf("%d %d",&a,&b)==2)
    {
        if(a==-1 && b==-1)
            break;

        if(a>b)
            swap(a,b);
        if((b-a)<(a+(100-b)))
           dif=b-a;
        else
            dif=a+(100-b);
        printf("%d\n",dif);
    }
    return 0;
}
