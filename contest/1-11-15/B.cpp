#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
map<string,ll>M,B,listed;
string str[1009];
vector<string>V;
string inpts[1009];
ll inptval[1009];
int main(){
    ll n,i,cnt=0;
    scanf("%lld",&n);
    ll bst=-1,indx;
    string ans;
    for(i=1;i<=n;i++){
        string p;
        ll val;
        cin>>p>>val;
        inpts[i]=p;
        inptval[i]=val;
        if(M.find(p)==M.end()){
            str[++cnt]=p;
            M[p]=val;
            if(val>B[p]){
                B[p]=val;
            }
        }
        else{
            M[p]+=val;
            if(M[p]>B[p]){
                B[p]=M[p];
            }
        }
    }
    for(i=1;i<=cnt;i++){
        if(M[str[i]]>bst){
            bst=M[str[i]];
        }
    }
    for(i=1;i<=cnt;i++){
        if(M[str[i]]==bst){
            V.push_back(str[i]);
            listed[str[i]]=1;
        }
    }
    if(V.size()==1){
        ans=V[0];
    }
    else{
        for(i=1;i<=n;i++){
            if(listed[inpts[i]]){
                listed[inpts[i]]+=inptval[i];
                if(listed[inpts[i]]>=bst+1){
                    ans=inpts[i];
                    break;
                }
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
