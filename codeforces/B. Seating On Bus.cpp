#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll lef[109][2],righ[109][2];

int main(){
    ll i,j,k,n,m;
    cin>>n>>m;
    k=1;
    for(i=0;i<2*n && k<=m;i++){
        if(i<n){
            if(k<=m)
            lef[i][0]=k;
            k++;
            if(k<=m)
            righ[i][1]=k;
            k++;
        }
        else{
            if(k<=m)
            lef[i%n][1]=k;
            k++;
            if(k<=m)
            righ[i%n][0]=k;
            k++;
        }
    }

    for(i=0;i<n;i++){
        if(lef[i][1]!=0) cout<<lef[i][1]<<" ";
        if(lef[i][0]!=0) cout<<lef[i][0]<<" ";
        if(righ[i][0]!=0) cout<<righ[i][0]<<" ";
        if(righ[i][1]!=0) cout<<righ[i][1]<<" ";
    }
    cout<<endl;
    return 0;
}
