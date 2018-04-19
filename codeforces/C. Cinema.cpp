#include<bits/stdc++.h>
using namespace std;
#define ll long long int
map<ll,ll>M;
ll audio[200009];
ll subtitle[200009];

int main(){
    ll n,i,j,k,d,movie,mxaudio,mxsubtitle;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>d;
        M[d]++;
    }

    ll m;
    cin>>m;
    for(i=1;i<=m;i++) cin>>audio[i];
    for(i=1;i<=m;i++) cin>>subtitle[i];

    mxaudio=mxsubtitle=movie=-1;
    for(i=1;i<=m;i++){
        j=audio[i];
        k=subtitle[i];
        if(M[j]>mxaudio){
            mxaudio=M[j];
            mxsubtitle=M[k];
            movie=i;
        }
        else if(M[j]==mxaudio && M[k]>mxsubtitle){
            mxsubtitle=M[k];
            movie=i;
        }
    }

    cout<<movie<<endl;
    return 0;
}
