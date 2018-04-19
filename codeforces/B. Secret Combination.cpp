#include<bits/stdc++.h>
using namespace std;
#define ll long long int
map<string,ll>M;
string s,res;
ll n;

void increase(){
    ll i;
    for(i=0;i<n;i++){
        if(s[i]<'9') s[i]++;
        else s[i]='0';
    }
}

void shift(){
    ll ch=s[n-1];
    for(ll i=n-1;i>0;i--){
        s[i]=s[i-1];
    }
    s[0]=ch;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll i,j;
    cin>>n;
    cin>>s;
    M[s]=1;
    res=s;
    while(1){
        while(s[n-1]!='0'){
        increase();
        if(M[s]==0){
            M[s]=1;
            if(s<res) res=s;
        }
        else break;
        }
        shift();
        if(M[s]==0){
            M[s]=1;
            if(s<res) res=s;
        }
        else break;
    }

    cout<<res<<endl;
    return 0;
}
