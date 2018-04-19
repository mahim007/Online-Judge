#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll T,t,i,j,b[5],arr[5];
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld.%lld.%lld.%lld",&b[1],&b[2],&b[3],&b[4]);
        scanf("%lld.%lld.%lld.%lld",&arr[1],&arr[2],&arr[3],&arr[4]);
        ll ans=1;
        for(i=1;i<=4;i++){
            ll x=0;
            ll n=arr[i];
            ll p=0;
            while(n){
                x+=(n%10)*pow(2,p);
                n=n/10;
                p++;
            }
            if(x!=b[i]){
                ans=0;
                break;
            }
        }
        printf("Case %lld: ",t);
        if(ans) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
