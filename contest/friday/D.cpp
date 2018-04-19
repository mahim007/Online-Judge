#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll a[1009];

int main(){
    ll i,j,k;
    ll b,p;

    while(scanf("%lld %lld",&b,&p)==2){
        ll cnt=0;
        for(i=0;i<p;i++){
            ll x=i*i*i;
            if(x%p==b){
                a[cnt++]=i;
            }
        }

        if(cnt==0) printf("\n");
        else{
            printf("%lld",a[0]);
            for(i=1;i<cnt;i++) printf(" %lld",a[i]);
            printf("\n");
        }
    }

    return 0;
}
