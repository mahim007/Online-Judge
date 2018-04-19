#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll n,d,i,j,k,sng,sum=0,t;
    scanf("%lld %lld",&n,&t);
    for(i=1;i<=n;i++){
        scanf("%lld",&d);
        sum+=d;
    }

    if((sum+(n-1)*10)>t){
        printf("-1\n");
    }
    else{
        printf("%lld\n",(t-sum)/5);
    }

    return 0;
}
