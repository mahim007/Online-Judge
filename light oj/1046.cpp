#include<bits/stdc++.h>
using namespace std;
#define ll long long int
char graph[11][11];
ll dis[11][11];
ll rider[105][105];
ll dx[] = { 1, 1, -1, -1, 2, 2, -2, -2 };
ll dy[] = { 2, -2, 2, -2, 1, -1, 1, -1 };
ll R,C,res;
queue<ll>Ri;

void bfs(ll u,ll v)
{
    memset(dis,-1,sizeof dis);
    queue<ll>Q;
    Q.push(u);
    Q.push(v);
    dis[u][v]=0;
    while(!Q.empty())
    {
        ll xx=Q.front();
        Q.pop();
        ll yy=Q.front();
        Q.pop();
        for(int i=0;i<8;i++)
        {
            ll x=xx+dx[i];
            ll y=yy+dy[i];
            if(x>=1 && x<=R && y>=1 && y<=C && dis[x][y]==-1)
            {
                dis[x][y]=dis[xx][yy]+1;
                Q.push(x);
                Q.push(y);
            }
        }
    }
}

int main()
{
    ll i,j,T,t,n,k,l;
    char ch;
    cin>>T;
    for(t=1;t<=T;t++)
    {
        n=0;
        cin>>R>>C;
        for(i=1;i<=R;i++)
        {
            for(j=1;j<=C;j++)
            {
                cin>>ch;
                graph[i][j]=ch;
                if(ch>='1' && ch<='9')
                {
                    n++;
                    Ri.push(i);
                    Ri.push(j);
                    Ri.push(ch-48);
                }
            }
        }
        memset(rider,-1,sizeof rider);
        for(i=1;i<=n;i++)
        {
            ll u=Ri.front();
            Ri.pop();
            ll v=Ri.front();
            Ri.pop();
            ll s=Ri.front();
            Ri.pop();
            bfs(u,v);
            l=1;
            for(j=1;j<=R;j++)
            {
                for(k=1;k<=C;k++)
                {
                    if(dis[j][k]!=-1)
                        rider[i][l++]=ceil((double)dis[j][k]/s);
                    else
                        rider[i][l++]=dis[j][k];
                    //cout<<rider[i][l-1]<<" ";
                }
                //cout<<"\n";
            }
            //cout<<"\n";
        }
        ll sum=0;
        res=99999999999;
        for(i=1;i<l;i++)
        {
            sum=0;
            for(j=1;j<=n;j++)
            {
                if(rider[j][i]==-1)
                {
                    sum=99999999999;
                }
                else
                {
                    sum+=rider[j][i];
                }
            }
            if(sum<res)
                res=sum;
        }
        printf("Case %lld: ",t);
        if(res==99999999999)
            printf("-1\n");
        else
            printf("%lld\n",res);
    }
    return 0;
}
