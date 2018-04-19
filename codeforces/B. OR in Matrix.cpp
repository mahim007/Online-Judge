#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll A[109][109],B[109][109];
ll r,c;

void fillup(ll n,ll m){
    for(ll i=1;i<=c;i++) B[n][i]=0;
    for(ll i=1;i<=r;i++) B[i][m]=0;
}

ll present(ll n,ll m){
    for(ll i=1;i<=c;i++){
        if(B[n][i]==1) return 1;
    }
    for(ll i=1;i<=r;i++){
        if(B[i][m]==1) return 1;
    }

    return 0;
}


ll check(){
    for(ll i=1;i<=r;i++){
        for(ll j=1;j<=c;j++){
            if(A[i][j]==1){
                if(present(i,j)==0) return 0;
            }
        }
    }

    return 1;
}

void __print(){
    for(ll i=1;i<=r;i++){
        for(ll j=1;j<=c;j++){
            cout<<B[i][j]<<" ";
        }
        cout<<"\n";
    }
}

int main(){
    cin>>r>>c;
    ll i,j,mix=0;
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            cin>>A[i][j];
            mix+=A[i][j];
            B[i][j]=1;
        }
    }

    if(!mix){
        cout<<"YES\n";
        for(i=1;i<=r;i++){
            for(j=1;j<=c;j++){
                cout<<A[i][j]<<" ";
            }
            cout<<"\n";
        }
        return 0;
    }

    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            if(A[i][j]==0){
                fillup(i,j);
            }
        }
    }

    ll ans=check();
    if(ans==0) cout<<"NO\n";
    else{
        cout<<"YES\n";
        __print();
    }

    return 0;
}
