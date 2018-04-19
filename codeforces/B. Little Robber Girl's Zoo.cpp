#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[109];

int main(){
    ll n,i,j,k,d;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a[i];
    }

    while(1){
        k=0;
        for(i=1;i<n;i++){
            if(a[i]>a[i+1]){
                cout<<i<<" "<<i+1<<"\n";
                swap(a[i],a[i+1]);
                k++;
            }
        }

        if(k==0) break;
    }

    return 0;
}
