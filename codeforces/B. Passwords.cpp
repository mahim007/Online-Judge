#include<bits/stdc++.h>
using namespace std;
#define ll long long int

map<ll,ll>M;
string s[109],p;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,ln,i,j,k,t;
    cin>>n>>t;
    for(i=1;i<=n;i++){
        cin>>s[i];
        ll sz=s[i].size();
        M[sz]++;
    }

    cin>>p;
    ln=p.size();
    ll mn=1,mx=0;
    k=0;
    for(i=1;i<=100;i++){
        if(i==ln){
            mx+=M[i];
            break;
        }
        k++;
//        if(k==t){
//            mn+=5;
//            mx+=5;
//            k=0;
//        }
        mn+=M[i];
        mx+=M[i];
    }
    mn+=((mn-1)/t)*5;
    mx+=((mx-1)/t)*5;
    cout<<mn<<" "<<mx<<"\n";
    return 0;
}
