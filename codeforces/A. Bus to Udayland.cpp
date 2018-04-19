#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string s[1009];
int main(){
    ll n,i,j,f=0;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>s[i];
        if(f==0 && s[i][0]=='O' && s[i][1]=='O'){
            f=i;
            s[i][0]='+';
            s[i][1]='+';
        }

            if(f==0 && s[i][3]=='O' && s[i][4]=='O'){
            f=i;
            s[i][3]='+';
            s[i][4]='+';
        }
    }
    if(f==0){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
    for(i=1;i<=n;i++){
        cout<<s[i]<<"\n";
    }
    }

    return 0;
}
