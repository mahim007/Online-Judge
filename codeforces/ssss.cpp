#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b,c;
    cin>>a>>b;
    c = a+b;
    vector<int> va,vb,vc;
    while(a>0){
        int t = a%10;
        a/=10;
        va.push_back(t);
    }
    while(b>0){
        int t = b%10;
        b/=10;
        vb.push_back(t);
    }
    while(c>0){
        int t = c%10;
        c/=10;
        vc.push_back(t);
    }
    int mx = max(va.size(), max(vb.size(), vc.size()));
    while(va.size()<mx){
        va.push_back(0);
    }
    while(vb.size()<mx){
        vb.push_back(0);
    }
    while(vc.size()<mx){
        vc.push_back(0);
    }
    reverse(va.begin(), va.end());
    reverse(vb.begin(), vb.end());
    reverse(vc.begin(), vc.end());
    for(int i=0; i<mx; i++){
        if(va[i] + vb[i] != vc[i]){
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
}

