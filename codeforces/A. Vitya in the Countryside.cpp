#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll a[109];
int main(){
    ll n,i;
    scanf("%lld",&n);
    for(i=1;i<=n;i++) scanf("%lld",&a[i]);
    if(n==1){
        if(a[1]==0) printf("UP\n");
        else if(a[1]==15) printf("DOWN\n");
        else printf("-1\n");
    }
    else{
        if(a[n]<a[n-1]){
            if(a[n]==0) printf("UP\n");
            else printf("DOWN\n");
        }
        else{
            if(a[n]==15) printf("DOWN\n");
            else printf("UP\n");
        }
    }

    return 0;
}
