#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll a,b,i,ans=0,root;
    cin>>a>>b;
    if(b==a) cout<<"infinity\n";
    else if(b>a) cout<<"0\n";
    else{
            ll n=a-b;
        root=sqrt(n);
        for(i=1;i<=root;i++){
            if(n%i==0 && i>b) ans++;
            if((n%(n/i))==0 && (n/i)>b && i!=(n/i)) ans++;
        }

        cout<<ans<<"\n";
    }

    return 0;
}
