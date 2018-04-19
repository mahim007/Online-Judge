#include<bits/stdc++.h>
using namespace std;
#define ll long long int

map<char,ll>M;

int main(){
    ll n,ans=0;
    char ch;

    M['f']=1;
    M['e']=2;
    M['d']=3;
    M['a']=4;
    M['b']=5;
    M['c']=6;

    cin>>n>>ch;
    if(n%4==0 || n%4==2){
        ans+=7;
    }

    ans+=M[ch];

    ans+=((n-1)/4)*16;
    cout<<ans<<"\n";
    return 0;

}
