#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll T,t,n,ans=0;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld",&n);
        ans=0;
        ll c=n/2;
        for(;c>=1;c--){
            ll rem=n-c;
            ll mid=rem/2;
            ll low=max(1ll,rem-c);
            ans+=max(0ll,mid-low+1);
        }

        printf("%lld\n",ans);
    }

    return 0;
}
