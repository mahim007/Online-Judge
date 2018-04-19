#include<bits/stdc++.h>
using namespace std;

#define i64 long long int
#define maax 300000
char s[maax];
i64 pos[maax];

int main()
{
    i64 i,j,n,len,day,start,endd,k;
    cin>>s;
        len=strlen(s);
        cin>>day;
        for(i=1;i<=day;i++)
        {
            cin>>n;
            start=n-1;
            endd=len-start;
            pos[start]++;
            pos[endd]--;
        }
        k=0;
        for(i=0;i<len;i++)
        {
            k=k+pos[i];
            if(k%2==1)
                cout<<s[len-i-1];
            else
                cout<<s[i];
        }
        puts("");
    return 0;
}
