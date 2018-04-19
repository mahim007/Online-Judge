#include<bits/stdc++.h>
using namespace std;
int main(){
    double l,w,rat;
    int t,T;
    scanf("%d",&T);
    for(t=1;t<=T;t++){
        scanf("%lf : %lf",&l,&w);
        double angl=atan(w/l);
        double r=sqrt(l*l+w*w);
        rat=200/(l+angl*r);
        printf("Case %d: %0.8lf %0.8lf\n",t,rat*l,rat*w);
    }
    return 0;
}

