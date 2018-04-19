#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 109
ll a[mxn];
vector<ll>V;

int main(){
    ll n,m,i,j,k,d,sum=0;
    scanf("%lld %lld",&n,&m);
    for(i=1;i<=n;i++){
        scanf("%lld",&a[i]);
    }

    for(i=1;i<=m;i++){
        scanf("%lld",&d);
        V.push_back(a[d]);
        a[d]=0;
    }

    sort(V.begin(),V.end());
    reverse(V.begin(),V.end());
    for(i=1;i<=n;i++){
        sum+=a[i];
    }

    for(i=0;i<m;i++){
        sum+=max(sum,V[i]);
    }

    printf("%lld\n",sum);
    return 0;
}
