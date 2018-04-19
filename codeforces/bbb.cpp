#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 100009

ll a[mxn];
map<ll,ll>M;

int main(){
    ios_base::sync_with_stdio(0);

    ll n,x,i,ans=0;
    cin>>n>>x;
    for(i=1;i<=n;i++){
        cin>>a[i];
        M[a[i]]++;
    }

    map<ll,ll>::iterator it;
    for(i=1;i<=n;i++){
        ll d=x^a[i];
        if(M[a[i]]>0 && M[d]>0){
            if(a[i]==d){
                ans+=M[d]-1;
            }
            else ans+=M[d];
//            M[a[i]]--;
//            M[d]--;
        }
    }

    cout<<ans/2<<"\n";
    return 0;
}
