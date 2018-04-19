#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mx 65
string s;
ll dp[mx][mx];
ll vis[mx][mx];
ll t;
ll call(ll i,ll j){
    if(i>j) return 0;
    if(i==j) return 1;
    if(vis[i][j]==t) return dp[i][j];
    ll res=0;
    if(s[i]==s[j]){
        res=call(i+1,j)+call(i,j-1)+1;
    }
    else{
        res=call(i+1,j)+call(i,j-1)-call(i+1,j-1);
    }

    vis[i][j]=t;
    dp[i][j]=res;
    return res;
}

int main(){
    ll i,j,k,n,T,ln;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        cin>>s;
        ln=s.size();
        printf("%lld\n",call(0,ln-1));
    }
    return 0;
}
