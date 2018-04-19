#include<bits/stdc++.h>
using namespace std;
#define ll long long int
map<string,ll>M;
string s,p;

int main(){
    ios_base::sync_with_stdio(0);
    ll T,t,n,i,mx;
    cin>>T;
    for(t=1;t<=T;t++){
        mx=0;
        cin>>n;
        for(i=1;i<=n;i++){
            cin>>s;
            M[s]++;
            if(M[s]>mx){
                mx=M[s];
                p=s;
            }
        }

        cout<<"Case "<<t<<": "<<p<<"\n";
        M.clear();
        s.clear();
        p.clear();
    }

    return 0;
}
