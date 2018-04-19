#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string s;
ll dp[5009][39];

ll call(ll pos,ll val){
    if(pos==-1) return 1;
    if(dp[pos][val]!=-1) return dp[pos][val];
    ll p1=0,p2=0;
    if((val*10+(s[pos]-'0'))<=26){
        p1=call(pos-1,(val*10+(s[pos]-'0')));
    }
    p2=call(pos-1,s[pos]-'0');
    return dp[pos][val]=p1+p2;
}

int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);

    ll ln,i,j,k;
    while(cin>>s){
        if(s=="0") break;
        ln=s.size();
        reverse(s.begin(),s.end());
        memset(dp,-1,sizeof dp);
        ll ans=call(ln-1,30);
        cout<<ans<<"\n";
    }

    return 0;
}
