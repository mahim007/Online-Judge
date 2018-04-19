#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
int main()
{
    int t,T;
    double l,w,r,rectangle,circle;

    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        scanf("%lf",&l);
        w=(l*60)/100;
        r=(l*20)/100;
        rectangle=l*w;
        circle=pi*r*r;
        rectangle=rectangle-circle;
        printf("%0.2lf %0.2lf\n",circle,rectangle);
    }
    return 0;
}
