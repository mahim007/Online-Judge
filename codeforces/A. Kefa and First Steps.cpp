#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll arr[100001];
int main(){
    ll n,i,d,mx=-1;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        scanf("%lld",&arr[i]);
    }

    ll cnt=1;
    for(i=2;i<=n;i++){
        if(arr[i]>=arr[i-1]){
            cnt++;
        }
        else{
            if(cnt>mx){
                mx=cnt;
            }
            cnt=1;
        }
    }
    if(cnt>mx)
        mx=cnt;
    printf("%lld\n",mx);
    return 0;
}
