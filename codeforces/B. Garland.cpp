#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 1009

string s,p;

ll a[mxn],b[mxn];

int main(){
    ios_base::sync_with_stdio(0);

    ll n,i,j,k,ans=0;
    //cin>>n;
    cin>>s;
    cin>>p;

    memset(a,-1,sizeof a);
    memset(b,-1,sizeof b);

    for(i=0;i<s.size();i++){
        ll d=s[i]-'a';
        if(a[d]==-1) a[d]=0;
        a[d]++;
    }

    for(i=0;i<p.size();i++){
        ll d=p[i]-'a';
        if(b[d]==-1) b[d]=0;
        b[d]++;
    }

    ll f=1;
    for(i=0;i<26;i++){ //cout<<a[i]<<" "<<b[i]<<"\n";
        if(b[i]==-1) continue;

        if(a[i]==-1){
            f=0;
            break;
        }
        ans+=min(a[i],b[i]);
        a[i]-=min(a[i],b[i]);
    }

    if(f==0) cout<<-1<<"\n";
    else{
        cout<<ans<<"\n";
    }

    return 0;
}
