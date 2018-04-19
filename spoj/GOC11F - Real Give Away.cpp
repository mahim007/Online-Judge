#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string s;

int main(){
    ll ln,i,t,T;
    cin>>T;
    for(t=1;t<=T;t++){
        cin>>s;
    ln=s.size();
    for(i=0;i<ln;i++){
        if(s[i]>='a' && s[i]<='z'){
            s[i]=(s[i]-'a')+'A';
        }
        else{
            s[i]=(s[i]-'A')+'a';
        }
    }

    cout<<s<<"\n";
    }
    return 0;
}
