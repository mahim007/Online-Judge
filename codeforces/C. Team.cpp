#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 1000009

ll arr[4*mxn];
ll n,m;

void proc1(){
    for(ll i=1;i<=n;i++) printf("10");
    printf("\n");
}

void proc2(){
    printf("0");
    for(ll i=1;i<=m;i++) printf("10");
    printf("\n");
}

void proc3(ll one){
    ll rest=m-one;
    ll k=1;
    ll i=1;
    while(one){
        if(k&1){
            arr[i]=1;
            one--;
            i=i+2;
        }
        else{
            arr[i]=0;
            i++;
        }

        k++;
    }

    k=1;
    while(rest){
        if(arr[k]==-1){
            arr[k]=1;
            rest--;
        }

        k++;
    }

    for(ll i=1;i<4*mxn;i++){
        if(arr[i]!=-1) printf("%lld",arr[i]);
    }

    printf("\n");
}

int main(){
    ll i,j,k;
    scanf("%lld %lld",&n,&m);
    if((m>=(n-1)) && (m<=((2*n)+2))){
        if(n==m){
            proc1();
        }
        else if(n-1==m){
            proc2();
        }
        else{
            memset(arr,-1,sizeof arr);
            proc3(min(n,m)+1);
        }
    }
    else{
        printf("-1\n");
    }

    return 0;
}
