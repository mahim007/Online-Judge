#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lim 100009

ll a[lim];
struct data{
    string f,s;
};

vector<data>V;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie();
    ll n,i;
    cin>>n;
    for(i=1;i<=n;i++){
        string x,y;
        cin>>x>>y; //cout<<(x<y)<<endl;
        data D;
        D.f=x;
        D.s=y;
        V.push_back(D);
    }

    for(i=1;i<=n;i++) cin>>a[i];
    ll f=1;
    string mn,ms;
    for(i=1;i<=n;i++){
        if(i==1){
            mn=min(V[a[i]-1].f,V[a[i]-1].s);
        }
        else{
            string p1,p2;
            p1=min(V[a[i]-1].f,V[a[i]-1].s);
            p2=max(V[a[i]-1].f,V[a[i]-1].s); //cout<<"p1:"<<p1<<" p2:"<<p2<<endl;

            if(mn<p1) mn=p1;
            else if(mn<p2) mn=p2;
            else{
                f=0;
                break;
            }
        }
    }

    if(f) cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}
