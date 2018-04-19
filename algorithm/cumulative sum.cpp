#include<bits/stdc++.h>
using namespace std;

int data[100];
int sum[100];

int main()
{
    int n,i,j,a;
    cin>>n;
    sum[0]=0;
    for(i=1;i<=n;i++)
    {
        cin>>data[i];
        sum[i]=sum[i-1]+data[i];
    }

    for(i=1;i<=n;i++)
    {
        cout<<data[i]<<" ";
    }cout<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<sum[i]<<" ";
    }
    cout<<endl;
    int u,v;
    cin>>u>>v;
    cout<<sum[v]-sum[u-1];
    return 0;
}
