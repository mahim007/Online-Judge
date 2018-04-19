#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define maax 46500
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
    ll n,i,j,dv,phi,p,tmp;
    while(scanf("%lld",&tmp)==1){
        dv=1;
        n=tmp;
        phi=n;
        for(i=0;V[i]*V[i]<=n;i++){
            if(n%V[i]==0){
                p=0;
                phi=(phi/V[i])*(V[i]-1);
                while(n%V[i]==0){
                    p++;
                    n=n/V[i];
                }
                dv=dv*(p+1);
            }
        }
        if(n!=1){
            phi=phi/n*(n-1);
            dv=dv*2;
        } //cout<<"phi:"<<phi<<" div:"<<dv<<endl;
        printf("%lld\n",tmp-phi-dv+1);
    }
    return 0;
}
