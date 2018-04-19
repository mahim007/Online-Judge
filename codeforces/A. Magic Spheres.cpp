#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll a[4],b[4],need=0,extra=0;
    scanf("%lld %lld %lld",&a[1],&a[2],&a[3]);
    scanf("%lld %lld %lld",&b[1],&b[2],&b[3]);

    for(ll i=1;i<=3;i++){
        if(a[i]>b[i])
            extra+=(a[i]-b[i])/2;
        else
            need+=b[i]-a[i];
    }

    if(extra>=need)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
