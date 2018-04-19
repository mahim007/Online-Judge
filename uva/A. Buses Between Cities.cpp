#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll i,j,k,a,ta,b,tb,st,ed;
    cin>>a>>ta;
    cin>>b>>tb;
    cin>>st;
    getchar();
    cin>>ed;

    st=st*60+ed;
    ed=st+ta; //cout<<"st:"<<st<<" ed:"<<ed<<endl;

    ll cnt=0;
    for(i=5*60;i<=23*60+59;i=i+b){
        if((i+tb)<=st || (i>=ed))
            {
                continue;//cnt++;
            }
        else{
            cnt++; //cout<<i<<" "<<i+tb<<endl;
        }
    }

    cout<<cnt<<endl;
    return 0;
}
