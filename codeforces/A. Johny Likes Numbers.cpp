#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n,k,i,d;
    cin>>n>>k;
    for(i=n/k;;i++){
        if((k*i)>n){
            cout<<k*i<<endl;
            break;
        }
    }

    return 0;
}
