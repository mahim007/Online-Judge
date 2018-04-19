#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll arr[10009];
int main(){
    ll i,j,n,m,t;
    t=1;
    while(scanf("%lld %lld",&n,&m)==2){
        for(i=1;i<=m;i++){
            ll d;
            scanf("%lld",&d);
            arr[d]=t;
        }
        ll flag=0;
        for(i=1;i<=n;i++){
            if(arr[i]!=t){
                printf("%lld ",i);
                flag=1;
            }
        }
        if(flag==0){
            printf("*");
        }
        printf("\n");
        t++;
    }
    return 0;
}
