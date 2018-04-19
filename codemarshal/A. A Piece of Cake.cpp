#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void print1(ll n){
    printf("0");
    for(ll i=1;i<=n;i++) printf(" %lld",i);
    printf("\n");
}

void print2(ll n){
    printf("%lld",n);
    for(ll i=n+1;i<=0;i++) printf(" %lld",i);
    printf("\n");
}

int main(){
    ll n,i,j,k,T,t;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld",&n);
        if(n>=0) print1(n);
        else print2(n);
    }

    return 0;
}
