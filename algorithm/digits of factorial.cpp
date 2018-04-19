#include<bits/stdc++.h>
#define pi acos(-1.00)
using namespace std;
int main()
{
    int n,ans;
    cin>>n;
    ans=floor((log(2*pi*n)/2 + n*(log(n) - 1) + 1/(12*n))/log(10)) + 1;
    printf("%d",ans);
}
