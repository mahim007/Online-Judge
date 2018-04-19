#include<bits/stdc++.h>
using namespace std;
#define ll long long int
char num[1000];

void solve1(ll n){
    ll sign=1;
    ll a,b;
    if(n<0){
        sign=-1;
    }
    n=n*sign;
    if((n&3)==2){
        printf("Bachelor Number.\n");
        return;
    }
    if(n&1){
        b=(n-1)/2;
        a=b+1;
    }
    else{
        a=(n/4)+1;
        b=(n/4)-1;
    }
    if(sign==1){
        printf("%lld %lld\n",a,b);
    }
    else{
        printf("%lld %lld\n",b,a);
    }
}

void solve2(ll a,ll b){
    ll sum=0;
    for(ll i=a;i<=b;i++){
        if((i&3)==2){
            sum++;
        }
    }
    printf("%lld\n",sum);
}

int main(){
    ll a,b;
    while(gets(num)){
        if(sscanf(num,"%lld %lld",&a,&b)==1){
            solve1(a);
        }
        else{
            solve2(a,b);
        }
    }
}
