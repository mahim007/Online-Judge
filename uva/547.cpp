#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll arr[3009];
ll cnt[3009];

ll getsum(ll n){
    ll d=0;
    if(n<10){
        return n;
    }
    while(n){
        d+=n%10;
        n/=10;
    }
    return d;
}

void preproc(){
    ll i,j,k,sum;
    for(k=3000;k>=0;k--){
        ll n=k;
        sum=0;
        for(i=1;i*i<=n;i++){
            if(n%i==0){
                sum+=getsum(i);
                if(i*i!=n){
                    sum+=getsum(n/i);
                }
            }
        }
        arr[k]=sum;
    }
}

void counter(){
    ll i,j,f;
    for(i=3000;i>=0;i--){
        f=1;
        j=i;
        while(arr[j]!=j){
            f++;
            j=arr[j];
        }
        cnt[i]=f;
    }
}

int main(){
    preproc(); //cout<<"preproc finished..."<<endl;
    counter(); //cout<<"counter finished.."<<endl;
    ll a,b,t=1,n,indx,i,j;
    while(scanf("%lld %lld",&a,&b)==2){
        printf("Input%lld: %lld %lld\n",t,a,b);
        if(a>b){
            swap(a,b);
        }
        n=-1;
        for(i=a;i<=b;i++){
            if(cnt[i]>n){
                n=cnt[i];
                indx=i;
            }
        } //cout<<"indx:"<<indx<<endl; system("pause");
        printf("Output%lld:",t++);
        while(1){
            printf(" %lld",indx);
            if(indx==arr[indx]){
                break;
            }
            indx=arr[indx];
        }
        printf("\n");
    }
    return 0;
}
