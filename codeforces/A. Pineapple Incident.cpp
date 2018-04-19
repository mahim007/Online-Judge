#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t,s,x;
    cin>>t>>s>>x;
    if(x<t) cout<<"NO\n";
    else if(x==t) cout<<"YES\n";
    else if((x-t)%s==0 && x>t) cout<<"YES\n";
    else if((x-t-1)%s==0 && x>(t+1)) cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}
