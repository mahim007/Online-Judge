#include<bits/stdc++.h>
using namespace std;
#define ll long long int
struct data{
    ll tola,tym;
    bool operator < (const data& P) const{
        if(tola<P.tola) return true;
        return false;
    }
};
vector<data>V;
int main(){
    ll n,s,i,j,k,ans=0;
    cin>>n>>s;
    for(i=1;i<=n;i++){
        ll x,y;
        cin>>x>>y;
        data D;
        D.tola=x;
        D.tym=y;
        V.push_back(D);
    }

    sort(V.begin(),V.end()); //for(i=0;i<n;i++) cout<<V[i].tola<<" "<<V[i].tym<<endl;
    for(i=n-1;i>=0;i--){
        if(s==V[i].tola){
            if(V[i].tym> ans){
                ans+=V[i].tym-ans;
            }
        }
        else if(s>V[i].tola){
            ll d=s-V[i].tola;
            ans+=d;
            s=s-d;
            if(V[i].tym>ans){
                ans+=V[i].tym-ans;
            }
        }
    }
    if(s!=0){
        ans+=s;
    }

    cout<<ans<<endl;
    return 0;
}
