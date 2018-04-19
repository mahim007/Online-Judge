#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len,flag=1;
    string p,q;
    while(cin>>p>>q)
    {
        flag=1;
        //cout<<p<<" "<<q<<endl;
        string m;
        len=q.size();
        m=q;
        for(int j=len-1;j>=0;j--){
        //m=q;
        for(int k=j;m[k]>p[k];){
        m[k]=m[k]-1;
        //cout<<m<<endl;

        if(p<m && m<q)
        {
            cout<<m<<endl;
            flag=0;
            break;
        }
        }


        if(flag==0)
            break;
        }
        if(flag==1)
            cout<<"No such string\n";
    }
    return 0;
}
