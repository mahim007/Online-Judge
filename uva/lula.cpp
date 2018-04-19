#include<bits/stdc++.h>
using namespace std;

int F(int n)
{
    if(n>0)
        return n+F(n-2);
}

int main()
{
    int n=10;
    printf("%d\n",F(n));
}
