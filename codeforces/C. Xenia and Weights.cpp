#include<bits/stdc++.h>
using namespace std;
#define ll long long int

vector<ll>V;
ll player[2];
string s;

void fun(ll m,ll p,ll lst){
    if(m==0){
        cout<<"YES\n";
        for(ll i=0;i<V.size();i++) cout<<V[i]<<" ";
        cout<<"\n";
        exit(0);
    }

    for(ll i=0;i<10;i++){
        if(i==lst || s[i]=='0') continue;
        if(player[p]+(i+1)>player[p^1]){
            player[p]+=(i+1);
            V.push_back(i+1);
            fun(m-1,p^1,i);
            V.pop_back();
            player[p]-=(i+1);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll m;
    cin>>s;
    cin>>m;
    fun(m,0,-1);
    cout<<"NO\n";
    return 0;
}
