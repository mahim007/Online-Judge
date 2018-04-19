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
#define maax 100009
ll arr[maax];
ll Left[maax];
ll Right[maax];
ll ans[maax];
ll color[maax];
int main()
{
    ll T,t=1,i,n,j,k,res,c;
    //scl(T);
    while(scanf("%lld %lld",&n,&c)==2)
    {
        if(n==0 && c==0){
            break;
        }
        rep(i,n)
        {
            scl(arr[i]);
        }

        for(i=0;i<n;i++){
            ll d;
            cin>>d;
            color[i]=i<<d;
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
            ans[i]=i-st.top();
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
            ans[i]=sk.top()-i;
            sk.push(i);
        }
        res=0;
        rep(i,n)
        {
            ans[i]-=arr[i];
        }
        ll toclr;
        toclr=(1<<c)-1;
        for(i=1;i<=n;i++){
            if(color[i]==toclr){
                res=max(res,ans[i]);
            }
        }
        pf("%lld\n",res);
        mem(arr,0);
        mem(Left,0);
        mem(Right,0);
    }
    return 0;
}

