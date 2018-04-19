#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define inf 100000
ll a[inf];
ll b[inf];
int main(){
    ll i,j,k,n,d,m,indx=1;
    cin>>n>>d;
    for(i=1;i<=n;i++){
        cin>>a[i];
    }

    ll mx=-1;
    k=1;
    m=d;
    while(k<=n){
        m=d;
        while(a[k]==1 && k<=n) k++;
        ll q=k;
        for(i=k;i<=n && m>0;i++){
            if(a[i]==0){
                b[i]=1;
                m--;
                k=i;
            }
        }

        ll ans=0;
        for(i=1;i<=n;i++){
            if(a[i]==1 ||b[i]==1){
                ans++;
                if(ans>mx){
                    mx=ans;
                    indx=q;
                }
            }
            else{
                ans=0;
            }
        }

        k++;
        memset(b,0,sizeof b);
    }
    if(mx<0) mx=0;
    cout<<mx<<endl;
    for(i=1;i<=n;i++){
        if(i>=indx && d>0){
            if(a[i]==0){
                a[i]=1;
                d--;
            }
        }

        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}

