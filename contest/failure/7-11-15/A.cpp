#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<string>V[5];
int main(){
    ll n,i,j;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        string p,q;
        cin>>p>>q;
        if(q=="captain"){
            V[4].push_back(p);
        }
        else if(q=="man"){
            V[3].push_back(p);
        }
        else if(q=="woman" || q=="child"){
            V[2].push_back(p);
        }
        else{
            V[1].push_back(p);
        }
    }
    for(i=1;i<=4;i++){
        for(j=0;j<V[i].size();j++){
            cout<<V[i][j]<<endl;
        }
    }
    return 0;
}
