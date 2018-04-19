#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll cnt=0,a,b,i,j,d;
    cin>>a>>b;
    for(i=0;(1LL<<i)/2<=b;i++){
        for(j=0;j<=i-2;j++){
            d=(1LL<<i)-1-(1LL<<j);
            if(d>=a && d<=b) cnt++;
        }
    }

    cout<<cnt<<endl;
    return 0;
}
