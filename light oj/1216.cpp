#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
#define eps 1e-9
int main(){
    int T,t,i;
    double r1,r2,h,p,ans,r3;
    scanf("%d",&T);
    for(t=1;t<=T;t++){
        scanf("%lf %lf %lf %lf",&r1,&r2,&h,&p);
        r3=r2+(r1-r2)*p/h;
        ans=pi*p/3*(r3*r3+r3*r2+r2*r2)+eps;
        printf("Case %d: %0.9lf\n",t,ans);
    }
    return 0;
}
