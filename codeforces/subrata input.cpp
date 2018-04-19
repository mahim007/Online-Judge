#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf(x) scanf("%lld",&x)
int main()
{
    //freopen("SubrataInput.txt","r",stdin);
    freopen("SubrataInput.txt","w",stdout);
    ll T=1,n,m=1,i,j;
    ll mx=100000;
    cout<<T<<endl;
    while(T--)
    {
        while(1)
        {
            n = rand()%mx;
            if(n) break;
        }
        while(1)
        {
            ll mxM = min(n*n-1,10*mx);
            m = rand()%mxM;
            if(m>n) break;
        }
        cout<<n<<" "<<m<<endl;


    }
    return 0;
}
