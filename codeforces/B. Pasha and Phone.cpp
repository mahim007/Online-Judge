#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define nfs ios_base::sync_with_stdio(0),cin.tie(0);cout.tie(0);

ll a[100009],b[100009];
ll ten[10];
int main(){
    nfs;
    ll n,k,i,j,ans;
    ten[0]=1;
    for(i=1;i<10;i++) ten[i]=ten[i-1]*10;
    cin>>n>>k;
    for(i=1;i<=n/k;i++) cin>>a[i];
    for(i=1;i<=n/k;i++) cin>>b[i];
    ans=1;
    ll tmp;
    for(i=1;i<=n/k;i++){
        tmp=((ten[k]-1)/a[i])-(((ten[k-1]*(b[i]+1))-1)/a[i])+(max(((ten[k-1]*b[i])-1),0LL)/a[i]);
        if(b[i]!=0) tmp++;
        ans=(ans*tmp)%mod;
    }

    cout<<ans<<"\n";
    return 0;
}
