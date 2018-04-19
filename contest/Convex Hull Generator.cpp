#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n,i,j,k;
    while(cin>>n){
        k=2;
        for(i=1;i<=n/2;i++){
            cout<<i<<" "<<k<<endl;
            k++;
        }
        for(;i<=n;i++){
            cout<<i<<" "<<k<<endl;
            k--;
        }
    }

    return 0;
}
