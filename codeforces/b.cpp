#include<bits/stdc++.h>
using namespace std;

#define i64 long long int

int main()
{
    i64 n,m,count=0;
    cin>>n>>m;
    while(m>n)
    {
        if(m%2==1)
        {
            m=m+1;
            count++;
        }
        else

        {
            m=m/2;
            count++;
        }

    }
    if(n>m)
        count=count+(n-m);
    cout<<count<<endl;
}
