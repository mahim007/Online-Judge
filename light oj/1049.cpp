#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define maax 109
bool Left[maax];
bool Right[maax];
ll L,R;
int main()
{
    ll T,t,i,u,v,n,c;
    cin>>T;
    for(t=1;t<=T;t++)
    {
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>u>>v>>c;
            if(Right[u]==0 && Left[v]==0)
            {
                Right[u]=1;
                Left[v]=1;
                R+=c;
            }
            else
            {
                Left[u]=1;
                Right[v]=1;
                L+=c;
            }
        }
        printf("Case %lld: %lld\n",t,(ll)min(R,L));
        memset(Left,0,sizeof Left);
        memset(Right,0,sizeof Right);
        L=R=0;
    }
}
