#include<bits/stdc++.h>
using namespace std;

int main()
{
    int hh,mm,t,i;
    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
        scanf("%d:%d",&hh,&mm);
        hh=11-hh+(mm==0);
        if(hh<=0)
            hh=hh+12;
        mm=60-mm;
        if(mm==60)
            mm=0;

        printf("%02d:%02d\n",hh,mm);

    }
    return 0;
}
