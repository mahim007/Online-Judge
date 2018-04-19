#include<bits/stdc++.h>
using namespace std;
#define ll long long int
map<ll,ll>M;
int main(){
    ll n,i,ans=0,d;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>d;
        if(M[d]==0){
            M[d]=1;
            ans+=d;
        }
        else{
            while(M[d]!=0) d--;
            if(d!=0)
                M[d]=1;
            ans+=d;
        }
    }

    cout<<ans<<endl;
    return 0;
}
