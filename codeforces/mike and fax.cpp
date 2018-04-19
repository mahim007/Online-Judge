#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string s;
int main(){
    ll ln,i,j,k,n;
    cin>>s>>n;
    ln=s.size();
    if(ln%n!=0){
        printf("NO\n");
        return 0;
    }
    bool flag=1;
    ll d=ln/n;
    for(i=0;i<ln;i+=d){
        if(flag==0){
            break;
        }
        for(j=i,k=i+d-1;j<i+d;j++,k--){
            if(s[j]!=s[k]){
                flag=0;
                break;
            }
        }
    }
    if(flag==1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
