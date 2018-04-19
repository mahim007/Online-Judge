#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll d,sum=0;
    for(ll i=1;i<=5;i++){
        cin>>d;
        sum+=d;
    }

    if(sum%5==0 && sum!=0) cout<<sum/5<<"\n";
    else cout<<-1<<"\n";

    return 0;
}
