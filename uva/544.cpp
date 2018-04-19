#include<bits/stdc++.h>
using namespace std;
#define i64 long long int

map<string,string>par;
string city1,city2;
i64 mst(i64 n);
string found(string str);

struct edge
{
    string u,v;
    i64 cost;
    bool operator < (const edge& p) const
    {
       return cost>p.cost;
    }
};
vector<edge>V;

string found(string str)
{
    if(par[str]=="")
        return str;
    return par[str]=found(par[str]);
}

i64 mst(i64 n)
{
    sort(V.begin(),V.end());
    i64 val=9999999;
    for(int i=0;i<V.size();i++)
    {
        string u=found(V[i].u);
        string v=found(V[i].v);

        if(u!=v)
        {
            par[u]=v;
            if(val>V[i].cost)
            {
                val=V[i].cost;
            }
        }
        if(found(city1)==found(city2))
        {
            break;
        }
    }
    return val;
}

int main()
{
    i64 N,E,T=1,rslt;

    while(scanf("%lld %lld",&N,&E)==2)
    {
        if(N==0 && E==0)
            break;
        V.clear();
        par.clear();

        for(int i=1;i<=E;i++)
        {
        string s1,s2;
        i64 cst;
        cin>>s1>>s2>>cst;
        edge e;
        e.u=s1;
        e.v=s2;
        e.cost=cst;
        V.push_back(e);
        }
        cin>>city1>>city2;
        rslt=mst(N);
        printf("Scenario #%lld\n",T++);
        printf("%lld tons\n\n",rslt);
    }
    return 0;
}
