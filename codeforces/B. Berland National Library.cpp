#include<bits/stdc++.h>
using namespace std;
#define ll long long int
map<ll,ll>in;
int main(){
    ll n,ans=0,state=0,i,t;
    string ch;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>ch; //cout<<ch<<endl;
        cin>>n; //cout<<n<<endl;
        if(ch=="+"){
            in[n]=1;
            state++;
            ans=max(ans,state);
        }
        else if(ch=="-"){
            if(in[n]==0) ans++;
            else{
                in[n]=0;
                state--;
                ans=max(ans,state);
            }
        }
    }

    cout<<ans<<endl;
    return 0;
}
