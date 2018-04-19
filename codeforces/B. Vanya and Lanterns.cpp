#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define eps 1e-9
ll a[1009];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,l,i,j,k,fast=0,last=0;
    double d=-9999.0000;
    cin>>n>>l;
    for(i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]==0) fast=1;
        if(a[i]==l) last=1;
    }
    sort(a+1,a+1+n);
    for(i=1;i<n;i++){
        double ds=((double)a[i+1]-(double)a[i])/2.0;
        if((ds-d)>eps){
            d=ds;
        }
    }

    if(fast==0){
        if((double)(a[1]-0)>d){
            d=a[1]-0;
        }
    }

    if(last==0){
        if((double)(l-a[n])>d){
            d=l-a[n];
        }
    }


    cout<<fixed<<setprecision(9)<<d<<"\n";
    return 0;
}
