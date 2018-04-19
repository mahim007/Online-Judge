#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll>V;

int main(){
    ll i,j,k,lastin,lastdec,inc,dec,ans=-99999999,n;
    cin>>n;
    for(i=1;i<=n;i++){
        ll d ;
        cin>>d;
        V.push_back(d);
    }

    i=j=k=lastin=lastdec=inc=dec=0;
    while(j<n){ //cout<<"now at:"<<j<<endl;
        if(V[j-1]-V[j]==1){
            dec++;
            inc=0;
            if(dec>=2){
                i=lastdec;
                dec--;
            }
            lastdec=j;
        }
        else if(V[j-1]-V[j]==-1){
            inc++;
            dec=0;
            if(inc>=2){
                i=lastin;
                inc--;
            }
            lastin=j;
        }

        ans=max(ans,j-i+1); //cout<<"lastin:"<<lastin<<" lastdec:"<<lastdec<<endl; cout<<"i:"<<i<<" j:"<<j<<endl;
        j++;
    }

    cout<<ans<<endl;
    return 0;
}
