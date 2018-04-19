#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,counter;

    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        counter=0;

        while(n>=2)
        {
            counter++;
            n=n-2;
        }
        printf("%d\n",counter);
    }
    return 0;
}
