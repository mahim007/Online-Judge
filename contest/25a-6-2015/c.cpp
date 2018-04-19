#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll a,b,c,d,e;
    while(scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e)==5){
        if(a==0 && b==0 && c==0 && d==0 && e==0){
            break;
        }
        ll ans=1;
        ans=a*b*c*d*d*e*e;
        printf("%lld\n",ans);
    }
    return 0;
}
