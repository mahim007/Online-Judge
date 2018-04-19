#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll n,m,q,i,j,k,ans;
    scanf("%lld %lld %lld",&n,&m,&q);
    ans=n*m;
    if(q>((n-1)+(m-1))){
        printf("-1\n");
    }
    else if(q<=(n-1) || q<=(m-1)){
        ll x,y;
        x=1;
        y=q+1;
        ll mx=(n/x)*(m/y);
        y=1;
        x=q+1;
        mx=max(mx,(n/x)*(m/y));
        printf("%lld\n",mx);
    }
    else{
        n--;
        m--;
        ll mx=max(n,m);
        ll lft=q-mx;
        ll d=(mx+1)*(lft+1);
        printf("%lld\n",(ll)(ans/d));
    }

    return 0;
}
