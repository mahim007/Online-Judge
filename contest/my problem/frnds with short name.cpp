#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<char>V;
char s[39];
ll k,n,z;
ll used[39];
map<string,ll>M;

void call(ll lst){
    if(V.size()==k){
        string p;
        for(ll i=0;i<k;i++) p+=V[i];
        cout<<p<<"\n";
        z++;
//        if(M[p]==0){
//            M[p]=1;
//             //system("pause");
//        }
        return;
    }

    for(ll i=lst+1;i<=n-k+V.size()+1;i++){
        if(!used[i]){

            if(V.size()>0){
                if(s[i]<=V[V.size()-1]) continue;
            }

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
    ios_base::sync_with_stdio(0);
    cin.tie();
    ll prt,ans;
    while(cin>>prt){
        cin>>k;
        //scanf("%s %lld",s,&k);
        ans=0;
        for(ll i=1;i<=prt;i++){
        cin>>s;
        n=strlen(s);
        sort(s,s+n);
        n--;
        z=0;
        call(-1);
        ans=max(ans,z); cout<<z<<"\n";
        V.clear();
        M.clear();
        }

        cout<<ans<<"\n";
    }

    return 0;
}
