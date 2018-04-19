#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string s;
int main(){
    ll i,j,k,n;
    for(i=1;i<=400;i++){
        stringstream ss;
        ss<<i;
        s+=ss.str();
    }

    cin>>n;
    cout<<s[n-1]<<endl;
    return 0;
}
