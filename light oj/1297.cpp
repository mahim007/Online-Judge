#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define eps 1e-9
double l,w;
double call(double x){
    return (l-2*x)*(w-2*x)*x;
}

int main(){
    ll T,t;
    double m1,m2;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lf %lf",&l,&w);
        double low=0;
        double high=min(l,w)/2.0;
        while(low<high){
            m1=(low+high)/2.0;
            m2=(m1+high)/2.0;
            if(call(m1)<=call(m2)){
                low=m1+eps;
            }
            else{
                high=m2-eps;
            }
        }
        printf("Case %lld: %0.10lf\n",t,call(m1));
    }
    return 0;
}
