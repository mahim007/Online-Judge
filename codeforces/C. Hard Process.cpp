#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lim 300009
ll a[lim],x,y;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie();
    ll n,i,j,k,ans=0;
    cin>>n>>k;
    j=1;
    for(i=1;i<=n;i++) cin>>a[i];
    for(i=1;i<=n;i++){
        if(a[i]==0){
            if(k>=1){
                k--;
            }
            else{
                for(;j<i;j++){
                    if(a[j]==0){
                        break;
                    }
                }
                j++;
            }
        }

        if((i-j+1)>ans){
            ans=i-j+1;
            x=j;
            y=i;
        }
    }

    for(i=x;i<=y;i++) a[i]=1;

    cout<<ans<<"\n";
    for(i=1;i<=n;i++) cout<<a[i]<<" ";
    cout<<"\n";
    return 0;
}
