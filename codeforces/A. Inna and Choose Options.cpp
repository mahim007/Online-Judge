#include<bits/stdc++.h>
using namespace std;
#define ll long long int

map<ll,ll>M;
string s;
ll a[15];
vector<pair<ll,ll> >V;

int main(){
    ll T,t,i,j,k;
    char ch;
    cin>>T;
    for(t=1;t<=T;t++){
        for(i=1;i<=12;i++){
            cin>>ch;
            if(ch=='O') a[i]=0;
            else a[i]=1;
        } //for(i=1;i<=12;i++) cout<<a[i]; cout<<"\n";

        for(i=1;i<=12;i++){
            if(12LL%i==0LL){
                ll col=12/i;
                for(k=1;k<=12;k++) M[k]=1;

                for(j=1;j<=i;j++){
                    for(k=1;k<=col;k++){
                        M[k]=M[k] && a[(j-1)*col+k];
                    }
                }

                for(j=1;j<=col;j++){
                    if(M[j]==1){
                        V.push_back({i,col});
                        break;
                    }
                }
            }
        }

        cout<<V.size()<<" ";
        for(i=0;i<V.size();i++) cout<<V[i].first<<"x"<<V[i].second<<" ";
        cout<<"\n";
        V.clear();
    }

    return 0;
}
