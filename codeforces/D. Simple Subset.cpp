#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lim 2000009
bool tag[lim];
map<ll,ll>M,P;
ll arr[1009];
vector<ll>V[1009];
void sieve(){
    tag[0]=tag[1]=1;
    for(ll i=4;i<lim;i=i+2) tag[i]=1;
    ll root=sqrt(lim)+1; //cout<<root<<endl;
    for(ll i=3;i<=root;i=i+2){
        if(tag[i]==0){
            for(ll j=i*i;j<lim;j=j+i+i)
                tag[j]=1;
        }
    }

    for(ll i=1;i<lim;i++){
        if(tag[i]==0) M[i]=1;
    }
}

ll check(ll i,ll j){ //cout<<"now:"<<arr[j]<<endl;
    map<ll,ll>::iterator it;
    for(it=P.begin();it!=P.end();it++){ //cout<<it->first<<" "<<arr[j]<<endl;
        if(M[it->first+arr[j]]!=1)
            return 0;
    }
    return 1;
}

int main(){
    ll i,j,k,n,mx=1,indx=1,cnt;
    sieve();
    cin>>n;
    for(i=1;i<=n;i++) cin>>arr[i];
    for(i=1;i<=n;i++){
        ll jor=0,bijor=0;
        V[i].push_back(arr[i]);
        cnt=1;
        P[arr[i]]=1;
        for(j=1;j<=n;j++){
            if(i==j) continue;
            //cout<<arr[i]+arr[j]<<endl;
            //cout<<M[arr[i]+arr[j]]<<endl;
            if(M[arr[i]+arr[j]]==1){
                //if(arr[j]!=1)
                ll flag=check(i,j); //cout<<endl;
                if(flag){
                V[i].push_back(arr[j]);
                P[arr[j]]=1;
                cnt++;
                if(cnt>mx){
                    mx=cnt;
                    indx=i;
                }
                }
            }
            //else break;
        }

        P.clear();
    }

    cout<<mx<<endl;
    for(i=0;i<V[indx].size();i++) cout<<V[indx][i]<<" ";
    cout<<endl;
    return 0;
}
