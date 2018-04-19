#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll n,a,b,c,i,j,k;
    cin>>n>>a>>b>>c;
    if(n>0LL && n%4==0){
        cout<<0<<"\n";
    }
    else{
        ll ans=99999999999999;
        for(i=0;i<=100;i++){
            for(j=0;j<=100;j++){
                for(k =0;k<=100;k++){
                    if((n+i+2*j+3*k)%4==0){
                        ans=min(ans,i*a+j*b+k*c);
                    }
                }
            }
        }

    cout<<ans<<"\n";
    }

    return 0;
}
