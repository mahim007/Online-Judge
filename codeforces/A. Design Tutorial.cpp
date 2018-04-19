#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lim 1000009
bool tag[lim];

void sieve(){
    tag[0]=tag[1]=1;
    for(ll i=4;i<lim;i=i+2) tag[i]=1;
    for(ll i=3;i*i<lim;i=i+2){
        if(tag[i]==0){
            for(ll j=i*i;j<lim;j=j+i+i)
                tag[j]=1;
        }
    }
}

int main(){
    sieve();
    ll n;
    cin>>n;
    ll a,b;
    a=b=n/2;
    if((a+b)!=n){
        b++;
    }

    while(a>1 && b<n){
        if(a+b==n && tag[a]==1 && tag[b]==1){
            cout<<a<<" "<<b<<"\n";
            return 0;
        }
        a--,b++;
    }
    return 0;
}
