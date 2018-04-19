#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll n,m,i,j;
    scanf("%lld %lld",&n,&m);
    if(n<m){
        printf("%lld\n",n+1);
        for(i=0;i<=n;i++){
            printf("%lld %lld\n",i,m-i);
        }
    }
    else{
        printf("%lld\n",m+1);
        for(i=0;i<=m;i++){
            printf("%lld %lld\n",n-i,i);
        }
    }

    return 0;
}
