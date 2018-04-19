#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll>V;
int main(){
    ll n,i,j,k,d;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        scanf("%lld",&d);
        V.push_back(d);
    }

    sort(V.begin(),V.end());
    ll ans=V[n-1]-V[0];
    printf("%lld ",ans);
    ll mn=1;
    for(i=1;i<n;i++){
        if(V[i]==V[i-1]) mn++;
        else break;
    }

    ll mx=1;
    for(j=n-2;j>=0;j--){
        if(V[j]==V[j+1]) mx++;
        else break;
    }

    if(mn+mx<=n){
        printf("%lld\n",mn*mx);
    }
    else{
        printf("%lld\n",(n*(n-1))/2);
    }

    return 0;
}
