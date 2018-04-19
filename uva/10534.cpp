#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define inf 10000000000
ll L[2][10009],I[10009],seq[10009],n;

void LIS(ll x){ //cout<<"now "<<x<<endl;
    //ll mx=-inf;
    I[0]=-inf;
    for(ll i=1;i<=n;i++){
        I[i]=inf;
        L[x][i]=1;
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
        L[x][i]=low;
        //if(mx<L[x][i]) mx=L[x][i];
    }
    //return mx;
    //for(ll i=1;i<=n;i++) cout<<L[x][i]<<" ";
    //cout<<endl;
}

int main(){
    ll i,j,k;
    while(scanf("%lld",&k)==1){
        for(i=1;i<=k;i++){
            scanf("%lld",&seq[i]);
        }

        n=k;
        ll mx1,mx2,ans;
        LIS(0);
        for(i=1;i<=k/2;i++){
            swap(seq[i],seq[k+1-i]);
        }
        LIS(1);
        for(i=1;i<=k/2;i++){
            swap(L[1][i],L[1][k+1-i]);
        }
        //for(i=1;i<=k;i++) cout<<L[1][i]<<" ";
        //cout<<endl;
        ans=1;
        for(i=1;i<=k;i++){ //cout<<L[0][i]<<endl<<L[1][i]<<endl;
            ans=max(ans,min(L[0][i],L[1][i]));
        }
        printf("%lld\n",(ans*2)-1);
    }
    return 0;
}
