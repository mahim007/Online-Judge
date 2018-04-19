#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n,w,i;
    while(scanf("%lld %lld",&n,&w)==2){
        double data[2*n];
        for(i=0;i<2*n;i++){
            scanf("%lf",&data[i]);
        }
        sort(data,data+2*n);
        double x=min(data[0],data[n]/2.0);
        x*=3*n;
        printf("%lf\n",x<w?x:w);
    }
    return 0;
}
