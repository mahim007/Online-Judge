#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 200009

ll aa[mxn];
ll bb[mxn];
ll c[mxn];
string s;

int main(){
    ios_base::sync_with_stdio(0);

    ll n,a,b,k,i,j,ans=0;
    cin>>n>>a>>b>>k;
    cin>>s;
    for(i=0;i<n;i++){
        if(s[i]=='1'){
            aa[i+1]=1;
            bb[i+1]=1;
        }
    } //for(i=1;i<=n;i++) cout<<aa[i]<<" ";cout<<"\n";

    for(i=1;i<=n;i++){
        bb[i]+=bb[i-1];
    } //cout<<"here\n";

    //for(i=1;i<=n;i++) cout<<bb[i]<<" ";cout<<"\n";

    for(i=1;i<=n;i++){
        if(aa[i]==0){
            if(i+b-1<=n && bb[i+b-1]-bb[i]==0){
                ans++;
                c[i+b-1]=1;
                i=i+b;
                i--;
            }
        }
    }

    //cout<<ans<<"\n";
    cout<<ans+1-a<<"\n";
    j=0;
    for(i=1;i<=n;i++){
        if(c[i]==1 && j<(ans+1-a)){
            j++;
            cout<<i<<" ";
        }
    }

    cout<<"\n";
    return 0;
}
