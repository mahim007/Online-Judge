#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define limit 200009
string s;
ll a[30];

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n,m,i;
    cin>>n>>m;
    cin>>s;
    for(i=0;i<30;i++) a[i]=i;
    for(i=1;i<=m;i++){
        char aa,bb;
        cin>>aa>>bb;
        ll x=aa-'a';
        ll y=bb-'a';
        ll p=x;
        ll q=y;
        while(a[p]!=x){
            p=a[p];
        }

        while(a[q]!=y){
            q=a[q];
        }

        a[p]=y;
        a[q]=x;
    }

    for(i=0;i<n;i++){
        char ch=('a'+a[s[i]-'a']);
        cout<<ch;
    }
    cout<<"\n";
    return 0;
}
