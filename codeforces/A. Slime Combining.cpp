#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll i,j,k,n,sz;
    scanf("%lld",&n);
    vector<ll>V;
    for(i=1;i<=n;i++){
        V.push_back(1); //cout<<V.begin()<<endl;
        while(1){
            sz=V.size();
            if(sz<=1) break;
            if(V[sz-1]==V[sz-2]){
                V[sz-2]++;
                V.erase(V.begin()+(sz-1));
            }
            else{
                break;
            }
        }
    }

    sz=V.size();
    for(i=0;i<sz;i++) printf("%lld ",V[i]);
    printf("\n");
    return 0;
}
