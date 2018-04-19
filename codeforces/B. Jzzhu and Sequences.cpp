#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
ll a[7];

int main(){
    ll x,y,n;
    scanf("%lld %lld",&x,&y);
    scanf("%lld",&n);

    a[1]=x;
    a[2]=y;
    a[3]=y-x; //cout<<a[3]<<endl;
    a[4]=-x;
    a[5]=-y;
    a[6]=x-y;
    n=n%6; //cout<<"n:"<<n<<" "<<a[n]%mod<<endl;
    if(n==0) n=6;
    printf("%lld\n",(ll)((a[n]+2*mod)%mod));
    return 0;
}
