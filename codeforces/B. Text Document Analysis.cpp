#include<bits/stdc++.h>
using namespace std;
#define ll long long int

map<string,ll>M;
string s,p,q;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,i,j,k,cnt=0,longest=0;
    cin>>n;
    cin>>s;
    ll b=0;
    ll st=0;
    for(i=0;i<n;i++){
        if(s[i]=='('){
            if(st==1) longest=max(longest,(ll)p.size());
            if(p.size()>q.size()) q=p;
           p.clear();
           st=0;
            b=1;
        }
        else if(s[i]==')'){
            b=0;
            if(st==1) {
                //M[p]++;
                cnt++;
                p.clear();
            }

             st=0;
        }
        if(s[i]=='_' && b==0){
            if(st==1){
                longest=max(longest,(ll)p.size());
                if(p.size()>q.size()) q=p;
            }

             st=0;
            p.clear();
        }
        else if(s[i]=='_' && b==1){
            if(st==1){
            cnt++;
            st=0;
            }
            p.clear();
        }
        else if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') && b==0){
            st=1;
            p+=s[i];
        }
        else if(s[i]>='a' && s[i]<='z' || (s[i]>='A' && s[i]<='Z')){
            st=1;
        }
    }

    if(st==1 && b==1) cnt++;
    else if(st==1 && b==0) longest=max(longest,(ll)p.size());
    cout<<longest<<" "<<cnt<<"\n"; //cout<<"longest word:"<<q<<"\n";
    return 0;
}
