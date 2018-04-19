#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string p,q;
map<string,string>A,B;

int main(){
    ios_base::sync_with_stdio(0);
    ll n,m,i;
    cin>>n>>m;
    for(i=1;i<=m;i++){
        cin>>p>>q;
        A[p]=q;
        B[q]=p;
    }

    for(i=1;i<=n;i++){
        string x;
        cin>>x;
        p=A[x];
        q=B[A[x]];
        if(p.size()<q.size()) cout<<p<<" ";
        else cout<<q<<" ";
    }

    cout<<"\n";
    return 0;
}
