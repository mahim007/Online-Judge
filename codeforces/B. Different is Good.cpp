#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string s;
map<char,ll>M;
int main(){
    ll n,ln,cnt=0,ans=0,i,nw=0;
    cin>>ln;
    cin>>s;
    for(i=0;i<ln;i++){
        if(M[s[i]]==0){
            nw++;
            M[s[i]]++;
        }
        else{
            cnt++;
            M[s[i]]++;
        }
    }
    if(cnt+nw>26) ans=-1;
    else ans=cnt;
    cout<<ans<<endl;
    return 0;
}
