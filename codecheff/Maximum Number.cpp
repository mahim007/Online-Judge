#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll data[4];
    ll T,t,mn;
    cin>>T;
    for(t=1;t<=T;t++){
        cin>>data[1]>>data[2]>>data[3];
        mn=data[1];
        for(ll i=2;i<=3;i++){
            if(data[i]>mn) mn=data[i];
        }

        printf("Case %lld: %lld\n",t,mn);
    }

    return 0;
}
