#include<bits/stdc++.h>
using namespace std;
#define ll long long int
struct data
{
    ll x,div;
    bool operator < (const data& p) const
    {
        if(div!=p.div) return div<p.div;
        else
            return x>p.x;
    }
};
data d[1001];
vector<data>V;

void cnt_div(ll n)
{ //cout<<"n:"<<n<<endl;
    ll root,i;
    for(i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            if(i*i==n)
                d[n].div+=1;
            else
                d[n].div+=2;
        }
    }
    //cout<<"x:"<<d[n].x<<" div:"<<d[n].div<<endl<<endl;
}
int main()
{
    ll i;
    for(i=1;i<=1000;i++)
    {
        d[i].x=i;
        d[i].div=0;
        cnt_div(i);
        V.push_back(d[i]);
    }
    sort(V.begin(),V.end());
    ll t,T,n;
    scanf("%lld",&T);
    for(t=1;t<=T;t++)
    {
        scanf("%lld",&n);
        printf("Case %lld: %lld\n",t,V[n-1].x);
    }
    return 0;
}
