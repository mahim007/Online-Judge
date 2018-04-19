#include<bits/stdc++.h>
using namespace std;
//int data[101];

int main()
{
    int t,T,i,n,j,res;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        scanf("%d",&n);
        vector<int>data;
        data.push_back(0);
        for(i=1;i<=n;i++)
        {
            string s;
            cin>>s;
            if(s=="LEFT")
                data.push_back(-1);
            if(s=="RIGHT")
                data.push_back(1);
            if(s=="SAME")
            {
                int val;
                cin>>s>>val;
                data.push_back(data[val]);
            }
        }
        res=0;
        for(i=1;i<data.size();i++)
        {
            res=res+data[i];
        }
        printf("%d\n",res);
    }
    return 0;
}
