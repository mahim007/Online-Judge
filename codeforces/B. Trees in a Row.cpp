#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 1009

ll a[mxn],b[mxn],c[mxn];

void cpy(ll n){
    for( ll i=1;i<=n;i++) b[i]=a[i];
}

void cpy2(ll n){
    for( ll i=1;i<=n;i++) c[i]=b[i];
}

int main(){
    ios_base::sync_with_stdio(0);
    ll n,i,j,k,mx;
    cin>>n>>k;
    for(i=1;i<=n;i++){
        cin>>a[i];
        b[i]=c[i]=a[i];
    }

    mx=(ll)1e18;
    for(i=1;i<=n;i++){
        ll tmp=0;
        cpy(n);

        j=i;
        for(j=i+1;j<=n;j++){
            if(b[j]-b[j-1]==k) continue;
            else{
                b[j]=b[j-1]+k;
                tmp++;
            }
        }

        for(j=i-1;j>=1;j--){
            if(b[j+1]-b[j]!=k){
                b[j]=b[j+1]-k;
                tmp++;
                if(b[j]<=0) tmp=(ll)1e18;
            }
        }

        if(tmp<mx){
            mx=tmp;
            cpy2(n);
        }
    }

    cout<<mx<<"\n";
    for(i=1;i<=n;i++){
        if(c[i]>a[i]) cout<<"+ "<<i<<" "<<c[i]-a[i]<<"\n";
        if(c[i]<a[i]) cout<<"- "<<i<<" "<<a[i]-c[i]<<"\n";
    }
    return 0;
}
