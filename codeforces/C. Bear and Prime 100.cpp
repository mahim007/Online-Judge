#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define N 119
vector<ll>V;
ll arr[N];

void sieve(){
    arr[0]=arr[1]=1;
    for(ll i=4;i<N;i=i+2) arr[i]=1;
    for(ll i=3;i*i<N;i=i+2){
        if(arr[i]==0){
            for(ll j=i*i;j<N;j=j+i+i)
                arr[j]=1;
        }
    }

    for(ll i=1;i<N;i++){
        if(arr[i]==0){
            V.push_back(i);
        }
    }
}

int main(){
    sieve();
    ll cnt=0,ask=0;
    ll i,j,k,n;
    for(i=0;i<20 && ask<20;i++){
        printf("%lld\n",V[i]); fflush(stdout);
        ask++;
        string s;
        cin>>s;
        if(s=="yes"){
            cnt++;
            for(j=0;j<20 &&(V[i]*V[j])<=100 && ask<20;j++){
                printf("%lld\n",V[i]*V[j]); fflush(stdout);
                ask++;
                string p;
                cin>>p;
                if(p=="yes"){
                    cnt++;
                }
            }
        }
    }

    if(cnt<=1){
        printf("prime\n"); fflush(stdout);
    }
    else{
        printf("composite\n"); fflush(stdout);
    }

    return 0;
}
