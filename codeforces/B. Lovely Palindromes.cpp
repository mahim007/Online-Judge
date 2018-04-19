#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string s;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll i,n;
    cin>>s;
    n=s.size();
    n--;
    cout<<s;
    for(i=n;i>=0;i--) cout<<s[i];
    cout<<"\n";
    return 0;
}
