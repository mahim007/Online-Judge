#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define eps 1e-9
#define mxn 100009

vector<ll>V;

int main(){
    //ios_base::sync_with_stdio(0);

    ll n,n1,n2,i,j,k;
    double ans=0.0;
    scanf("%lld %lld %lld",&n,&n1,&n2);
    for(i=1;i<=n;i++){
        ll d;
        cin>>d;
        V.push_back(d);
    }

    ll a=0,b=0;
    sort(V.begin(),V.end());
    if(n1<n2){
        ll k=0;
        a=0;
        for(i=n-1;i>=0 && k<n1;i--,k++){
            a+=V[i];
        }

        ans+=(double)a/n1*1.0;

        k=0;
        a=0;
        for(;i>=0 && k<n2;i--,k++){
            a+=V[i];
        }

        ans+=(double)a/n2*1.0;
    }
    else{
        ll k=0;
        a=0;
        for(i=n-1;i>=0 && k<n2;i--,k++){
            a+=V[i];
        }

        ans+=(double)a/n2*1.0;

        k=0;
        a=0;
        for(;i>=0 && k<n1;i--,k++){
            a+=V[i];
        }

        ans+=(double)a/n1*1.0;
    }

    printf("%0.6lf\n",ans+eps);
    return 0;
}
