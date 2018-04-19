#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string p,q;
int main(){
    ll i,j,k,ans=0;
    cin>>p;
    cin>>q;
    ll sz=q.size();
    ll ln=p.size();
    for(i=0;i<ln;i++){ //cout<<i<<" "<<p.substr(i,sz)<<endl;
        if(p.substr(i,sz)==q){
            ans++;
            i=i+sz;
            i--;
        }
    }
    cout<<ans<<endl;
    return 0;
}
