#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll T,t,i,j,k,b,w,x,y,z;
    cin>>T;
    for(t=1;t<=T;t++){
        cin>>b>>w;
        cin>>x>>y>>z;
        ll ans=0;
        if(x<=y+z){
            ans+=(x*b);
        }
        else{
            ans+=(b*(y+z));
        }
        if(y<=x+z){
            ans+=(w*y);
        }
        else{
            ans+=(w*(x+z));
        }
        cout<<ans<<"\n";
    }
    return 0;
}
