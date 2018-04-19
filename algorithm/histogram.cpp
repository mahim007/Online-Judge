#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sci(n) scanf("%d",&n)
#define scl(n) scanf("%lld",&n)
#define scd(n) scanf("%lf",&n)
#define sc scanf
#define pf printf
#define pfi(n) printf("%d",n)
#define pfl(n) printf("%lld",n)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define mem(a,n) memset(a,n,sizeof(a))
#define maax 30009
ll arr[maax];
ll Left[maax];
ll Right[maax];
int main()
{
    ll T,t,i,n,j,k,res;
    scl(T);
    rep(t,T)
    {
        scl(n);
        rep(i,n)
        {
            scl(arr[i]);
        }
        arr[0]=-1;
        arr[n+1]=-1;
        stack<ll>st,sk;
        st.push(0);
        rep(i,n)
        {
            while(arr[st.top()]>=arr[i])
            {
                st.pop();
            }
            Left[i]=i-st.top();
            st.push(i);
        }
        //while(!st.empty()) st.pop();
        sk.push(n+1);
        for(i=n;i>0;i--)
        {
            while(arr[sk.top()]>=arr[i])
            {
                sk.pop();
            }
            Right[i]=sk.top()-i;
            sk.push(i);
        }
        res=-99999;
        rep(i,n)
        {
            res=max(res,(Left[i]+Right[i]-1)*arr[i]);
        }
        pf("Case %lld: %lld\n",t,res);
        mem(arr,0);
        mem(Left,0);
        mem(Right,0);
    }
    return 0;
}
