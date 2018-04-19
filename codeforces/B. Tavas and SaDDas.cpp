#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define N 1000000000
vector<ll>V;

void calculate(ll x){
    if(x>N) return;
    V.push_back(x);
    calculate(x*10+4);
    calculate(x*10+7);
}

int main(){
    ll x=0;
    calculate(x);
    sort(V.begin(),V.end());
    V.resize(unique(V.begin(),V.end())-V.begin());
    ll n;
    cin>>n;
    cout<<lower_bound(V.begin(),V.end(),n)-V.begin()<<endl;
    return 0;
}
