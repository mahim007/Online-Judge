#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t,T,a,b;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld %lld",&a,&b);
        b=floor(2*b/3);
        a=floor(2*(a-1)/3);
        printf("Case %lld: %lld\n",t,b-a);
    }
    return 0;
}
