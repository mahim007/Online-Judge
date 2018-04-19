#include<bits/stdc++.h>
using namespace std;
string s,t;
int h,k;

void calculate()
{
    h=0;k=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==t[i])
            h++;
        else if(s[i]>='a' && s[i]<='z')
        {
            if(s[i]-97==t[i]-65)
                k++;
        }
        else if(s[i]>='A' && s[i]<='Z')
        {
            if(s[i]-65==t[i]-97)
                k++;
        }
    }
}

int main()
{
    int hashi,kanna;
    printf("%d\n",'A');
    while(cin>>s>>t)
    {
        hashi=0;
        kanna=0;

        calculate();
        hashi=h;
        kanna=k;
        reverse(t.begin(),t.end());
        calculate();
        if(h>hashi)
        {
            hashi=h;
        }
        cout<<hashi<<" "<<kanna<<endl;
    }
    return 0;
}
