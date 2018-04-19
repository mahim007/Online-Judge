#include<bits/stdc++.h>
using namespace std;
#define ll long long int
//ll a[]={0,1,2,3,4,5};
ll vis[6];
ll g[6][6];
vector<ll>V;
ll mx;
void permutation(){//cout<<"permutation called\n";
    if(V.size()==5){ //cout<<"inside\n";
        ll ret=0; //for(ll i=0;i<5;i++) cout<<V[i]; cout<<"\n";
        for(ll i=0;i<5-1;i++){
            for(ll j=i;j<5;j=j+2){
                ret+=(g[V[j]][V[j+1]] + g[V[j+1]][V[j]]);
            }
        }

        mx=max(ret,mx); //cout<<"ret:"<<ret<<" mx:"<<mx<<endl;
        return;
    }

    for(ll i=1;i<=5;i++){
        if(vis[i]==0){
            vis[i]=1;
            V.push_back(i);
            permutation();
            vis[i]=0;
            V.pop_back();
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();

    ll n,i,j,k,ans=0;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            cin>>g[i][j];
        }
    }
    //cout<<"here\n";
    permutation();
    cout<<mx<<"\n";
    return 0;
}
