#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll crnt,nxt,n,m,val,i,ans=0;
    cin>>n>>m;
    crnt=1;
    for(i=1;i<=m;i++){
        cin>>val;
        nxt=val;
        if(nxt>=crnt){
            ans+=nxt-crnt;
        }
        else{
            ans+=n+1-crnt+(nxt-1);
        }
        crnt=nxt;
    }
    cout<<ans<<endl;
    return 0;
}
