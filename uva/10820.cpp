#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define maax 50099
bool tag[maax];
ll phi[maax];
ll res[maax];

void sieve(){
    tag[0]=tag[1]=1;
    for(ll i=4;i<maax;i=i+2){
        tag[i]=1;
    }
    for(ll i=3;i*i<maax;i=i+2){
        if(tag[i]==0){
            for(ll j=i*i;j<maax;j=j+i+i){
                tag[j]=1;
            }
        }
    }
}

void totient(){
    for(ll i=1;i<maax;i++){
        phi[i]=i;
    }
    for(ll i=2;i<maax;i++){
        if(tag[i]==0){
            for(ll j=i;j<maax;j=j+i){
                phi[j]=phi[j]/i*(i-1);
            }
        }
    }
    res[1]=1;
    for(ll i=2;i<maax;i++){
        res[i]=res[i-1]+phi[i];
    }
}

int main(){
    sieve();
    totient();
    ll n;
    while(scanf("%lld",&n)==1){
        if(n==0){
            break;
        }
        printf("%lld\n",(ll)(2*res[n]-1));
    }
    return 0;
}
