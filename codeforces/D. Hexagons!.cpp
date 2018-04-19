#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n,ans;
    scanf("%lld",&n);
    ans=1+6*((n*(n+1))/2);
    printf("%lld\n",ans);
    return 0;
}
