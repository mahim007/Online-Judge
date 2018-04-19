#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll arr[109];
ll win[109];
int main(){
    ll n,m;
    ll i,j,k,w,mx;
    scanf("%lld %lld",&n,&m);
    for(i=1;i<=m;i++){
        ll mx=-1;
        w=1;
        for(j=1;j<=n;j++){
            ll d;
            scanf("%lld",&d);
            arr[j]=d;
            if(mx<arr[j]){
                mx=arr[j];
                w=j;
            }
        }
        win[w]++;
    }
    mx=-1;
    w=1;
    for(i=1;i<=n;i++){
        if(mx<win[i]){
            mx=win[i];
            w=i;
        }
    }
    printf("%lld\n",w);
    return 0;
}
