#include<bits/stdc++.h>
using namespace std;
#define ll long long int
struct data{
    ll pos,d;
    bool operator < (const data& P) const{
        return d<P.d;
    }
};
vector<data>V;

struct res{
    ll x,y;
};
vector<res>ans;

int main(){
    ll n,k,i,j,s,m;
    cin>>n>>k;
    for(i=1;i<=n;i++){
        ll x;
        cin>>x;
        data D;
        D.d=x;
        D.pos=i;
        V.push_back(D);
    }

    sort(V.begin(),V.end()); //for(i=0;i<V.size();i++) cout<<V[i].d<<endl;
    m=0;
    for(i=1;i<=k;i++){
        if((V[n-1].d-1)>=(V[0].d+1)){
            V[n-1].d--;
            V[0].d++;
            res R;
            R.x=V[n-1].pos;
            R.y=V[0].pos;
            ans.push_back(R);
            m++;
            sort(V.begin(),V.end());
        }
        else break;
    }

    sort(V.begin(),V.end());
    s=V[n-1].d-V[0].d;
    cout<<s<<" "<<m<<"\n";
    for(i=0;i<ans.size();i++) cout<<ans[i].x<<" "<<ans[i].y<<"\n";
    //cout<<"\n";
    return 0;
}
