#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string s1,s2;

ll call(string p,string q){ //cout<<"calling:"<<p<<" "<<q<<"\n";
    ll sz=p.size();
    ll cnt=0;
    for(ll i=0;i<sz;i++){
        if(p[i]==q[i] || p[i]=='?' || q[i]=='?'){
            cnt++;
        }
        else return cnt*2;
    }

    return cnt*2;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,i,j,k,sz,m,mx=2;
    cin>>s1;
    cin>>m;
    for(i=1;i<=m;i++){
        s1+="?";
    }
    sz=s1.size(); //cout<<"sz:"<<sz<<" "<<s1<<"\n";
    {
        for(i=1;i<sz-2;i++){
            for(k=sz/2;k>=1;k--){
            if(k*2<mx) continue;
            for(j=0;j<sz-2;j++){
                if(j+k-1<=sz-1 && j+k+k-1<=sz-1){
                    string p=s1.substr(j,k);
                    string q=s1.substr(j+k,k);
                    ll val=call(p,q);
                    if(val>mx) mx=val; //cout<<"mx:"<<mx<<"\n"; //system("pause");
                }
            }
        }
        }

        cout<<mx<<"\n";
    }

    return 0;
}

//ijtvifbuajod
//5
