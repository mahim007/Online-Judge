#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[27];
string s;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie();
    ll n,i,j,k,ans=0;
    cin>>s;
    cin>>k;
    ll mn=-1;
    for(i=0;i<26;i++){
        ll d;
        cin>>a[i];
        if(a[i]>mn) mn=a[i];
    } //cout<<"mn:"<<mn<<endl;

    ll sz=s.size();
    for(i=0;i<sz;i++){
        ans+=(i+1)*(a[s[i]-'a']);
    } //cout<<"1st:"<<ans<<endl;

    for(j=1;j<=k;j++,i++){
        ans+=(i+1)*mn;
    }

    cout<<ans<<"\n";
    return 0;
}
