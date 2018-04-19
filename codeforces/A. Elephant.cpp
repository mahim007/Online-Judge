#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n,ans;
    scanf("%lld",&n);
    ans=n/5;
    if(n%5!=0)
        ans++;
    printf("%lld\n",ans);
    return 0;
}
