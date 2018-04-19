#include<bits/stdc++.h>
using namespace std;
map<string,string>par;
vector<int>graph[1000];
map<string,int>maap;
vector<string>V;

string found(string r)
{
    if(par[r]==r)
        return r;
    return par[r]=found(par[r]);
}

void Union(string str1,string str2)
{
    string u=found(str1);
    string v=found(str2);
    if(u!=v)
    {
        par[u]=v;
    }
}

void bfs(int src,int endd)
{
    queue<int>Q;
    Q.push(src);
    int visited[1000]={0};
    visited[src]=1;
    int route[1000];
    while(!Q.empty())
    {
        int u=Q.front();
        Q.pop();
        for(int i=0;i<graph[u].size();i++)
        {
            int v=graph[u][i];
            if(visited[v]==0)
            {
                visited[v]=1;
                Q.push(v);
                route[v]=u;
            }
        }
    }
    stack<string>st;
    while(endd!=src)
    {
        st.push(V[endd]);
        st.push(V[route[endd]]);
        endd=route[endd];
    }

    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
        cout<<st.top()<<endl;
        st.pop();
    }
}

int main()
{
    int n,val=0,T=0;
    string str1,str2;
    while(scanf("%d",&n)==1)
    {
        val=0;
        par.clear();
        maap.clear();
        V.clear();
        for(int z=0;z<1000;z++)
            graph[z].clear();


        for(int i=1;i<=n;i++)
        {
            cin>>str1>>str2;
            if(par.find(str1)==par.end())
            {
                par[str1]=str1;
                maap[str1]=val;
                val++;
                V.push_back(str1);
            }

            if(par.find(str2)==par.end())
            {
                par[str2]=str2;
                maap[str2]=val;
                val++;
                V.push_back(str2);
            }

            int a,b;
            a=maap[str1];
            b=maap[str2];
            graph[a].push_back(b);
            graph[b].push_back(a);

            Union(str1,str2);
        }
        string city1,city2;
        cin>>city1>>city2;
        string u,v;

        if(par.find(city1)==par.end())
            u=city1;
        else
            u=found(city1);

        if(par.find(city2)==par.end())
            v=city2;
        else
            v=found(city2);


        if(T==1)
            printf("\n");
        T=1;

        if(u!=v)
            printf("No route\n");
        else
        {
            bfs(maap[city1],maap[city2]);
        }

    }
    return 0;
}


