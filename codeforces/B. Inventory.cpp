#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll arr[100009];
ll taken[100009];
vector<ll>V;
int main(){
    ll i,j,k,n,sz;
    cin>>n;
    for(i=1;i<=n;i++){
        ll x;
        cin>>x;
        V.push_back(x);
        taken[x]++;
    }
    i=1;
    j=0;
    for(j=0;j<n;j++){
        while(i<=n && taken[i]!=0){
            i++;
        } //cout<<" now i="<<i<<endl;
        if(taken[V[j]]==1){
            if(V[j]<=n){
                printf("%lld ",V[j]); //cout<<" p1"<<endl;
            }
            else{
                printf("%lld ",i); //cout<<" p2"<<endl;
                taken[i]=1;
            }
        }

        else{
            printf("%lld ",i); //cout<<" p3"<<endl;
            taken[i]++;
            taken[V[j]]--;
        }
    }
    printf("\n");
    return 0;
}
