#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll arr[200009];
int main(){
    ll n,i,j,cnt=0,x=0;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        scanf("%lld",&arr[i]);
    }

    for(i=1;i<=n;i++){
        cnt+=abs(arr[i]-x);
        x=arr[i];
    }
    printf("%lld\n",cnt);
    return 0;
}
