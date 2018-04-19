#include<bits/stdc++.h>
using namespace std;
#define ll long long int
map<ll,ll>M;
struct data{
    ll d,pos;

    bool operator < (const data& P) const{
        return d<P.d;
    }
};
vector<data>V;

void print(ll n){
    for(ll i=0;i<n;i++) cout<<V[i].pos<<" ";
    cout<<"\n";
}

int main(){
    ll n,i,p=0;
    cin>>n;
    for(i=1;i<=n;i++){
        ll x;
        cin>>x;
        data D;
        D.d=x;
        D.pos=i;
        V.push_back(D);
        M[x]++;
        if(M[x]>1){
            p+=M[x];
        }
    }
    if(p<3){
        cout<<"NO\n";
        return 0;
    }
    sort(V.begin(),V.end());
    cout<<"YES\n";
    print(n);
    ll k=1;
    for(i=1;i<n;i++){
        if(V[i].d==V[i-1].d){
            swap(V[i],V[i-1]);
            k++;
            print(n);
        }

        if(k==3) break;
    }

    return 0;
}
