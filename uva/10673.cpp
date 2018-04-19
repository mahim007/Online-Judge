#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t,T,a,b,p,q;
    //printf("%d\n",__gcd(42,8468));
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld %lld",&a,&b);
        q=a%b;
        p=b-q;
        printf("%lld %lld\n",p,q);
    }
    return 0;
}
