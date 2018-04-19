#include<bits/stdc++.h>
using namespace std;
int main(){
    double l,w,rat;
    int t=1;
    while(scanf("%lf : %lf",&l,&w)==2){
        double angl=atan(w/l);
        double r=sqrt(l*l+w*w);
        rat=200/(l+angl*r);
        printf("Case %d: %0.8lf %0.8lf\n",t++,rat*l,rat*w);
    }
    return 0;
}
