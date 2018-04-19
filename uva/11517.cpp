#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mx 20009
#define inf 9999999999
ll arr[mx];
ll having[10009];
ll coin[101],n;

void ready(){
    for(ll i=1;i<mx;i++){
        arr[i]=inf;
    }
    arr[0]=0;
    for(ll i=1;i<=n;i++){
        for(ll j=coin[i];j<having[coin[i]];j++){
            arr[j]=min(arr[j],1+arr[j-coin[i]]);
        }
    }
}

int main(){
    ll T,t,i,ammount;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld",&ammount);
        scanf("%lld",&n);
        for(i=1;i<=n;i++){
            scanf("%lld",&coin[i]);
            having[coin[i]]++;
        }
        ready();
        for(i=ammount;i<mx;i++){
            if(arr[i]!=inf){
                printf("%lld %lld\n",i,arr[i]);
                break;
            }
            else continue;
        }
        memset(having,0,sizeof having);
    }
    return 0;
}
