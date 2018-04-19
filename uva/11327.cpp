#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define maax 200009
bool tag[maax];
ll phi[maax];

void sievephi(){
    tag[0]=tag[1]=1;
    for(ll i=1;i<maax;i++){
        phi[i]=i;
    }
    for(ll i=2;i<maax;i=i+2){
        if(i!=2){
            tag[i]=1;
        }
        phi[i]=phi[i]/2;
    }
    for(ll i=3;i<maax;i=i+2){
        if(tag[i]==0){
            phi[i]=phi[i]-1;
            for(ll j=i+i;j<maax;j=j+i){
                tag[j]=1;
                phi[j]=(phi[j]/i)*(i-1);
            }
        }
    }
    phi[1]=2;
    for(ll i=2;i<maax;i++){
        phi[i]=phi[i]+phi[i-1];
    }
}

int main(){
    sievephi();
    ll n;
    while(scanf("%lld",&n)==1){
        if(n==0){
            break;
        }
        ll l=0,r=maax,m;
        while(l<r){
            m=(l+r)/2;
            if(phi[m]<n){
                l=m+1;
            }
            else{
                r=m;
            }
        }
        ll ans=0;
        for(ll i=phi[l-1];i<n;ans++){
            while(__gcd(ans,l)!=1){
                ans++;
            }
            i++;
            if(i==n)
                break;
        }
        printf("%lld/%lld\n",ans,r);
    }
    return 0;
}
