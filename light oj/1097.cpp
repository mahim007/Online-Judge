#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define limit 2000009
vector<ll>V,F;

void f(){
    V.push_back(0);
    for(ll i=1;i<limit;i=i+2){
        V.push_back(i);
    } //cout<<"bejor sesh..\n";
    ll sz=V.size(); //cout<<"ekdom prothome sz:"<<sz<<endl;
    for(ll i=2;i<sz;i++){ //cout<<"i:"<<i<<"V[i]:"<<V[i]<<endl;
        //if(V[i]==0) continue;
        //cout<<"eibar ase:"<<V[i]<<endl;system("pause");
        for(ll j=V[i];j<sz;j=j+V[i]){
            V[j]=0;
        } //cout<<"0 dea sesh... :)"<<endl;
        F.clear();
        F.push_back(0);
        for(ll j=1;j<sz;j++){
            if(V[j]!=0){
                F.push_back(V[j]);
            }
        } //cout<<"size of F:"<<F.size()<<endl;
        V.clear();
        V=F;
        sz=F.size(); //for(ll k=0;k<sz;k++) cout<<V[k]<<" "<<endl;
    } //cout<<"final size:"<<V.size()<<endl;

}

int main(){
    f();
    ll n;
    while(scanf("%lld",&n)==1){
        printf("%lld\n",F[n-1]);
    }
    return 0;
}
