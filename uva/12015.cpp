#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
struct url
{
    string n;
    i64 m;
};
vector<url>V;
int main()
{
    i64 maax,T,t,i,n,val;
    cin>>T;
    for(t=1;t<=T;t++)
    {
        maax=0;
        V.clear();

        for(i=1;i<=10;i++)
        {
            string s;
            cin>>s>>val;
            url u;
            u.n=s;
            u.m=val;
            V.push_back(u);
            if(val>maax)
                maax=val;
        }

        printf("Case #%lld:\n",t);
        for(i64 it=0;it<V.size();it++)
        {
            if(V[it].m==maax)
            {
                cout<<V[it].n<<endl;
            }
        }
    }
    return 0;
}
