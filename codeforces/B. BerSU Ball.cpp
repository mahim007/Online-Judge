#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[109],b[109],g[109];
int main(){
    ll n,i,cnt=0,m,j;
    cin>>n;
    for(i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+1+n);

    cin>>m;
    for(i=1;i<=m;i++) cin>>b[i];
    sort(b+1,b+1+m);

    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(abs(a[i]-b[j])<=1){
                cnt++;
                b[j]=1000;
                break;
            }
        }
    }
    cout<<cnt<<"\n";
    return 0;
}
