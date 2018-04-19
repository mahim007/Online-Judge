#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define maax 1048999
bool tag[maax];
ll arr[maax];
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
    memset(arr,0,sizeof arr);
    arr[0]=arr[1]=arr[2]=arr[3]=1;
    for(ll i=4;i<maax;i++){
        if(tag[i]==0){
            arr[i]=1;
            continue;
        }
        if(arr[i]==0){
            for(ll j=i*2;j<maax;j=j+i){
                arr[j]=1;
            }
        }
    }
}

int main(){
    sieve();
    ll n,i,d,sum;
    while(scanf("%lld",&n)==1){
        sum=0;
        for(i=1;i<=n;i++){
            scanf("%lld",&d);
            if(arr[d]==0){
                sum++; //cout<<d<<" "<<arr[d]<<endl;
            }
        }
        printf("%lld\n",sum);
    }
    return 0;
}
