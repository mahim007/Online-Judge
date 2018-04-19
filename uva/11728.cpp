#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define maax 5000000
bool tag[maax];
vector<ll>V;
map<ll,ll>M;
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

ll getsum(ll n){
    ll i,p=0,k=0;;
    for(i=1;i<=n;i++){
        if(n%i==0){
            p=p+i;
        }
    }
    return p;
}

void process(){
    ll i,j,sum;
    for(i=1;i<=1009;i++){
        sum=getsum(i);
        if(M[sum]>=0){
            M[sum]=i;
        }
    }
}

int main(){
    //sieve();
    process();
    ll t=1,n;
    while(scanf("%lld",&n)==1){
        if(n==0)
            break;
        if(M[n]==0){
            printf("Case %lld: -1\n",t++);
        }
        else{
            printf("Case %lld: %lld\n",t++,M[n]);
        }
    }
    return 0;
}
