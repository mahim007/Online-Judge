#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll n=72;
vector<ll>V,P;
ll tag[100];

void sieve(){
    //ll n=600;
    tag[0]=tag[1]=1;
    for(ll i=4;i<n;i=i+2) tag[i]=1;
    for(ll i=3;i*i<n;i=i+2){
        if(tag[i]==0){
            for(ll j=i*i;j<n;j=j+i+i)
                tag[j]=1;
        }
    }

    for(ll i=1;i<n;i++){
        if(tag[i]==0){
            V.push_back(i);
        }
    }
}

void solve(){
    for(ll i=1;i<=3000;i++){
        ll x=i;
        map<ll,ll>M;
        for(ll j=0;V[j]*V[j]<=x;j++){
            if(x%V[j]==0){
                M[V[j]]++;
                while(x%V[j]==0){
                    M[V[j]]++;
                    x=x/V[j];
                }
            }
        }

        if(x>1){
            M[x]++;
        }

        if(M.size()>=3){
            P.push_back(i);
        }
    }
    sort(P.begin(),P.end());
    //cout<<"P sz:"<<P.size()<<"\n";
}

int main(){
    sieve();
    solve();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll T,t,d;
    cin>>T;
    for(t=1;t<=T;t++){
        cin>>d;
        cout<<P[d-1]<<"\n";
    }

    return 0;
}
