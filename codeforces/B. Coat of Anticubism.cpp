#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lim 100009
vector<ll>V;
int main(){
    ll i,j,sum=0,d,n;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>d;
        V.push_back(d);
    }

    sort(V.begin(),V.end());
    for(i=0;i<n-1;i++) sum+=V[i];
    cout<<V[n-1]-sum+1<<endl;
    return 0;
}
