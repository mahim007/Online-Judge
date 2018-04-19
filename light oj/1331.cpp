#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
#define eps 1e-9

double inverse(double angle){
    return acos(angle)*180.0/pi;
}

int main(){
    int T,t;
    double a,b,c;
    scanf("%d",&T);
    for(t=1;t<=T;t++){
        scanf("%lf %lf %lf",&a,&b,&c);
        double aa,bb,cc;
        cc=(a*(a+b+c)-b*c)/(a*(a+b+c)+b*c);
        cc=inverse(cc);
        bb=(b*(a+b+c)-a*c)/(b*(a+b+c)+a*c);
        bb=inverse(bb);
        aa=180.0-bb-cc;
        double tri=.5*(a+c)*(a+b)*sin(cc*pi/180.0);
        tri-=(pi*a*a)*cc/360.0;
        tri-=(pi*b*b)*bb/360.0;
        tri-=(pi*c*c)*aa/360.0;
        printf("Case %d: %0.8lf\n",t,tri+eps);
    }
    return 0;
}
