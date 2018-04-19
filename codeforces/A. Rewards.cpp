#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll c1,c2,c3;
    ll m1,m2,m3;
    ll n,i,j,k;
    scanf("%lld %lld %lld",&c1,&c2,&c3);
    scanf("%lld %lld %lld",&m1,&m2,&m3);
    scanf("%lld",&n);
    ll a=0,b=0;
    a=c1+c2+c3;
    b=m1+m2+m3;
    ll ans=0;
    ans=a/5;
    if(a%5!=0) ans++;
    ans+=b/10;
    if(b%10!=0) ans++;
    if(ans<=n) printf("YES\n");
    else printf("NO\n");

    return 0;
}
