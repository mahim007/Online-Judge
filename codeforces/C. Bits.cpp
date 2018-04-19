#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[62];

int main(){
    ll n,a,b,i,j;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a>>b;
        for(j=0;j<=64;j++){
            if((a|(1LL << j))<=b){
                a|=(1LL << j);
            }
            else break;
        }

        cout<<a<<"\n";
    }

    return 0;
}
