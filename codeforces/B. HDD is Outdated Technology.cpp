#include<bits/stdc++.h>
using namespace std;
#define ll long long int
map<ll,ll>M;
int main(){
    ll n,i,j,k=1,cnt=0;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        ll d;
        scanf("%lld",&d);
        M[d]=k;
        k++;
    }

    for(i=2;i<=n;i++){
        cnt+=abs(M[i]-M[i-1]);
    }
    printf("%lld\n",cnt);
    return 0;
}
