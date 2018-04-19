#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string V[109];
struct data{
    ll x,y;
};
vector<data>C;
int main(){
    ll i,j,k,n,ans=0;
    cin>>n;
    for(i=1;i<=n;i++){
        string s;
        cin>>V[i];
    }

    for(i=1;i<=n;i++){
        for(j=0;j<n;j++){
            if(V[i][j]=='C'){
                data D;
                D.x=i;
                D.y=j;
                C.push_back(D);
            }
        }
    }
    ll ln=C.size();
    for(i=0;i<ln;i++){
        for(j=i+1;j<ln;j++){
            //if(i==j) continue;
            if(C[i].x==C[j].x || C[i].y==C[j].y) ans++;
        }
    }
    printf("%lld\n",ans);
    return 0;
}
