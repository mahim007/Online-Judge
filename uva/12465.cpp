#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define maax 31700
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

int main(){
    sieve();
    ll a,b;
    while(scanf("%lld %lld",&a,&b)==2){
        if(a==0 && b==0){
            break;
        }
        ll c=abs(a-b);
        ll p,ans=1;
        for(ll i=0;V[i]*V[i]<=c;i++){
            p=0;
            while(c%V[i]==0){
                c=c/V[i];
                p++;
            }
            ans*=p+1;
        }
        if(c!=1){
            ans*=2;
        }
        printf("%lld\n",ans);
    }
    return 0;
}
