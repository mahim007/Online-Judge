#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define maax 1000009
#define root 1099
ll arr[maax];
vector<ll>V;
bool tag[root];

void sieve(){
    tag[0]=tag[1]=1;
    for(ll i=4;i<root;i=i+2){
        tag[i]=1;
    }
    for(ll i=3;i*i<root;i=i+2){
        if(tag[i]==0){
            for(ll j=i*i;j<root;j=j+i+i){
                tag[j]=1;
            }
        }
    }
    for(ll i=1;i<root;i++){
        if(tag[i]==0){
            V.push_back(i);
        }
    }
}

void factor(){
    ll p=0;
    for(ll i=2;i<maax;i++){
        ll tmp=i;
        for(ll j=0;V[j]*V[j]<=tmp;j++){
            while(tmp%V[j]==0){
                p++;
                tmp=tmp/V[j];
            }
        }
        if(tmp!=1){
            p++;
        }
        arr[i]=p;
    }
}

int main(){
    sieve();
    factor();
    ll n;
    while(scanf("%lld",&n)==1){
        printf("%lld\n",arr[n]);
    }
    return 0;
}
