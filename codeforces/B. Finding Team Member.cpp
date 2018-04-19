#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lim 2*409
ll a[lim][lim];
ll match[lim];
ll val[lim],n;

void call(ll p){
    for(ll i=1;i<=2*n;i++){
        if(p==i) continue;
        if(a[p][i]>val[i] && a[p][i]>val[p]){
            if(match[i]==0){
                match[match[p]]=0;
                val[match[p]]=0;

                match[p]=i;
                match[i]=p;
                val[i]=val[p]=a[p][i];
            }
            else{
                match[match[i]]=0;
                val[match[i]]=0;

                match[match[p]]=0;
                val[match[p]]=0;

                match[p]=i;
                match[i]=p;
                val[i]=val[p]=a[p][i];
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie();
    ll i,j,d;
    cin>>n;
    for(i=2;i<=2*n;i++){
        for(j=1;j<i;j++){
            cin>>d;
            a[i][j]=a[j][i]=d;
        }
    }

//    cout<<"\n";
//    for(i=1;i<=2*n;i++){
//        for(j=1;j<=2*n;j++){
//            cout<<a[i][j]<<" ";
//        } cout<<"\n";
//    }cout<<"\n";

    ll k=100;
    //k=k*(k-1);
    while(k--){
        ll f=0;
        for(i=1;i<=2*n;i++){
            //if(match[i]==0)
                call(i);
        }
        //if(f==0) break;
    }

    for(i=1;i<=2*n;i++) cout<<match[i]<<" ";
    cout<<"\n";
    //for(i=1;i<=2*n;i++) cout<<val[i]<<" ";
    return 0;
}
