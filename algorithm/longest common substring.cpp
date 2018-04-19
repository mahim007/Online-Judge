#include <string.h>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <bitset>
#include <list>
#include <stack>
#include <queue>
#include <algorithm>
#include <numeric>
#include <sstream>
using namespace std;

#define ll long long int
#define sci(n) scanf("%d",&n)
#define scl(n) scanf("%lld",&n)
#define scd(n) scanf("%lf",&n)
#define sc scanf
#define pf printf
#define pfi(n) printf("%d",n)
#define pfl(n) printf("%lld",n)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define mem(a,n) memset(a,n,sizeof(a))
#define maax 1009
ll val[maax][maax];
string str[109];
ll maxlen;

void lcs(ll i,ll j){
    ll mx=0;
    ll s1=str[i].size();
    ll s2=str[j].size();
    string p,q;
    p=str[i];
    q=str[j];
    for(ll k=0;k<s1;k++){ //cout<<"3"<<endl;
        for(ll l=0;l<s2;l++){ //cout<<"4 "<<str[j][l]<<endl;
            if(p[k]!=q[l]){
                val[k][l]=0; //cout<<"6"<<endl;
            }
            else{ //cout<<"7"<<endl;
                if(k==0 || l==0){
                    val[k][l]=1;
                }
                else{
                    val[k][l]=1+val[k-1][l-1];
                }
                if(val[k][l]>mx){
                    mx=val[k][l];
                }
            }
        } //cout<<"5"<<endl;
    }
        ll mx2=0;
        reverse(q.begin(),q.end());
        for(ll k=0;k<s1;k++){ //cout<<"3"<<endl;
        for(ll l=0;l<s2;l++){ //cout<<"4 "<<str[j][l]<<endl;
            if(p[k]!=q[l]){
                val[k][l]=0; //cout<<"6"<<endl;
            }
            else{ //cout<<"7"<<endl;
                if(k==0 || l==0){
                    val[k][l]=1;
                }
                else{
                    val[k][l]=1+val[k-1][l-1];
                }
                if(val[k][l]>mx2){
                    mx2=val[k][l];
                }
            }
        } //cout<<"5"<<endl;
    }

    if(mx<mx2)
        mx=mx2;

    if(maxlen>mx){
        maxlen=mx;
    }
}

int main(){
    ll T,t,n,i,j,k;
    cin>>T;
    for(t=1;t<=T;t++){
        maxlen=99999999999;
        cin>>n;
        for(i=0;i<n;i++){
            cin>>str[i];
        }
        for(i=0;i<n;i++){ //cout<<"1"<<endl;
            for(j=i+1;j<n;j++){ //cout<<"2"<<endl;
                lcs(i,j);
            }
        }
        cout<<maxlen<<endl;
        memset(val,0,sizeof val);
        for(ll z=0;z<n;z++)
            str[z].clear();
    }
    return 0;
}
