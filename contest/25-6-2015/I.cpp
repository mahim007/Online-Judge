#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t,T,n,sum;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld",&n);
        sum=0;
        while(n){
            sum+=n/5;
            n=n/5;
        }
        printf("%lld\n",sum);
    }
    return 0;
}
