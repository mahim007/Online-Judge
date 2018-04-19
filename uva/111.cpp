#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define inf 100000
ll arr[25],L[25],I[25],seq[25],n;

ll LIS(){
    ll mx=-inf;
    I[0]=-inf;
    for(ll i=1;i<=n;i++){
        I[i]=inf;
        L[i]=inf;
    }

    for(ll i=1;i<=n;i++){
        ll low=0,high=n,mid;
        while(low<=high){
            mid=(low+high)/2;
            if(seq[i]<I[mid])
                high=mid-1;
            else
                low=mid+1;
        }
        I[low]=seq[i];
        L[i]=low;
        if(L[i]>mx) mx=L[i];
    }

    return mx;
}

int main(){
    ll i,j,d;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        scanf("%lld",&arr[i]);
    }

    while(scanf("%lld",&d)==1){
        seq[d]=arr[1];
        for(i=2;i<=n;i++){
            scanf("%lld",&d);
            seq[d]=arr[i];
        }

        printf("%lld\n",LIS());
    }
    return 0;
}
