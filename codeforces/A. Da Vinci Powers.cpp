#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n;
    cin>>n;
    n=abs(n);
    n=n%36;
    cout<<(ll)pow(2,n)<<endl;
    return 0;
}
