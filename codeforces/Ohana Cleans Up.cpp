#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string s[101];
int main(){
    ll i,j,k,n,mx,p;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>s[i];
    }
    mx=0;
    for(i=1;i<n;i++){
        p=0;
        for(j=i+1;j<=n;j++){
            if(s[i]==s[j]){
                p++;
                //cout<<"milse.\n";
                //cout<<s[i]<<" "<<s[j]<<endl;
            }
        }
        if(p>mx){
            mx=p;
        }
    }
    cout<<mx+1<<endl;
    return 0;
}
