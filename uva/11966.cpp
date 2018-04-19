#include<bits/stdc++.h>
using namespace std;

#define maax 1009
int N;
double D;
int par[maax];

struct data
{
    double x,y;
};
data point[maax];

int findp(int u)
{
    if(par[u]<=-1)
        return u;
    return par[u]=findp(par[u]);
}

void Union(int u,int v)
{
    u=findp(u);
    v=findp(v);

    if(u!=v)
    {
        par[u]=par[u]+par[v];
        par[v]=u;
    }
}

int main()
{
    int T,t,i,j;

    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        scanf("%d %lf",&N,&D);
        for(i=0;i<N;i++)
        {
            par[i]=-1;
            double u,v;
            scanf("%lf %lf",&u,&v);
            point[i].x=u;
            point[i].y=v;
        }

        for(i=0;i<N;i++)
        {
            for(j=i+1;j<N;j++)
            {
                double x1,x2,y1,y2,dis;
                x1=point[i].x;
                y1=point[i].y;

                x2=point[j].x;
                y2=point[j].y;

                dis=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
                if(dis<=D)
                {
                    Union(i,j);
                }
            }
        }

        int ans=0;
        for(i=0;i<N;i++)
        {
            if(par[i]<=-1)
                ans++;
        }

        printf("Case %d: %d\n",t,ans);
    }
    return 0;
}
