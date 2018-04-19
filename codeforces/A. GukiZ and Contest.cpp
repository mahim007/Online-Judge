#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define N 2009
ll a[N],b[N];
map<ll,ll>M;

int main(){
    ll i,j,k,n,d;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a[i];
        b[i]=a[i];
    }

    sort(b+1,b+n+1); //for(i=1;i<=n;i++) //cout<<b[i]<<" "; cout<<endl;
    k=1;
    for(i=n;i>=1;i--){
        d=b[i];
        if(M[d]==0){
            M[d]=k;
        }
        k++;
    }

    for(i=1;i<=n;i++) cout<<M[a[i]]<<" ";
    cout<<endl;
    return 0;
}
