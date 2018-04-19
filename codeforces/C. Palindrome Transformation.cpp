#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string s;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,p,l=-1,r=0,i,j,ans=0;
    cin>>n>>p;
    cin>>s;
    n--,p--;
    if(p>n/2) p=n-p;
    for(i=0;i<=n/2;i++){
        if(s[i]!=s[n-i]){
            ll dif=abs(s[i]-s[n-i]);
            ans+=min(dif,26-dif);
            if(l<0) l=i;
            else r=i;
        }
    }

    ans+=min(abs(p-l),abs(p-r));
    ans+=max((r-l),0LL);
    cout<<(l<0? 0: ans)<<"\n";
    return 0;
}
