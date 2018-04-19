#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,flag=0;
    string s,t;
    while(cin>>s>>t)
    {
        if(s.length()>t.length())
        {
            printf("No\n");
            continue;
        }

        i=j=0;
        flag=0;
        for(i=0;i<s.length();i++)
        {
            flag=0;
            for(;j<t.length();j++)
            {
                if(s[i]==t[j])
                {
                    flag=1;
                    j++;
                    break;
                }
            }

                if(flag==0)
                    break;
        }
        if(flag==1)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
