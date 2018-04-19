#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main(){
    ll n,k,r,i,j;
    cin>>k>>r;
    i=1;
    while(1){
        ll p=k*i;
        ll rem=p%10;
        if(rem==0 || rem==r){
            n=i;
            break;
        }

        i++;
    }

    cout<<n<<"\n";
    return 0;
}
