#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string s;

int main(){
    ios_base::sync_with_stdio(0);
    ll n,i,j,k;
    cin>>s;
    ll sz=s.size();
    cin>>k;
    for(i=0;i<sz-1;i++){
        ll l=i;
        ll r=min(l+k,sz-1);
        char d='0';
        ll pos=-1;
        for(j=l+1;j<=r;j++){
            if(s[j]>s[i] && s[j]>d){
                d=s[j];
                pos=j;
            }
        }

        if(pos!=-1){
            for(j=pos;j>i;j--){
                swap(s[j],s[j-1]);
                k--;
            }
        }
    }

    cout<<s<<"\n";
    return 0;
}
