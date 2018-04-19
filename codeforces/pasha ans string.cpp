#include<bits/stdc++.h>
using namespace std;

#define i64 long long int
#define maax 300009
i64 data[maax];
char s[maax];

int main()
{
    i64 i,j,n,len,m;
    while(cin>>s)
    {
        cin>>m;
        len=strlen(s);
        for(i=0;i<m;i++)
        {
            cin>>data[i];
            i64 start,end;
            start=data[i]-1;
            end=len-start;
            reverse(s+start,s+end);
        }
        cout<<s<<endl;
    }
}
