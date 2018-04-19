#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll change(ll n)
{
    ll ret = 0;
    while(n>0){
        ll t = n%10;
        n/=10;
        if(t !=0){
            ret = ret*10 + t;
        }
    }
    n = ret;
    ret = 0;
    while(n>0){
        ll t = n%10;
        n/=10;
        ret = ret*10 + t;
    }
    return ret;
}
int main()
{
    ll a, b,c;
    cin>>a>>b;
    c = a+b;
    ll aa = change(a);
    ll bb = change(b);
    if((aa+bb) == change(c)){
        printf("YES\n");
    }
    else printf("NO\n");
}
