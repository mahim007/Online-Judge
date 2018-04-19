#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    string p,q;
    ll ln,i,ans;
    cin>>p;
    ln=p.size();
    ll fnd=0;
    for(i=0;i<ln;i++){
        if(p[i]>='2'){
            fnd=1;
            break;
        }
        if(p[i]=='0')
            q+='0';
        else
            q+='1';
    }
    if(fnd==1){
        for(;i<ln;i++)
            q+='1';
    }
    ll pw=0;
    ans=0; //cout<<q<<endl;
    for(i=ln-1;i>=0;i--){
        ans+=(q[i]-'0')*pow(2,pw);
        pw++;
    }
    cout<<ans<<endl;
    return 0;
}
