#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mx 5000009
bool tag[mx];
//vector<ll>V;
ll sum[mx];
ll ans[mx];
map<ll,int>M;
void prime(){
    tag[0]=tag[1]=1;
    M[2]=1;
    for(ll i=4;i<mx;i=i+2){
        tag[i]=1;
        sum[i]+=2;
    }
    ll root=(mx/2)+1;
    for(ll i=3;i<=root;i=i+2){
        if(tag[i]==0){
            M[i]=1;
            for(ll j=i+i;j<mx;j=j+i){
                tag[j]=1;
                sum[j]+=i;
            }
        }
    }
    for(ll i=2;i<mx;i++){
        ll x=0;
        if(sum[i]==0) x=1;
        if(M[sum[i]]) x=1;
        ans[i]=ans[i-1]+x;
    }
}

int main(){
    prime();
    ll a,b;
    while(scanf("%lld",&a)==1){
        if(a==0) break;
        scanf("%lld",&b);
        printf("%lld\n",ans[b]-ans[a-1]);
    }
    return 0;
}
