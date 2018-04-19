#include<bits/stdc++.h>
using namespace std;
#define ll long long int

struct data{
    ll day,fruit;
    bool operator < (const data& P) const{
        return day<P.day;
    }
};
vector<data>V;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie();
    ll n,i,j,k,ans=0,v;
    cin>>n>>v;
    for(i=1;i<=n;i++){
        ll x,y;
        cin>>x>>y;
        data D;
        D.day=x;
        D.fruit=y;
        V.push_back(D);
    }

    sort(V.begin(),V.end());
    for(i=1;i<=3001;i++){
        k=v;
        for(j=0;j<n;j++){
            if(i==V[j].day || i==V[j].day+1){
                ll mn=min(V[j].fruit,k);
                ans+=mn;
                k-=mn;
                V[j].fruit-=mn;
            }
        }
    }

    cout<<ans<<"\n";
    return 0;
}
