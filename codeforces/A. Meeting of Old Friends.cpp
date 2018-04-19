#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll l1,r1,l2,r2,q,ans=0;
    scanf("%lld %lld %lld %lld %lld",&l1,&r1,&l2,&r2,&q);
    if(l2>r1 || r2<l1){
        printf("%lld\n",0ll);
    }
    else{
        ll a=max(l1,l2);
        ll b=min(r1,r2);
        ans=abs(b-a)+1;
        if(q>=a && q<=b) ans--;
        printf("%lld\n",ans);
    }

    return 0;
}
