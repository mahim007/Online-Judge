#include<iostream>
#include<vector>
#include<stdio.h>
#include<algorithm>
//#include<pair>
#include<deque>
using namespace std;
#define i64 long long int

int main()
{
    int data[100];
    int n,k,i,j;
    deque<pair<int,int> >window;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&data[i]);
    }

    for(i=0;i<n;i++)
    { cout<<"inside...\n";
        while(!window.empty() && window.back().first>=data[i])
            window.pop_back();

        window.push_back(std::make_pair(data[i],i));

        while(window.front().second<=i-k)
            window.pop_front();

        cout<<window.front().first<<' ';
    }
}
