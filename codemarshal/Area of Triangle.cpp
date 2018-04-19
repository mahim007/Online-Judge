#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define eps 1e-7
int main(){
    ll a,b,c,T,t;
    double area,s;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld %lld %lld",&a,&b,&c);
        s=(double)(a+b+c)/2.0;
        area=s*(s-a)*(s-b)*(s-c);
        if(area<0.0) area=0.0;
        area=sqrt(area);
        printf("Case %lld: %0.9lf\n",t,area+eps);
    }

    return 0;
}
