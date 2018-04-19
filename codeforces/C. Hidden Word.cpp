#include<bits/stdc++.h>
using namespace std;
#define ll long long int

string s,p;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin>>s;
    ll p1,p2,i,j;
    for(i=0;i<27;i++){
        for(j=i+1;j<27;j++){
            if(s[i]==s[j]){
                p1=i;
                p2=j;
            }
        }
    }

    if(p2-p1==1) cout<<"Impossible\n";
    else{
        p="";
        for(i=0;i<27;i++){
            if(i==p2) continue;
            p+=s[i];
        }

        rotate(p.begin(),p.begin()+p1+(p2-p1+1)/2,p.end());
        for(i=0;i<13;i++) cout<<p[i];
        cout<<"\n";
        for(i=25;i>12;i--) cout<<p[i];
        cout<<"\n";
    }

    return 0;
}
