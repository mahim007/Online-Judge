#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define maax 2000099
bool tag[maax];
ll phi[maax];

void sievephi(){
    for(ll i=1;i<maax;i++){
        phi[i]=i;
    }
    phi[1]=1;
    tag[1]=1;
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
                phi[j]=phi[j]/i*(i-1);
            }
        }
    }
}

int main(){
    sievephi();
    phi[1]=phi[0]=0;
    for(ll i=2;i<maax;i++){
        phi[i]=1+phi[phi[i]];
    }
    phi[0]=0;
    for(ll i=1;i<maax;i++){
        phi[i]=phi[i]+phi[i-1];
    }
    ll T,t,a,b;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld %lld",&a,&b);
        printf("%lld\n",phi[b]-phi[a-1]);
    }
    return 0;
}
