#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n,i,a=0,b=0;
    cin>>n;
    for(i=1;i<=n;i++){
        ll x,y;
        cin>>x>>y;
        if(x>y) a++;
        else if(y>x) b++;
    }

    if(a>b) cout<<"Mishka\n";
    else if(b>a) cout<<"Chris\n";
    else if(a==b) cout<<"Friendship is magic!^^\n";
    return 0;
}
