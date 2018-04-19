#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 200009

string s;
ll a[mxn];
ll n;

ll fun(ll pos,char lst){
    if(pos<0 || pos>=n) return 0;
    if(a[pos]!=-1) return a[pos];
    if((lst=='>' && s[pos]=='<') || (s[pos]=='>' && lst=='<') ) return 1;

    if(s[pos]=='>'){
        a[pos]=fun(pos+1,'>');
    }
    else{
        a[pos]=fun(pos-1,'<');
    }

    return a[pos];
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin>>n;
    cin>>s;
    ll i;
    memset(a,-1,sizeof a);
    for(i=0;i<n;i++){
        if(a[i]==-1){
            ll b=fun(i,'?');
        }
    }

    ll ans=0;
    for(i=0;i<n;i++){
        if(a[i]==0) ans++;
    }

    cout<<ans<<"\n";
    return 0;
}
