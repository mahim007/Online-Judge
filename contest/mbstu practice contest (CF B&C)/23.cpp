#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 109
ll a[mxn],m[mxn],n,k;

ll check2(ll l){
    return (l-2>=1 && l+2<=n);
}

ll check1(ll x){
    return (x-1>=1 && x+1<=n);
}

ll solve(ll l,ll r){
    while(l>=1 && r<=n){
        if(check2(l) && check2(r) && a[r+1]==a[l-1] && a[r+2]==a[l-2] && a[l-1]==a[l-2]){
            r+=2;
            l-=2;
        }
        else if(check2(l) && check1(r) && a[l-1]==a[r+1] && a[l-2]==a[r+1]){
            l-=2;
            r++;
        }
        else if(check1(l) && check2(r) && a[l-1]==a[r+1] && a[l-1]==a[r+2]){
            r+=2;
            l--;
        }
        else break;
    }

    l=max(1ll,l);
    r=min(n,r);
    return r-l+1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll i,j,x;
    cin>>n>>k>>x;
    for(i=1;i<=n;i++){
        cin>>a[i];
        m[i]=a[i];
    }

    ll mx=0;
    for(i=1;i<n;i++){
        if(a[i]==a[i+1] && a[i]==x){
            ll d=solve(i,i+1); //cout<<"i:"<<i<<" d:"<<d<<'\n';
            mx=max(mx,d);
            //for(j=1;j<=n;j++) a[i]=m[i];
        }
    }

    cout<<mx<<"\n";
    return 0;
}
