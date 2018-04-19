#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n,x,total=0,dis=0,d;
    cin>>n>>x;
    for(ll i=1;i<=n;i++){
        char ch;
        cin>>ch;
        cin>>d;
        if(ch=='+'){
            x+=d;
        }
        else{
            if((x-d)>=0){
                x-=d;
            }
            else{
                dis++;
            }
        }
    }

    cout<<x<<" "<<dis<<"\n";
    return 0;
}
