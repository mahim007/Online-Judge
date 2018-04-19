#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n,d,cnt=0,i,j;
    cin>>n>>d;
    for(i=1;i<=n;i++){
        if(d%i==0 && (d/i)<=n) cnt++;
    }

    cout<<cnt<<endl;
    return 0;
}
