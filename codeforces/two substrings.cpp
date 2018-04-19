#include<bits/stdc++.h>
using namespace std;
string s;
#define ll long long int
int main(){
    ll i,j,k,ln;
    cin>>s;
    ln=s.size();
    ll ab=0;
    ll ba=0;
    ll flag=1;
    for(i=0;i<ln;i++){
        if(s[i]=='*')
            continue;
        if(ab+1==ba || ba+1==ab){
            flag=0;
            break;
        }

        if(s[i]=='A' && s[i+1]=='B'){
            ab=i+1;
            continue;
        }
        if(s[i]=='B' && s[i+1]=='A'){
            ba=i+1;
            continue;
        }
    } cout<<ab<<" "<<ba<<endl;
    if(ab!=0 && ba!=0 && flag!=0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
