#include<bits/stdc++.h>
using namespace std;

char arr[]={'a','b','c','d'};
int taken[10]={0};
vector<char>V;

void call()
{
    if(V.size()==4)
    {
        for(int i=0;i<4;i++)
        {
            printf("%c",V[i]);
        }
        printf("\n");
        return;
    }

    for(int i=0;i<4;i++)
    {
        if(taken[i]==0)
        {
            taken[i]=1;
            V.push_back(arr[i]);
            call();
            taken[i]=0;
            V.pop_back();
        }
    }
}

int main()
{
    call();
    return 0;
}
