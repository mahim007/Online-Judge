#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define inf 10000000000
struct data{
    ll weight;
    ll iq;
    ll id;
    bool operator < (const data& p) const{
        if(iq!=p.iq)
            return iq>p.iq;
        else
            return weight>p.weight;
    }
};
data D[1009];
vector<data>V;
vector<ll>vv;
ll L[1009],I[1009],n;

void LIS(){
    ll mx=0;
    I[0]=-inf;
    for(ll i=1;i<=n;i++){
        I[i]=inf;
        L[i]=1;
    } //cout<<"first loop cmplt.n="<<n<<endl;

    for(ll i=0;i<n;i++){
        ll low=0,high=n,mid;
        while(low<=high){
            mid=(low+high)/2;
            if(V[i].weight<=I[mid])
                high=mid-1;
            else
                low=mid+1;
        }

        I[low]=V[i].weight;
        L[i+1]=low;
        if(mx<low) mx=low;
    }

    printf("%lld\n",mx);
    for(ll i=n;i>=1;i--){
        if(L[i]==mx){
            vv.push_back(V[i-1].id);
            mx--;
        }
    }

    ll sz=vv.size();
    for(ll i=sz-1;i>=0;i--){
        printf("%lld\n",vv[i]);
    }
}

int main(){
    ll i,j,x,y;
    i=0;
    while(scanf("%lld %lld",&x,&y)==2){
        i++;
        D[i].id=i;
        D[i].weight=x;
        D[i].iq=y;
        V.push_back(D[i]);
    } //cout<<"inpt cmplt"<<endl;

    n=i; //cout<<"n:"<<n<<endl;
    sort(V.begin(),V.end()); //cout<<"sorting cmplt"<<endl;
    LIS();
    return 0;
}
