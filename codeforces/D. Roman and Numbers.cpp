#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll cnt,a[20],m,sz;
string s;
vector<char>V;
map<ll,ll>M;

void fun(){
    if(V.size()==sz){
        ll num=0;
        for(ll i=0;i<sz;i++){
            num=num*10+(V[i]-'0');
        }

        if(num%m==0 && M.find(num)==M.end()){
            cnt++;
            M[num]=1;
            //cout<<num<<"\n";
        }
        return;
    }

    for(ll i=0;i<sz;i++){
        if(a[i]==0){
            if(s[i]=='0' && V.size()==0) continue;
            a[i]=1;
            V.push_back(s[i]);
            fun();
            a[i]=0;
            V.pop_back();
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);

    cin>>s>>m;
    sz=s.size();
    fun();
    cout<<cnt<<"\n";

    return 0;
}
