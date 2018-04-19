#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll sum=0;
    ll n;
    ll mn=99999999999;
    ll cnt=0;
    scanf("%lld",&n);
    for(ll i=1;i<=n;i++){
        ll d;
        scanf("%lld",&d);
        if(d&1){
            if(d<mn) mn=d;
            cnt++;
        }

        sum+=d;
    }

    if(cnt&1) sum-=mn;
    printf("%lld\n",sum);
    return 0;
}
