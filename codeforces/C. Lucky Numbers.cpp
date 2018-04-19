#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll n,i,ans;
    scanf("%lld",&n);
    ans=0;
    for(i=1;i<=n;i++){
        ans+=pow(2,i);
    }
    printf("%lld\n",ans);
    return 0;
}
