#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string s,p;
map<char,ll>M;

ll solve(ll last,char ch){
    for(ll i=last+1;i<s.size();i++){
        if(s[i]==ch) return i;
    }

    return -1;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie();

    ll n,i,j,k,ln1,ln2;
    cin>>s;
    cin>>p;
    ln2=p.size();
    ln1=s.size();
    for(i=0;i<ln1;i++){
        M[s[i]]++;
    }

    ll f=1;
    for(i=0;i<ln2;i++){
        if(M[p[i]]==0){
            f=0;
            break;
        }

        M[p[i]]--;
    }

    if(f==0){
        cout<<"need tree\n";
    }
    else{
        ll ff=1;
        ll last=-1;
        for(i=0;i<ln2;i++){
            ll d=solve(last,p[i]);
            if(d==-1){
                if(ln1>ln2){
                    cout<<"both\n";
                }
                else if(ln1==ln2){
                    cout<<"array\n";
                }
                return 0;
            }

            last=d;
        }

        if(ln1>ln2) cout<<"automaton\n";
        else if(ln1==ln2) cout<<"array\n";
    }

    return 0;
}
