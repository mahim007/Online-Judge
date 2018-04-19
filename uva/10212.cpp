#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll n,m;
    ll fact;
    while(scanf("%lld %lld",&n,&m)==2){
        ll t=0;
        fact=1;
        for(ll i=n-m+1;i<=n;i++){
            ll tmp=i;
            while(tmp%2==0){
                t++;
                tmp=tmp/2;
            }
            while(tmp%5==0){
                t--;
                tmp=tmp/5;
            }
            fact=(fact*tmp)%10;
        }
        if(t<0){
            fact=5;
        }
        else{
            for(ll i=1;i<=t;i++){
                fact=(fact*2)%10;
            }
        }
        printf("%lld\n",fact%10);
    }
    return 0;
}
