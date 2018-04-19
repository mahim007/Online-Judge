#include<bits/stdc++.h>
using namespace std;
#define ll long long int

struct data{
    ll pos,val;
    bool operator < (const data &p) const{
        return p.val<val;
    }
};

vector<data>V;

int main(){
    ll n,i,j,k,d;
    cin>>n;
    ll player=n/2;
    for(i=1;i<=n;i++){
        cin>>d;
        data D;
        D.pos=i;
        D.val=d;
        V.push_back(D);
    }

    sort(V.begin(),V.end());

    for(i=0;i<n;i=i+2){
        //cout<<<<" "<<<<"\n";
        ll a,b;
        a=V[i].pos;
        b=V[n-i-1].pos;
        if(a<b) cout<<a<<" "<<b<<"\n";
        else cout<<b<<" "<<a<<"\n";
    }

    return 0;
}
