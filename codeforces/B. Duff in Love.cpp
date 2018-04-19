#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll>V;
map<ll,ll>M;
int main(){
    ll i,n,j,k;
    scanf("%lld",&n);
    if(n<=3){
        printf("%lld\n",n);
        return 0;
    }
    for(i=2;i*i<=n;i++){
        if(n%i==0){
            V.push_back(i);
            if(i!=n/i)
                V.push_back(n/i);
        }
    }
    V.push_back(n);
    sort(V.begin(),V.end()); //cout<<V[i]<<" ";
    ll sz=V.size(); //cout<<sz<<" "<<endl;
    for(i=0;i<V.size()-1;i++){
        ll x=V[i];
        ll p=sqrt(x);
        for(j=i+1;j<V.size();j++){
            if(V[j]%V[i]==0 && p*p==x){
                M[V[j]]=1;
            }
        }
    }
    for(i=V.size()-1;i>=0;i--){
        if(M[V[i]]==0){
            k=V[i];
            break;
        }
    }
    printf("%lld\n",k);
    return 0;
}
