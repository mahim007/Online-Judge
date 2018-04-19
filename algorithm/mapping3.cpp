#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int>mymap;
    int edge,asgn=0;
    cin>>edge;
    for(int i=0;i<edge;i++)
    {
        char s1[100],s2[100];
        cin>>s1>>s2;
        if(mymap.find(s1)==mymap.end())
        {
            cout<<"Mapping "<<s1<<" with "<<asgn<<endl;
            mymap[s1]=asgn;
            asgn++;
        }

        if(mymap.find(s2)==mymap.end())
        {
            cout<<"Mapping "<<s2<<" with "<<asgn<<endl;
            mymap[s2]=asgn;
            asgn++;
        }

        int u=mymap[s1];
        int v=mymap[s2];

        cout<<"edge: "<<u<<" "<<v<<endl;
    }
    return 0;
}
