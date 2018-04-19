#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll x1,x2,y1,y2;
    scanf("%lld %lld %lld %lld",&x1,&y1,&x2,&y2);
    ll ans=((x2-x1+1)*(((y2-y1)/2)+1))-(x2-x1)/2;
    printf("%lld\n",ans);
    return 0;
}
