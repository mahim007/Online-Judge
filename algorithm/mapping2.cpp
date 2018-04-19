#include<bits/stdc++.h>
using namespace std;
#define i64 long long int

int main()
{
    map<i64,i64>mymap;
    i64 input[]={-102,1,1345689,1345689,-102,66668,1345689,-102,1,-2};
    i64 asign=0;
    i64 compressed[100];
    int c=0;
    int n=sizeof(input)/sizeof(i64);

    for(int i=0;i<n;i++)
    {
        i64 x=input[i];
        if(mymap.find(x)==mymap.end())
        {
            mymap[x]=asign;
            printf("Mapping %lld with %lld\n",x,asign);
            asign++;
        }
        x=mymap[x];
        compressed[c++]=x;
    }

    printf("Compressed array: ");
    for(int i=0;i<n;i++)
        printf("%d ",compressed[i]);
    printf("\n");

    return 0;
}
