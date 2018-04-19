#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define maxx 1000009
vector<ll>V[maxx];
ll arr[maxx];
map<ll,ll>M;
int main(){
    ll i,j,k,l,r,d,mx,n,fl,fr,fn;
    mx=-1;
    d=9999999999;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        ll x;
        scanf("%lld",&x);
        M[x]++;
        V[x].push_back(i);
        l=V[x][0]; //cout<<"x:"<<x<<"found:"<<M[x]<<endl;
        r=V[x][V[x].size()-1]; //cout<<"l:"<<l<<" r:"<<r<<endl;
        if(M[x]>=mx){
            if(M[x]>mx){
                mx=M[x];
                fn=x;
                d=r-l+1;
            }
            else if(M[x]==mx){
                if(d>r-l+1){
                    d=r-l+1;
                    fn=x;
                }
            }
        } //cout<<"d:"<<d<<" fn:"<<fn<<endl; cout<<"mx:"<<mx<<endl;
    }
    printf("%lld %lld\n",V[fn][0],V[fn][V[fn].size()-1]);
    return 0;
}
