#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mx 10009
ll arr2[mx];
ll arr3[mx];
map<string,ll>M;
string s;
int main(){
    ll i,j,k,ln,n;
    cin>>s;
    ln=s.size();
    arr2[ln]=arr3[ln]=1;
    for(i=ln-2;i>=5;i--){
        if(i==ln-2){
            M[s.substr(i,2)]=1;
            arr2[i]=1;
        }
        if(i==ln-3){
            M[s.substr(i,3)]=1;
            arr3[i]=1;
        }

        if(arr2[i+2]==1 && (i<s.size()-3 && s.substr(i,2)!=s.substr(i+2,2))){
            M[s.substr(i,2)]=1;
            arr2[i]=1;
        }

        if(arr3[i+3]==1 && (i<s.size()-5 && s.substr(i,3)!=s.substr(i+3,3))){
            M[s.substr(i,3)]=1;
            arr3[i]=1;
        }

        if(arr2[i+3]==1){
            M[s.substr(i,3)]=1;
            arr3[i]=1;
        }
        if(arr3[i+2]==1){
            M[s.substr(i,2)]=1;
            arr2[i]=1;
        }
    }

    cout<<M.size()<<endl;
    map<string,ll>::iterator it;
    for(it=M.begin();it!=M.end();it++) cout<<it->first<<endl;
    return 0;
}
