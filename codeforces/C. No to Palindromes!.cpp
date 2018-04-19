#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string s;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie();
    ll n,i,j,k;
    cin>>n>>k;
    cin>>s;
    i=n-1;
    while(i>=0 && i<n){
        s[i]++;
        if(s[i]>('a'+k-1)){
            s[i]=96;
            i--;
            continue;
        }
        if(i>0 && s[i]==s[i-1]) continue;
        if(i>1 && s[i]==s[i-2]) continue;
        i++;
    }
    if(i<0) cout<<"NO\n";
    else cout<<s<<"\n";
    return 0;
}
