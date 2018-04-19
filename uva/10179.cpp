#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define root 32000
bool tag[root];
vector<ll>V;

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

ll totient(ll n){
    ll p=0;
    ll tmp=n;
    for(ll i=0;V[i]*V[i]<=tmp;i++){
        p=0;
        while(tmp%V[i]==0){
            p++;
            tmp=tmp/V[i];
        }
        if(p>0){
            n=(n/V[i])*(V[i]-1);
        }
    }
    if(tmp!=1){
        n=(n/tmp)*(tmp-1);
    }
    return n;
}

int main(){
    sieve();
    ll n,res;
    while(scanf("%lld",&n)==1){
        if(n==0){
            break;
        }
        res=totient(n);
        printf("%lld\n",res);
    }
    return 0;
}
