#include<bits/stdc++.h>
using namespace std;

int main()
{
    string arr[100],str1,str2;
    map<string,int>city;
    int edge,asgn,a,b,i;

    while(scanf("%d",&edge)==1)
    {
        asgn=0;

        for(i=0;i<edge;i++)
        {
            cin>>str1>>str2;
            if(city.find(str1)==city.end())
            {
                cout<<"Mapping "<<str1<<" with "<<asgn<<endl;
                city[str1]=asgn++;
            }

            if(city.find(str2)==city.end())
            {
                cout<<"Mapping "<<str2<<" with "<<asgn<<endl;
                city[str2]=asgn++;
            }

            a=city[str1];
            b=city[str2];

            arr[a]=str1;
            arr[b]=str2;

            for(i=0;i<city.size();i++)
                cout<<i<<" represents "<<arr[i]<<endl;
            puts("");
            city.clear();
        }
    }
    return 0;
}
















