#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lim 2000000000
ll cnt1,cnt2,x,y;

ll call(){
    ll l=1,h=lim;
    while(l<h){
        ll mid=(l+h)>>1;
        ll rx=mid-(mid/x);
        ll ry=mid-(mid/y);
        ll cx=mid-(mid/(x*y));
        if(cnt1<=rx && cnt2<=ry && cx>=cnt1+cnt2) h=mid;
        else l=mid+1;
    }

    return l;
}

int main(){
    ll a,b;
    scanf("%lld %lld %lld %lld",&cnt1,&cnt2,&x,&y);
    a=call();
    printf("%lld\n",a);
    return 0;
}
