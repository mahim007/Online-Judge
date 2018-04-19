#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string s;
int main(){
    ll t,T,n,i;
    cin>>T;
    for(t=1;t<=T;t++){
        cin>>s;
        cin>>n;
        for(i=1;i<=n;i++){
            string p;
            cin>>p;
            ll sz=p.size();
            if(s.substr(0,sz)==p){
                printf("y\n");
            }
            else{
                printf("n\n");
            }
        }
    }
    return 0;
}
