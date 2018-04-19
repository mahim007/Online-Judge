#include<bits/stdc++.h>
using namespace std;
#define ll long long int

string s[109],ans;
vector<string>V;
map<ll,ll>M;

int main(){
    ll n,m,i,j,k;
    cin>>n>>m;
    for(i=1;i<=n;i++){
        cin>>s[i];
    }

    for(i=1;i<=m;i++){
        ll d;
        cin>>d;
        M[d]=1;
        V.push_back(s[d]);
    }

    if(m==1){
        cout<<"Yes\n";
        cout<<V[0]<<"\n";
        return 0;
    }

    ll sz=V[0].size();
    for(i=0;i<m;i++){
        if(V[i].size()!=sz){
            cout<<"No\n";
            return 0;
        }
    }

    for(i=0;i<sz;i++){
            ll f=0;
        for(j=1;j<m;j++){
            if(V[j][i]!=V[j-1][i]){
                 ans+='?';
                 f=1;
                 break;
            }
        }

        if(f==0) ans+=V[0][i];
    } //cout<<"ans:"<<ans<<"\n";

    ll ff=0,f;
    for(i=1;i<=n;i++){
        f=0;
        if(M[i]==1) continue;
        if(s[i].size()==ans.size()){
            f=1;
            for(j=0;j<ans.size();j++){
                if(ans[j]!=s[i][j] && ans[j]!='?'){
                    f=0;
                    break;
                }
            }

            if(f==1){
                ff=1;
                break;
            }
        }
    }

    if(ff==0){
        cout<<"Yes\n";
        cout<<ans<<"\n";
    }
    else{
        cout<<"No\n";
    }

    return 0;
}
