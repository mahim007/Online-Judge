#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n,i,s=0;
    cin>>n;
    for(i=1;i<=n;i++){
        s+=(i*(i+1))/2;
        if(s>=n){
            break;
        }
    }

    if(s==n) cout<<i<<"\n";
    if(n<s) cout<<i-1<<"\n";
    return 0;
}
