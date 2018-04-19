#include<bits/stdc++.h>
using namespace std;
#define ll long long int
map<ll,ll>pos,neg;

int main(){
    ll n,i,p,q,j;
    ll ans=0;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        scanf("%lld %lld",&p,&q);
        ans+=pos[p+q]++;
        ans+=neg[p-q]++;
    }

    printf("%lld\n",ans);
    return 0;
}
