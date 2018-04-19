#include<bits/stdc++.h>
using namespace std;

int par[101];
struct node
{
    int a,b;
    double cost;
    bool operator < (const node &p) const
    {
        return cost<p.cost;
    }
};
vector<node>V;

int found(int r)
{
    if(par[r]==r)
        return r;
    return par[r]=found(par[r]);
}


int main()
{
    int T,t,N;
    scanf("%d",&T);
    getchar();

    for(t=1;t<=T;t++)
    {
        V.clear();
        scanf("%d",&N);
        double arrx[N],arry[N];
        for(int i=0;i<N;i++)
        {
            scanf("%lf %lf",&arrx[i],&arry[i]);
            par[i]=i;
        }

        double cost=0,res=0;
        for(int i=0;i<N;i++)
        {
            for(int j=i+1;j<N;j++)
            {
                cost=sqrt((arrx[j]-arrx[i])*(arrx[j]-arrx[i])+(arry[j]-arry[i])*(arry[j]-arry[i]));
                node nd;
                int a=i;
                int b=j;
                nd.a=a;
                nd.b=b;
                nd.cost=cost;
                V.push_back(nd);
            }
        }

        int cnt=0;
        sort(V.begin(),V.end());
        for(int i=0;i<V.size();i++)
        {
            int u=found(V[i].a);
            int v=found(V[i].b);
            if(u!=v)
            {
                par[u]=v;
                res+=V[i].cost;
                cnt++;
            }
            if(cnt==N-1)
                break;
        }
        printf("%.2lf\n",res);
        if(t!=T)
        {
            printf("\n");
            getchar();
        }
    }
    return 0;
}
