#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll m;
    while(scanf("%lld",&m)==1){
        if(m==0){
            break;
        }
        if(m%9==0){
            ll n=m+(m/9);
            printf("%lld %lld\n",n-1,n);
        }
        else{
            ll n=m+(m/9);
            printf("%lld\n",n);
        }
    }
    return 0;
}
