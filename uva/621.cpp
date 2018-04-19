#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
int main()
{
    string s,c;
    vector<string>a;
    a.push_back("1");
    a.push_back("4");
    a.push_back("78");

    i64 i,T,t,n,flag;
    cin>>T;
    for(t=1;t<=T;t++)
    {
        flag=0;
        cin>>s;
        int len=s.length();

            if(a[0]==s ||a[1]==s || a[2]==s)
            {
                printf("+\n");
                flag=1;
            }
            if(flag==1)
                continue;


            if(s[len-2]=='3' && s[len-1]=='5')
            {
                printf("-\n");
                continue;
            }

            if(s[0]=='9' && s[len-1]=='4')
            {
                printf("*\n");
                continue;
            }

            if(s[0]=='1' && s[1]=='9' && s[2]=='0')
            {
                printf("?\n");
                continue;
            }
    }
    return 0;
}
