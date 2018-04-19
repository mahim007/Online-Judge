#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[5];

ll test(ll x){
    vector<ll>V;
    V.push_back(a[1]);
    V.push_back(a[2]);
    V.push_back(a[3]);
    V.push_back(x);
    sort(V.begin(),V.end());
    if((V[0]+V[3]==V[1]+V[2]) && V[0]*3==V[3])
        return 1;
    return 0;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll b,c,d,n,i;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a[i];
    }

    if(n==0){
        cout<<"YES\n";
        cout<<1<<"\n"<<1<<"\n"<<3<<"\n"<<3<<"\n";
    }
    else if(n==1){
        cout<<"YES\n";
        cout<<a[1]<<"\n"<<a[1]*3<<"\n"<<a[1]*3<<"\n";
    }
    else if(n==2){
        sort(a+1,a+2+1); //cout<<"data:"<<a[1]<<" "<<a[2]<<endl;
        if(3*a[1]>a[2]){
            cout<<"YES\n";
            cout<<((a[1]+3*a[1])-a[2])<<"\n";
            cout<<3*a[1]<<"\n";
        }
        else cout<<"NO\n";
    }
    else if(n==3){
        for(i=1;i<=1500;i++){
            if(test(i)){
                cout<<"YES\n";
                cout<<i<<"\n";
                return 0;
            }
        }

        cout<<"NO\n";
    }
    else if(n==4){
        sort(a+1,a+1+n);
        if((((a[1]+a[4]+a[3]+a[2])/4)==(a[2]+a[3])/2) && (((a[2]+a[3])/2)==a[4]-a[1])) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}
