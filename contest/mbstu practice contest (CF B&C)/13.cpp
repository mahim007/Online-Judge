#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll>V;
map<ll,ll>M;
void printt(ll d)
{
    printf("%lld\n",(ll)V.size()-d);
    for(ll i=0; i<V.size(); i++)
    {
        if(d>0 && V[i]%2){
            d--;
            continue;
        }
        else printf("%lld ",V[i]);
    }
    printf("\n");
}

ll call(ll n)
{
    ll ans=1;
    while(n)
    {
        if((n&1)==1) return ans;
        n=n>>1;
        ans*=2;
    }

    return ans;
}

int main()
{
    ll s,l,i,j,k,f=0;
    scanf("%lld %lld",&s,&l);
    ll d=65536;
    while(d)
    {
        if(d<=s && d<=l)
        {
            V.push_back(d);
            M[d]=1;
            s-=d;
        }
        d=d/2;
    }

    if(s==0)
    {
        printt(0);
        return 0;
    }
    else
    {
        for(i=3; i<=l && s>0; i++)
        {
            if(M[i]==0)
            {
                ll d=call(i); //cout<<"i:"<<i<<" d:"<<d<<endl;
                if(1)
                {
                    s-=d;
                    V.push_back(i);
                    M[i]=1;
                }
            }
        }

        if(s==0)
        {
            printt(0);
        }
        else if(s<0){
            printt((ll)abs(s));
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}
