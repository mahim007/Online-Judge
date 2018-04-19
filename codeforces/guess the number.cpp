#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define limit 1000000
int main(){
    ll l=1,r=limit,mid;
    while(l<=r){
        mid=(l+r)>>1;
        printf("%lld\n",mid); fflush(stdout);
        string s;
        cin>>s;
        if(s=="<"){
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }

    cout<<"! "<<mid<<endl;
    return 0;
}
