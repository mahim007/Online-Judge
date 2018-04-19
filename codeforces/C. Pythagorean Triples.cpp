#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n,k,m;
    cin>>n;
    if(n<=2){
        cout<<"-1\n";
        return 0;
    }
    if(n%2==0){
        k=((n*n)/4)+1;
        m=k-2;
        cout<<m<<" "<<k<<"\n";
    }
    else{
        k=((n*n)+1)/2;
        m=k-1;
        cout<<m<<" "<<k<<"\n";
    }

    return 0;
}
