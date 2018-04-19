#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll>A,B;

ll cmp(){
    ll a_siz=A.size();
    ll b_siz=B.size();
    for(ll i=0;i<a_siz && i<b_siz;i++){
        if(A[i]!=B[i]){
             if(A[i]>B[i]) return 1;
             if(B[i]>A[i]) return 2;
        }
    }

    if(a_siz>b_siz) return 1;
    if(b_siz>a_siz) return 2;
    return 0;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,i,j,k,a=0,b=0,flag=0,last=0;
    cin>>n;
    for(i=1;i<=n;i++){
        ll d;
        cin>>d;
        if(d>0){
            a+=d;
            A.push_back(d);
            last=1;
        }
        else{
            d=-d;
            b+=d;
            B.push_back(d);
            last=2;
        }
    }

    if(a!=b){
        if(a>b) cout<<"first\n";
        else cout<<"second\n";
    }
    else{
        ll res=cmp();
        if(res==1) cout<<"first\n";
        else if(res==2) cout<<"second\n";
        else{
            if(last==1) cout<<"first\n";
            else cout<<"second\n";
        }
    }
}
