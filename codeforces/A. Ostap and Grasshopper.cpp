#include<bits/stdc++.h>
using namespace std;
#define ll long long int

string s;
ll a[109];

int main(){
    ll n,k,i,j,f=0;
    cin>>n>>k;
    cin>>s;


    ll pos;
    for(i=0;i<n;i++){
        if(s[i]=='G') pos=i;
    }

    while(pos+k<n){
        if(s[pos+k]=='T'){
            f=1;
            break;
        }
        else if(s[pos+k]=='#') break;

        pos+=k;
    }

    while(pos-k>=0){
        if(s[pos-k]=='T'){
            f=1;
            break;
        }
        else if(s[pos-k]=='#') break;

        pos-=k;
    }

    if(f==1) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
