#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[4];
int main(){
    cin>>a[1]>>a[2]>>a[3];
    sort(a+1,a+4);
    if(a[3]>=2*(a[1]+a[2])) cout<<a[1]+a[2]<<"\n";
    else    cout<<(a[1]+a[2]+a[3])/3<<"\n";
    return 0;
}
