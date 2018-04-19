#include<bits/stdc++.h>
using namespace std;
#define ll long long int
map<ll,ll>M;
vector<ll>V;

int main(){
    ios_base::sync_with_stdio(false);
    ll n,l,x,y,d,i;
    cin>>n>>l>>x>>y;
    for(i=1;i<=n;i++){
        cin>>d;
        M[d]=1;
        V.push_back(d);
    }

    ll f1=0,f2=0;
    for(i=0;i<n;i++){
        if((M[V[i]+x]) || M[V[i]-x]){
            f1=1;
        }

        if((M[V[i]+y]) || (M[V[i]-y])){
            f2=1;
        }
    }

    if(f1==1 && f2==1) cout<<0<<"\n";
    else if(f1==1 && f2==0){
        cout<<1<<"\n";
        cout<<y<<"\n";
    }
    else if(f1==0 && f2==1){
        cout<<1<<"\n";
        cout<<x<<"\n";
    }
    else{
        for(i=0;i<n;i++){
            if(M[V[i]+x-y] && V[i]+x<=l){
                cout<<1<<"\n";
                cout<<V[i]+x<<"\n";
                return 0;
            }
            else if(M[V[i]-x+y] && V[i]-x>=0){
                cout<<1<<"\n";
                cout<<V[i]-x<<"\n";
                return 0;
            }
            if(M[V[i]+y-x] && V[i]+y<=l){
                cout<<1<<"\n";
                cout<<V[i]+y<<"\n";
                return 0;
            }
            if(M[V[i]+x+y] && V[i]+x+y<=l){
                cout<<1<<"\n";
                cout<<V[i]+x<<"\n";
                return 0;
            }
        }
        cout<<2<<"\n";
        cout<<x<<" "<<y<<"\n";
    }

    return 0;
}
