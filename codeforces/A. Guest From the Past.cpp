#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
int main(){
    ll n,a,b,c,ans=0,plastic=0,bottle=0;
    cin>>n>>a>>b>>c;
    plastic=n/a;
    if(n>=b){
        bottle=(n-c)/(b-c);
        n-=bottle*(b-c);
    }
    bottle+=n/a;
    cout<<max(plastic,bottle);
    return 0;
}
