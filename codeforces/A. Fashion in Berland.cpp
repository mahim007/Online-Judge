#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n,i,d,sum=0;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        scanf("%lld",&d);
        sum+=d;
    }

    if(n==1 && sum==1){
        printf("YES\n");
    }
    else if(n>1 && sum==n-1){
        printf("YES\n");
    }
    else printf("NO\n");

    return 0;
}
