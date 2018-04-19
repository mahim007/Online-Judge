#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,one;
    one="one";
    int i,j,T,t,flag;
    scanf("%d",&T);
        for(t=1;t<=T;t++)
    {
        flag=0;
        cin>>s;
        if(s.size()>3)
            {
                printf("3\n");
                continue;
            }
        else
        {
            for(i=0;i<s.size();i++)
            {
                if(s[i]!=one[i])
                    flag++;
            }
        }
        if(flag<=1)
            printf("1\n");
        else
            printf("2\n");
    }


    return 0;
}
