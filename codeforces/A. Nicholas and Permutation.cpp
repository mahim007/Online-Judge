#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll i,j,n,one,maax,dis,ans=0;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>j;
        if(j==1) one=i;
        else if(j==n) maax=i;
    }

    if(one<maax){
        dis=abs(maax-1);
        if(dis>ans) ans=dis;
        dis=abs(n-one);
        if(dis>ans) ans=dis;
    }
    else{
        dis=abs(one-1);
        if(dis>ans) ans=dis;
        dis=abs(n-maax);
        if(dis>ans) ans=dis;
    }

    cout<<ans<<endl;
    return 0;
}
