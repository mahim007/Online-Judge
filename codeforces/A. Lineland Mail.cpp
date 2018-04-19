#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define limit 2000000009
#define N 100009
ll a[N],b[N];
map<ll,ll>M,P;

int main(){
    ll n,i;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a[i];
        b[i]=a[i];
    }

    sort(b+1,b+1+n); //for(i=0;i<=n+1;i++) cout<<b[i]<<" "; cout<<endl;
    for(i=1;i<=n;i++){
        M[b[i]]=i;
        P[i]=b[i];
    }

    ll mn,mx;
    for(i=1;i<=n;i++){
        mn=limit;
        mx=-limit;
        ll pos=M[a[i]];
        if(pos==1){
            ll d1=abs(P[pos]-P[pos+1]);
            if(d1<mn) mn=d1;
            if(d1>mx) mx=d1;

            d1=abs(P[pos]-P[n]);
            if(d1<mn) mn=d1;
            if(d1>mx) mx=d1;
        }
        else if(pos==n){
            ll d1=abs(P[pos-1]-P[pos]);
            if(d1<mn) mn=d1;
            if(d1>mx) mx=d1;

            d1=abs(P[1]-P[pos]);
            if(d1<mn) mn=d1;
            if(d1>mx) mx=d1;
        }
        else if(pos>1 && pos<n){
            ll d1=abs(P[pos-1]-P[pos]);
            if(d1<mn) mn=d1;
            if(d1>mx) mx=d1;

            d1=abs(P[pos]-P[pos+1]);
            if(d1<mn) mn=d1;
            if(d1>mx) mx=d1;

            d1=abs(P[1]-P[pos]);
            if(d1<mn) mn=d1;
            if(d1>mx) mx=d1;

            d1=abs(P[pos]-P[n]);
            if(d1<mn) mn=d1;
            if(d1>mx) mx=d1;
        }

        cout<<mn<<" "<<mx<<endl;
    }
    return 0;
}
