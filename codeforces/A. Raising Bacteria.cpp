#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n,ans=0;
    cin>>n;
    while(n>=1){
        if(n%2) ans++;
        n=n/2;
    }
    cout<<ans<<"\n";
    return 0;
}
