#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define maax 1009
#define eps 1e-9

ll n,b;
ll factor[maax];

ll getzero(){
    ll i,j,tmp;
    for(i=2;i<=n;i++){
        tmp=i;
        for(j=2;j<=b && j<=tmp;j++){
            while(tmp%j==0){
                factor[j]++;
                tmp/=j;
            }
        }
    }
    ll ans=0;
    while(1){
        tmp=b;
        for(i=2;i<=tmp;i++){
            while(tmp%i==0){
                if(factor[i]){
                    factor[i]--;
                }
                else{
                    return ans;
                }
                tmp/=i;
            }
        }
        ans++;
    }
}

ll getdigit(){
    ll i,j,res;
    double m;
    m=0;
    for(i=1;i<=n;i++){
        m+=log10(i);
    }
    m=m/log10(b);
    res=(m+eps);
    res++;
    return res;
}

int main(){
    ll i,j,k;
    while(scanf("%lld %lld",&n,&b)==2){
        memset(factor,0,sizeof factor);
        ll zero=getzero();
        ll digit=getdigit();
        printf("%lld %lld\n",zero,digit);
    }
    return 0;
}
