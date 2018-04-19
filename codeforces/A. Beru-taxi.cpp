#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll a,b,x,y,n,s;
    double ans=9999999.0;
    scanf("%lld %lld",&a,&b);
    scanf("%lld",&n);
    for(ll i=1;i<=n;i++){
        scanf("%lld %lld %lld",&x,&y,&s);
        double v=sqrt(((a-x)*(a-x))+((b-y)*(b-y)));
        v/=(double)s;
        if(v<ans) ans=v;
    }

    printf("%0.10lf\n",ans);
    return 0;
}
