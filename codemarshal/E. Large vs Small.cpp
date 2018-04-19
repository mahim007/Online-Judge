#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define eps 1e-9

int main(){
    ll T,t;
    double mx,mn,d;
    mx=-99999999999999999.0;
    mn=9999999999999999.0;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lf",&d);
        if(d-mx>=eps){
            mx=d;
        }

        if(mn-d>=eps){
            mn=d;
        }

        printf("Case %lld: %0.2lf\n",t,(mx/mn));
    }

    return 0;
}
