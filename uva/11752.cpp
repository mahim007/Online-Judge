#include<bits/stdc++.h>
using namespace std;
#define i64 unsigned long long int
#define maxx 65
bool tag[maxx];
map<i64,i64>M;

int main()
{
    tag[0]=tag[1]=1;
    for(i64 i=4;i<=maxx;i=i+2)
        tag[i]=1;
    for(i64 i=3;i*i<=maxx;i=i+2)
    {
        if(tag[i]==0)
        {
            for(i64 j=i*i;j<=maxx;j=j+i+i)
                tag[j]=1;
        }
    }

    i64 i,j,m,n,p,lim=99999,bit=64;
    for(i=2;lim>3;i++)
    {
        m=i;n=i;
        lim=ceil(bit/(log(i)/log(2)));
        for(p=2;p<lim;p++)
        {
            m=m*n;
            if(tag[p])
            {
                M[m]=m;
            }
        }
    } //cout<<M.size()<<endl;
    puts("1");
    map<i64,i64>::iterator it;
    for(it=M.begin();it!=M.end();it++)
    {
        printf("%llu\n",*it);
    }
    return 0;
}
