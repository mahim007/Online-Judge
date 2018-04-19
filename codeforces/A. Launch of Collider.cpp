#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mx 200009
ll arr[mx];
char s[mx];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    ll n,i,j,k=0,ans=1e10;
    cin>>n;
    for(i=1;i<=n;i++) cin>>s[i];
    for(i=1;i<=n;i++) cin>>arr[i];

    ll fr=0,fl=0;
    for(i=2;i<=n;i++){
        if(s[i]=='L' && s[i-1]=='R'){
            k=1;
            ans=min(ans,((arr[i]-arr[i-1])/2));
        }
    }


    if(k==0) cout<<-1<<"\n";
    else cout<<ans<<"\n";

    return 0;
}
