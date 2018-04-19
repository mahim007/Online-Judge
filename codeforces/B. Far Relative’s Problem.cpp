#include<bits/stdc++.h>
using namespace std;
#define ll long long int
struct data{
    char c;
    ll x,y;
    /*bool operator < (const data& P) const{
        if(x!=P.x) return x<P.x;
        if(y!=P.y) return y>P.y;
    } */
};
vector<data>V;

int main(){
    ll n,i,j,k,ans=-99999;
    cin>>n;
    for(i=1;i<=n;i++){
        char ch;
        ll xx,yy;
        cin>>ch>>xx>>yy;
        data D;
        D.c=ch;
        D.x=xx;
        D.y=yy;
        V.push_back(D);
    } //cout<<V.size()<<endl;
    //sort(V.begin(),V.end());
    ll m=0;
    ll f=0;
    for(i=1;i<=366;i++){ //cout<<i<<endl;
        m=f=0;
        for(j=0;j<n;j++){ //cout<<j<<" "; cout<<V[j].x<<" "<<V[j].y<<endl;
            if(i>=V[j].x && i<=V[j].y){ //cout<<"updating..."<<endl;
                if(V[j].c=='M') m++;
                else f++;
            }
        }
    if(ans<2*min(m,f))
        ans=2*min(m,f);
    }
    if(ans<0) ans=0;
    printf("%lld\n",ans);
    return 0;
}
