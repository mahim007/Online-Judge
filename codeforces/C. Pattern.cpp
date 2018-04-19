#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 100009

string s[mxn],p;
map<char,ll>M;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    ll n,ln,i,j,k;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>s[i];
    }

    ln=s[1].size();
    p.clear();
    for(i=0;i<ln;i++){
        M.clear();
        for(j=1;j<=n;j++){
            if(s[j][i]>='a' && s[j][i]<='z'){
                M[s[j][i]]=1;
            }
        }

        ll sz=M.size();
        if(sz==0){
            p+='a';
        }
        else if(sz==1){
            map<char,ll>::iterator it;
            it=M.begin();
            p+=it->first;
        }
        else if(sz>1){
            p+='?';
        }
    }

    cout<<p<<"\n";
    return 0;
}
