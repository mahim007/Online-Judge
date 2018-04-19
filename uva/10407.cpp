#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
int main()
{
    i64 data[1009],n,i,j,k,div,res;
    k=-1;
    while(1)
    {
        k++;
        scanf("%lld",&n);
        if(k==0 && n==0)
            break;
        if(k!=0 && n==0)
        {
            vector<i64>V;
            for(i=1;i<k;i++)
            {
                V.push_back(abs(data[i]-data[i-1]));
            }
            i64 gcd=V[0];
            for(i=1;i<V.size();i++)
            {
                gcd=__gcd(gcd,V[i]);
            }
            printf("%lld\n",gcd);
            k=-1;
        }
        else
            data[k]=n;
    }
    return 0;
}
