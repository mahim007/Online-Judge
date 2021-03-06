#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 100009
map<ll,ll>P,M;
ll prime[mxn];
ll arr[mxn];
vector<pair<ll,ll> >V;
void sieve(){
    //prime[1]=prime[2]=1;
    for(ll i=4;i<mxn;i=i+2) prime[i]=-1;
    for(ll i=3;i*i<mxn;i=i+2){
        if(prime[i]==0){
            for(ll j=i*i;j<mxn;j=j+i+i)
                prime[j]=-1;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sieve();
    ll n,i,j,k,cnt=0;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>arr[i];
        M[arr[i]]=i;
    }

    i=1;
    while(i<=n){
        if(M[i]==i) i++;
        else{
            ll d=M[i]-i+1;
            while(prime[d]==-1){
                d--;
            }

            ll x,y;
            x=M[i]-d+1;
            y=M[i];
            cnt++;
            V.push_back(make_pair(x,y)); //cout<<"x:"<<x<<" y:"<<y<<"\n"; //system("pause");
            M[i]=x;
            M[arr[x]]=y;
            swap(arr[x],arr[y]);
        }
    }

    cout<<cnt<<"\n";
    for(i=0;i<cnt;i++) cout<<V[i].first<<" "<<V[i].second<<"\n";
    return 0;
}
