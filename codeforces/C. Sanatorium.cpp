#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll a[4];

int main(){
    ll x,y;
    cin>>a[1]>>a[2]>>a[3];
    sort(a+1,a+1+3);
    x=a[3]-a[1];
    y=a[3]-a[2];
    x--;
    if(x<0) x=0;
    y--;
    if(y<0) y=0;
    cout<<x+y<<"\n";
    return 0;
}
