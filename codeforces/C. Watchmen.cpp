#include<bits/stdc++.h>
using namespace std;
#define ll long long int
map<pair<ll,ll>,ll>M;
map<ll,ll>X;
map<ll,ll>Y;

int main(){
    ll n,x,y,i,cnt=0;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>x>>y;
        cnt+=X[x]++;
        cnt+=Y[y]++;
        cnt-=M[make_pair(x,y)]++;
    }

    cout<<cnt<<endl;
    return 0;
}
