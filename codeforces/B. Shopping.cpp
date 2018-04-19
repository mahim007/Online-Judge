#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll>V;

int main(){
    ll i,j,k,n,m,ans=0,cnt=0;
    cin>>n>>m>>k;
    for(i=1;i<=k;i++){
        ll d;
        cin>>d;
        V.push_back(d);
    }

    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            ll x;
            cin>>x;
            for(ll z=0;z<V.size();z++){
                if(V[z]==x){
                    cnt+=z+1;
                    V.erase(V.begin()+z);
                    V.insert(V.begin(),x);
                }
            }
        }
        ans+=cnt;
        cnt=0;
    }

    cout<<ans<<endl;
    return 0;
}
