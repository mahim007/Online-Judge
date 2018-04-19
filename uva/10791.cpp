#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define maax 50000
bool tag[maax];
vector<ll>V;

void generator(){
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
    generator();
    ll sum,n,i,t=1;
    while(scanf("%lld",&n)==1){
        if(n==0){
            break;
        }
        if(n==1){
            printf("Case %lld: 2\n",t++);
            continue;
        }
        sum=0;
        ll d=0;
        for(i=0;V[i]*V[i]<=n;i++){
            ll p=0;
            if(n%V[i]==0){
                p=1;
                d++;
                while(n%V[i]==0){
                p=p*V[i];
                n=n/V[i];
            }
            }
            sum+=p;
        }
        if(sum==0){
            sum++;
            d++;
        }
        if(n!=1){
            sum+=n;
            d++;
        }
        if(d==1){
            sum++;
        }
        printf("Case %lld: %lld\n",t++,sum);
    }
    return 0;
}
