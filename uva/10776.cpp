#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<char>V;
char s[39];
ll k,n;
ll used[39];
map<string,ll>M;

void call(ll lst){
    if(V.size()==k){
        string p;
        for(ll i=0;i<k;i++) p+=V[i];
        if(M[p]==0){
            M[p]=1;
            cout<<p<<"\n"; //system("pause");
        }
        return;
    }

    for(ll i=lst+1;i<=n-k+V.size()+1;i++){
        if(!used[i]){
            used[i]=1;
            V.push_back(s[i]);
            call(i);
            used[i]=0;
            V.pop_back();
        }

        while(s[i]==s[i+1]) i++;
    }
}

int main(){
    while(scanf("%s %lld",s,&k)==2){
        n=strlen(s);
        sort(s,s+n);
        n--;
        call(-1);
        V.clear();
        M.clear();
    }

    return 0;
}
