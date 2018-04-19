#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define maax 20000099
bool tag[maax];
vector<ll>V;

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
    for(ll i=1;i<maax;i++){
        if(tag[i]==0){
            V.push_back(i);
        }
    }
}

ll getans(ll n){
    ll i,p,j=1;
    for(i=0;V[i]*V[i]<=n;i++){
        p=0;
        while(n%V[i]==0){
            p++;
            n=n/V[i];
        }
        j=j*(p+1);
    }
    if(n!=1){
        j=j*2;
    }
    return j;
}

int main(){
    sieve();
    ll i,j,k,l,n,c,ans;
    while(scanf("%lld",&c)==1){
        if(c==0)
            break;
        n=4*c-3;
        ans=getans(n);
        printf("%lld %lld\n",c,ans);
    }
    return 0;
}
