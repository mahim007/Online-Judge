#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll>V;
int main(){
    ll n,d,i;
    while(scanf("%lld",&n)==1){
        for(i=1;i<=n;i++){
            scanf("%lld",&d);
            V.push_back(d);
        }
        ll sz=V.size();
        sort(V.begin(),V.end());
        reverse(V.begin(),V.end());
        for(i=0;i<sz;i++){
            printf("%lld\n",V[i]);
        }
        V.clear();
    }
    return 0;
}
