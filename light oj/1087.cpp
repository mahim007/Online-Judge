#include<bits/stdc++.h>
using namespace std;
#define maax 100009;
#define ll long long int
vector<ll>V;
int main()
{
    ll T,t,i,j,sz,n,q;
    char ch;
    scanf("%lld",&T);
    for(t=1;t<=T;t++)
    {
        scanf("%lld %lld",&n,&q);
        for(i=1;i<=n;i++)
        {
            ll v;
            scanf("%lld",&v);
            V.push_back(v);
        }
        printf("Case %lld:\n",t);
        sz=n;
        for(i=1;i<=q;i++)
        {
            getchar();
            ll u;
            scanf("%c %lld",&ch,&u);
            if(ch=='a')
            {
                V.push_back(u);
                sz++;
            }
            else
            {
                if(u>sz)
                    printf("none\n");
                else
                {
                    printf("%lld\n",V[u-1]);
                    V.erase(V.begin()+u-1);
                    sz--;
                }
            }
        }
        V.clear();
    }
    return 0;
}
