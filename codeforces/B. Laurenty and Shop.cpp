#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define inf 999999999999999
ll a[59],b[59],c[59];


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,i;
    cin>>n;
    for(i=1;i<n;i++) cin>>a[i];
    for(i=0;i<n-1;i++) cin>>b[i];
    for(i=0;i<n;i++) cin>>c[i];

    ll m1,m2;
    m1=m2=inf;

    for(i=1;i<=n;i++) a[i]+=a[i-1];
    for(i=n-2;i>=0;i--) b[i]+=b[i+1];

    for(i=0;i<n;i++){
        ll sum=a[i]+b[i]+c[i];
        if(sum<m1){
            m2=m1;
            m1=sum;
        }
        else m2=min(m2,sum);
    }

    cout<<m1+m2<"\n";
    return 0;
}
