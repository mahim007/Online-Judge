#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll BigMod(ll B,ll P,ll M){     ll R=1%M; while(P>0)      {if(P%2==1){R=(R*B)%M;}P/=2;B=(B*B)%M;} return R;} /// (B^P)%M

int main(){
    ll n;
    cin>>n;
    cout<<BigMod(1378,n,10)<<"\n";
    return 0;
}
