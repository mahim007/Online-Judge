#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string s;

int main(){
    ll n,i,j,ln;
    cin>>s;
    ln=s.size();
    ll f=0;
    for(i=0;i<ln;i++){
        if(f==0 && s[i]>'a'){
            f=1;
            s[i]--;
        }
        else if(f==1 && s[i]=='a'){
            break;
        }
        else if(f==1 && s[i]>'a'){
            s[i]--;
        }
    }

    if(f==0){
        if(s[ln-1]=='a'){
            s[ln-1]='z';
        }
        else s[ln-1]--;
    }
    cout<<s<<"\n";
    return 0;
}
