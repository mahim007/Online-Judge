#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define limit 200009
ll a[limit],ans[limit],mid[limit];
ll type[limit],pos[limit];

int main(){
    ll n,m,i,r,t;
    cin>>n>>m;
    for(i=1;i<=n;i++){
        cin>>a[i];
        ans[i]=mid[i]=a[i];
    }

    ll mx=0;
    memset(type,-1,sizeof type);
    memset(pos,-1,sizeof pos);
    for(i=1;i<=m;i++){
        cin>>t>>r;
        type[r]=t;
        pos[r]=i;
        if(r>mx) mx=r;
    }

    sort(mid+1,mid+mx+1);
    ll b=1,e=mx;
    for(i=mx;i>=1;i--){
        if(pos[i]<pos[i+1]){
            pos[i]=pos[i+1];
            type[i]=type[i+1];
        }

        ans[i]=(type[i]==2)? mid[b++]:mid[e--];
    }

    for(i=1;i<=n;i++) cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}
