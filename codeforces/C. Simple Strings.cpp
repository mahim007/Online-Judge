#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string s;
int main(){
    ll i,j,k,n;
    cin>>s;
    n=s.size();
    if(n==1){
        cout<<s<<endl;
    }
    else{
        for(i=1;i<n;i++){
            if(s[i]==s[i-1] && s[i]==s[i+1]){
                s[i]++;
                if(s[i]>'z') s[i]='a';
            }
            else if(s[i]==s[i-1]){
                s[i]++;
                if(s[i]>'z') s[i]='a';
                if(s[i]==s[i+1])
                    s[i]++;
                if(s[i]>'z') s[i]='a';
            }
        }

        cout<<s<<endl;
    }

    return 0;
}
