#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define maax 100009
//ll fst[maax],sec[maax];
int main(){
    ll i,j,n,sum1=0,sum2=0,sum3=0;
    cin>>n;
    for(i=1;i<=n;i++){
        ll d;
        cin>>d;
        //fst[i]=d;
        sum1+=d;
    }
    for(i=1;i<=n-1;i++){
        ll d;
        cin>>d;
        //sec[i]=d;
        sum2+=d;
    }
    cout<<sum1-sum2<<endl;
    for(i=1;i<=n-2;i++){
        ll d;
        cin>>d;
        sum3+=d;
    }
    cout<<sum2-sum3<<endl;
    return 0;
}
