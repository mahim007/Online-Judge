#include<bits/stdc++.h>
using namespace std;
#define ll long long int

struct data{
    ll a,b;

    bool operator < (const data& P) const{
        if(a!=P.a) return a<P.a;
        return b<P.b;
    }
};
vector<data>V;

int main(){
    ios_base::sync_with_stdio(0);
    ll n,i,j,k;
    cin>>n;
    for(i=1;i<=n;i++){
        ll x,y;
        cin>>x>>y;
        data D;
        D.a=x;
        D.b=y;
        V.push_back(D);
    }

    sort(V.begin(),V.end()); //for(i=0;i<n;i++) cout<<V[i].a<<" "<<V[i].b<<endl;
    ll ans=-1;
    for(i=0;i<n;i++){
        if(ans<=V[i].b) ans=V[i].b;
        else ans=V[i].a;
    }

    cout<<ans<<"\n";
    return 0;
}
