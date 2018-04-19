#include<bits/stdc++.h>
using namespace std;
#define ll long long int
//ll a[509];

int main(){
    ll n,i,j,k,ans,a,b,c;
    cin>>n;
    if(n==2) cout<<1<<"\n";
    else{
        a=1;
        b=2;
        for(i=2;;i++){
            c=a+b;
            a=b;
            b=c;
            if(c>n) break;
        }

        cout<<i-1<<"\n";
    }

    return 0;
}
