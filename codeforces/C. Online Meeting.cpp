#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 100009

map<ll,ll>M,active,ans,checker;
ll a[mxn];
//vector<ll>active;
char s[mxn][5];
ll n,m;

void check(ll x){ //cout<<x<<"\n";
    for(ll i=1;i<=m;i++){
        if(s[i][0]=='+'){
            checker[a[i]]=1;
        }
        else{
            checker.erase(a[i]);
        }
       // cout<<i<<" "<<checker.size()<<"\n";
        if(checker.size()>0 && checker[x]==0) return;
    }

    ans[x]=1;
}

int main(){
    ll i,j,k,p=-1,d;
    char ch;
    scanf("%lld %lld",&n,&m);
    getchar();
    for(i=1;i<=m;i++){
        scanf("%s %lld",s[i],&a[i]);
        getchar();
        if(s[i][0]=='-' && M[a[i]]==0){
            p=i;
            active[a[i]]=1;
        }

        M[a[i]]=1;
    }

    for(i=1;i<=n;i++){
        if(M[i]==0){
            ans[i]=1;
        }
    }

    if(p!=-1){
        map<ll,ll>::iterator it;
        for(it=active.begin();it!=active.end();it++){
            checker[it->first]=1;
        }
        check(a[p]);
    }
    else{
        check(a[1]);
    }

    printf("%lld\n",(ll)ans.size());
    map<ll,ll>::iterator it;
    for(it=ans.begin();it!=ans.end();it++){
        printf("%lld ",(ll)it->first);
    }

    return 0;
}
