#include<bits/stdc++.h>
using namespace std;
string wish[17];
int main()
{
    wish[1]="Happy";
    wish[2]="birthday";
    wish[3]="to";
    wish[4]="you";
    wish[5]="Happy";
    wish[6]="birthday";
    wish[7]="to";
    wish[8]="you";
    wish[9]="Happy";
    wish[10]="birthday";
    wish[11]="to";
    wish[12]="Rujia";
    wish[13]="Happy";
    wish[14]="birthday";
    wish[15]="to";
    wish[16]="you";

    int i,j,n,cnt;
    scanf("%d",&n);
    string name[n+1];
    for(i=1;i<=n;i++)
    {
        string s;
        cin>>s;
        name[i]=s;
    }

    cnt=1;
    int pos=1;
    i=j=1;
    while(pos<=16 || cnt<=n)
    {
        cout<<name[i++]<<": "<<wish[j++]<<endl;
        pos++;
        cnt++;
        if(i>n) i=1;
        if(j>16) j=1;
        if(cnt<=n && pos>16) pos=1;
    }
    return 0;
}
