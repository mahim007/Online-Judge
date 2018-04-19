#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
string S[10],giver,reciver;
map<string,i64>M;
int main()
{
    i64 n,m,i,j,k=1,p;
    while(cin>>n)
    {
        for(i=0;i<n;i++)
        {
            cin>>S[i];
            M[S[i]]=0;
        }

        for(i=0;i<n;i++)
        {
            cin>>giver>>m>>p;
                i64 ammount;
                if(p==0)
                    continue;
                ammount=m/p;
                for(j=0;j<p;j++)
                {
                    cin>>reciver;
                    M[reciver]+=ammount;
                    M[giver]-=ammount;
                }
        }
        if(k!=1)
            printf("\n");
        k++;
        for(i=0;i<n;i++)
        {
            cout<<S[i]<<" "<<M[S[i]]<<endl;
        }
        M.clear();
        for(i=0;i<10;i++)
            S[i].clear();
    }
    return 0;
}
