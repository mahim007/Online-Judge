#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 1009

string s;
map<ll,ll>M;

int main(){
    ll n,m,i,j,k,f=1;
    cin>>n>>m;
    for(j=1;j<=n;j++){
        cin>>s;
        ll dwrf,candy;
        for(i=0;i<m;i++){
            if(s[i]=='G') dwrf=i;
            if(s[i]=='S') candy=i;
        }

        if(candy>dwrf){
            M[candy-dwrf]=1;
        }
        else{
            f=0;
        }
    }

    if(f==0) cout<<-1<<"\n";
    else cout<<M.size()<<"\n";

    return 0;
}
