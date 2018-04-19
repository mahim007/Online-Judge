#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
string c;
map<string,i64>M;

bool ispalindrome(string p)
{
    i64 i=0,j;
    i64 len=p.size();
    for(i=0,j=len-1;i<=len/2;i++,j--)
    {
        if(p[i]!=p[j])
            return 0;
    }
    return 1;
}

int main()
{
    string s;
    i64 i,j,len,cnt;
    bool flag;
    while(cin>>s)
    {
        cnt=0;
        len=s.size();
        for(i=0;i<len;i++)
        {
            c.clear();
            for(j=i;j<len;j++)
            {
                c=c+s[j];
                if(M[c]==0)
                {
                    M[c]=1;
                }
            }
        }
        map<string,i64>::iterator it;
        for(it=M.begin();it!=M.end();it++)
        {
            //cout<<it->first<<endl;
            if(ispalindrome(it->first))
                cnt++;
            //cout<<cnt<<endl;
        }
        cout<<"The string '"<<s<<"' contains "<<cnt<<" palindromes."<<endl;
        M.clear();
    }
    return 0;
}
