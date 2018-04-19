#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mx 100099
bool tag[mx];
ll arr[mx];

void sieve(){
    tag[0]=tag[1]=1;
    for(ll i=4;i<mx;i=i+2) tag[i]=1;
    for(ll i=3;i*i<mx;i=i+2){
        if(tag[i]==0){
            for(ll j=i*i;j<mx;j=j+i+i)
                tag[j]=1;
        }
    }

    arr[0]=arr[1]=0;
    for(ll i=2;i<mx;i++){
        ll d=0;
        if(!tag[i]) d=1;
        arr[i]=d+arr[i-1];
    }
}

int main(){
    ll n,i,a,b,T,t;
    sieve();
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld %lld",&a,&b);
        if(a>b) swap(a,b);
        ll ans=arr[b]-arr[a-1];
        printf("Case %lld: %lld\n",t,ans);
    }

    return 0;
}
