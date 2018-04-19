#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lim 1009
ll a[lim],n;

ll check(ll b,ll p){
    ll ans=1;
    for(ll i=1;i<=p;i++){
        ans*=b;
        if(ans>=n) return 1;
    }

    return 0;
}

int main(){
    ll i,j,k,d;
    scanf("%lld %lld %lld",&n,&k,&d);
    if(!check(k,d)){
        printf("-1\n");
    }
    else{
        for(i=1;i<=n;i++){
            a[i]=i;
        }

        for(i=1;i<=d;i++){
            for(j=1;j<=n;j++){
                printf("%lld ",(a[j]%k)+1);
                a[j]/=k;
            }
            printf("\n");
        }
    }

    return 0;
}
