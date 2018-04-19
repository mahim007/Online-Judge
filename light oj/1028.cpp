#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lim 1000999
bool mark[lim];
vector<ll>V;

void sieve(){
    V.push_back(2);
    ll root=sqrt(lim)+1;
    for(ll i=3;i<root;i=i+2){
        if(!mark[i]){
            for(ll j=i*i;j<lim;j=j+i+i){
                mark[j]=1;
            }
        }
    }
    for(ll i=3;i<lim;i=i+2){
        if(!mark[i]){
            V.push_back(i);
        }
    }
}

int main(){
    ll T,t,i,j,k,n,ans,sz;
    sieve();
    sz=V.size();
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld",&n);
        ans=1;
        for(i=0;V[i]*V[i]<=n && i<sz;i++){
            ll x=1;
            while(n%V[i]==0){
                x++;
                n=n/V[i];
            }
            ans=ans*x;
        }

        if(n!=1){
            ans*=2;
        }

        printf("Case %lld: %lld\n",t,ans-1);
    }
    return 0;
}
