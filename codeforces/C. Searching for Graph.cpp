#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll n,p,ans,i,j,k;
    ll t,T;
    cin>>T;
    for(t=1;t<=T;t++){
        cin>>n>>p;
        ans=(2*n)+p;
        k=0;
        ll f=0;
        for(i=1;i<=n;i++){
            if(f==1) break;
            for(j=i+1;j<=n;j++){
                cout<<i<<" "<<j<<"\n";
                k++;
                if(k>=ans){
                    f=1;
                    break;
                }
            }
        }
    }

    return 0;
}
