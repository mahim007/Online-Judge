#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define inf 1000000000000
ll seq[400000],I[400000],L[400000],n;
vector<ll>V;

ll LIS(){
    ll mx=-inf;
    I[0]=-inf;
    for(ll i=1;i<=n;i++){
        I[i]=inf;
        L[i]=1;
    }

    for(ll i=1;i<=n;i++){
        ll low=0,high=n,mid;
        while(low<=high){
            mid=(low+high)/2;
            if(seq[i]<=I[mid])
                high=mid-1;
            else
                low=mid+1;
        }

        I[low]=seq[i];
        L[i]=low;
        if(L[i]>mx) mx=L[i];
    }

    printf("%lld\n",mx);
    printf("-\n");
    for(ll i=n;i>=1;i--){
        if(L[i]==mx){
            V.push_back(seq[i]);
            mx--;
        }
    }

    ll siz=V.size();
    for(ll i=siz-1;i>=0;i--)
        printf("%lld\n",V[i]);
}

int main(){
    ll i,d;
    i=0;
    while(scanf("%lld",&d)==1){
        seq[++i]=d;
    }

    n=i;
    LIS();
    return 0;
}
