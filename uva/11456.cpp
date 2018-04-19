#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define inf 100000000000
ll arr[2009],LIS[2009],LDS[2009],n,I[2009];

void lis(){
    I[0]=-inf;
    for(ll i=1;i<=n;i++){
        I[i]=inf;
        LIS[i]=0;
    }

    for(ll i=1;i<=n;i++){
        ll low=0,high=n,mid;
        while(low<=high){
            mid=(low+high)/2;
            if(arr[i]<=I[mid])
                high=mid-1;
            else
                low=mid+1;
        }

        I[low]=arr[i];
        LIS[i]=low;
    }
}

void lds(){
    I[0]=inf;
    for(ll i=1;i<=n;i++){
        I[i]=-inf;
        LDS[i]=0;
    }

    for(ll i=1;i<=n;i++){
        ll low=0,high=n,mid;
        while(low<=high){
            mid=(low+high)/2;
            if(arr[i]>=I[mid])
                high=mid-1;
            else
                low=mid+1;
        }

        I[low]=arr[i];
        LDS[i]=low;
    }
}

int main(){
    ll T,t,i,j,k;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld",&n);
        for(i=1;i<=n;i++){
            scanf("%lld",&arr[n+1-i]);
        }

        lis();
        lds();
        ll mx=0;
        ll d;
        for(i=1;i<=n;i++){
            d=LIS[i]+LDS[i]-1;
            if(d>mx) mx=d;
        }
        printf("%lld\n",mx);
    }
    return 0;
}
