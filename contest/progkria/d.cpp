#include<bits/stdc++.h>
using namespace std;
#define i64 long long int

int main()
{
    i64 i,j,k,len,way;
    i64 flag;
    string a,b,c,total;
    char str[110];
    while(gets(str))
    {
        a.clear();
        b.clear();
        c.clear();
        way=0;
        len=strlen(str);
        flag=1;
        total=str;
        cout<<"total:"<<total<<endl;
            for(j=0;j<len;j++)
            {
                a=a+str[j];
            cout<<"a:"<<a<<endl;

            for(i=0;i<len;i++)
            {
                for(k=len-1-i;k<=len;k++)
                b=b+str[k];
            cout<<"b:"<<b<<endl;
            c=a+b;
            cout<<"c:"<<c<<endl;

            if(c==total){
                if(flag==1)
                {
                 flag=0;
                way++;
                printf("flag:%lld\n",flag);
                }

            }
            else if(c!=total)
                way++;

            cout<<"way:"<<way<<endl;
            b.clear();
            c.clear();
            }

            }
            a.clear();

        printf("%lld\n",way);
    }
}
