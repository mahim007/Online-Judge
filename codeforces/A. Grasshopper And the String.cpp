#include<bits/stdc++.h>
using namespace std;
#define ll long long int

string s;

int main(){
    ll mx=0,i,j,sz;
    cin>>s;
    sz=s.size();
    j=-1;
    for(i=0;i<sz;i++){
        if(s[i]=='A' || s[i]=='E' ||s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y'){
            mx=max(mx,i-j);
            j=i;
        }
    }

    mx=max(mx,i-j);
    cout<<mx<<"\n";
    return 0;
}
