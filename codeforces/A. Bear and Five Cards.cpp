#include<bits/stdc++.h>
using namespace std;
#define ll long long int
map<ll,ll>M;
int main(){
    ll i,j,k,sum=0;
    for(i=1;i<=5;i++){
        ll d;
        cin>>d;
        M[d]++;
        sum+=d;
    }

    ll mx=0;
    map<ll,ll>::iterator it;
    for(it=M.begin();it!=M.end();it++){
        if(it->second>=3){
            if(mx<(it->first*3)){
                mx=it->first*3;
            }
        }
        else if(it->second>=2){
            if(mx<(it->first*2)){
                mx=it->first*2;
            }
        }
    }

    cout<<sum-mx<<endl;
    return 0;
}
