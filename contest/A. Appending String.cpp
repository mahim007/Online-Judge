#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string s,p;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,i,j,k,t,T,sz,m;
    cin>>T;
    for(t=1;t<=T;t++){
        cin>>s;
        sz=s.size();
        for(i=0;i<sz;i++){
            if(s[i]>='a' && s[i]<='z'){
                p+=s[i];
            }
            else if(s[i]>='0' && s[i]<='9'){
                string z=p;
                for(j=1;j<s[i]-'0';j++) p+=z;
            }
        }

        cin>>m;
        sz=p.size(); //cout<<p<<"\n";
        for(i=1;i<=m;i++){
            ll x;
            cin>>x;
            if(x>sz) cout<<-1<<"\n";
            else cout<<p[x-1]<<"\n";
        }

        s.clear();
        p.clear();
    }

    return 0;
}
