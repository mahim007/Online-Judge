#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 100009
#define eps 1e-9

struct data{
    ll x,y,z,id;
    bool operator < (const data& P) const{
        if(x!=P.x) return x>P.x;
        if(y!=P.y) return y>P.y;
        return z>P.z;
    }
};

vector<data>V;
vector<ll>ans;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n,i,j,k;
    double mx=0.0;
    cin>>n;
    for(i=1;i<=n;i++){
        ll x,y,z;
        cin>>x>>y>>z;
        data D;
        D.id=i;

        D.x=x;
        D.y=y;
        D.z=z;
        V.push_back(D);

        D.x=y;
        D.y=x;
        D.z=z;
        V.push_back(D);


        D.x=z;
        D.y=y;
        D.z=x;
        V.push_back(D);

        D.x=y;
        D.y=z;
        D.z=x;
        V.push_back(D);


        D.x=x;
        D.y=z;
        D.z=y;
        V.push_back(D);

        D.x=z;
        D.y=x;
        D.z=y;
        V.push_back(D);
    }

    sort(V.begin(),V.end());

    ll sz=V.size();
    for(i=0;i<sz;i++){
        ll mn=min(V[i].x,min(V[i].y,V[i].z));
        double d=(double)mn/2.0;
        if((d-mx)>eps){
            mx=d;
            ans.clear();
            ans.push_back(V[i].id);
        }

        ll a,b,c;
        a=V[i].x;
        b=V[i].y;
        c=V[i].z;

        ll p,q,r;


        for(j=i+1;j<=(i+1+20) && j<sz;j++){
            if(V[i].id==V[j].id) continue;

            p=V[j].x;
            q=V[j].y;
            r=V[j].z;

            if(p<a || q<b) break;
            else if(p==a && q==b){
                mn=min(p,min(q,r+c));
                d=(double)mn/2.0;
                if((d-mx)>eps){
                    mx=d;
                    ans.clear();
                    ans.push_back(V[i].id);
                    ans.push_back(V[j].id);
                }
            }
        }
    }

    cout<<ans.size()<<"\n";
    for(i=0;i<ans.size();i++) cout<<ans[i]<<" ";
    cout<<"\n";

    return 0;
}
