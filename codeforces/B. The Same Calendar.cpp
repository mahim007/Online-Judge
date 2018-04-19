#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll leap(ll y){
    return (ll)((y%400)==0 || ((y%4)==0 && (y%100)!=0));
}

int main(){
    ll y;
    cin>>y;
    ll days=365;
    if(leap(y)) days++;
    ll n=y+1;
    while(1){
        if(leap(y)==leap(n) && days%7==0) break;
        days+=365+leap(n);
        n++;
    }

    cout<<n<<endl;
    return 0;
}
