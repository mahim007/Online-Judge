#include<bits/stdc++.h>
using namespace std;
#define ll long long int

string s;
vector<ll>V;

int main(){
    ll n,i,j,k,t=0;
    cin>>n;
    cin>>s;
    ll b=0;
    ll cnt=0;
    for(i=0;i<n;i++){
        if(s[i]=='W'){
            b=0;
            if(cnt>0){
                V.push_back(cnt);
            }
            cnt=0;

        }
        else if(s[i]=='B' && b==0){
            b=1;
            cnt=1;
        }
        else if(s[i]=='B' && b==1){
            cnt++;
        }
    }
    if(cnt>0) V.push_back(cnt);
    cout<<V.size()<<"\n";
    for(i=0;i<V.size();i++) cout<<V[i]<<" ";
    cout<<"\n";
    return 0;
}
