#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<pair<ll,ll> >V;

void printall(ll k){
    cout<<(ll)V.size()-k<<" ";
    for(ll i=k;i<V.size();i++){
        cout<<V[i].first<<" "<<V[i].second<<" ";
    }
    cout<<"\n";
}

void print1(ll k){
    cout<<"2 ";
    ll i=k;
    cout<<V[i].first<<" "<<V[i].second<<" ";
    cout<<V[i+1].first<<" "<<V[i+1].second<<" ";
    cout<<"\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll r,c,n,i,j,k;
    cin>>r>>c>>n;
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            if(i&1){
                V.push_back(make_pair(i,j));
            }
            else{
                V.push_back(make_pair(i,c-j+1));
            }
        }
    }

    k=0;
    while(n){
        if(n==1){
            printall(k);
        }
        else{
            print1(k);
            //V.erase(V.begin(),V.begin()+2);
            k+=2;
        }
        n--;
    }

    return 0;
}
