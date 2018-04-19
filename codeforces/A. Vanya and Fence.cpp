#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n,h,cnt=0,i,d;
    cin>>n>>h;
    for(i=1;i<=n;i++){
        cin>>d;
        if(d>h) cnt+=2;
        else cnt+=1;
    }

    cout<<cnt<<endl;
    return 0;
}
