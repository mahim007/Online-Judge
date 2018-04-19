#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define inf 1e13

string t;
ll B,S,C;
ll b,s,c;
ll pb,ps,pc;
ll r;

ll fun(ll mid){
    ll sum=0;
    if(B*mid>b)
    sum+=-((b-(B*mid))*pb);

    if(S*mid>s)
    sum+=-((s-(S*mid))*ps);

    if(C*mid>c)
    sum+=-((c-(C*mid))*pc);

    if(sum<=r) return 1;
    return 0;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin>>t;
    cin>>b>>s>>c;
    cin>>pb>>ps>>pc;
    cin>>r;

    ll sz=t.size();
    for(ll i=0;i<sz;i++){
        if(t[i]=='B') B++;
        else if(t[i]=='S') S++;
        else if(t[i]=='C') C++;
    }

    ll low,high,mid;
    low=0;
    high=inf;
    ll ans=0;
    while(low<=high){
        mid=(low+high)/2;
        if(fun(mid)==1){
            ans=mid;
            low=mid+1;
        }
        else high=mid-1;
    }

    cout<<ans<<"\n";
    return 0;
}
