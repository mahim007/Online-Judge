#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string s;
int main(){
    ll t,i,j,k,ln,n,m;
    bool flag;
    while(scanf("%lld %lld",&n,&m)==2){
        cin>>s;
        ln=s.size();
        for(k=1;k<=m;k++){
            flag=0;
            for(i=0;i<ln-1;i++){
            if(flag==1){
                flag=0;
                continue;
            }
            if(s[i]=='B' && s[i+1]=='G'){
                swap(s[i],s[i+1]);
                flag=1;
            }
        }
        }
        cout<<s<<endl;
        s.clear();
    }
    return 0;
}
