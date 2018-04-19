#include<bits/stdc++.h>
using namespace std;
#define ll long long int

vector<ll>p;
string res,res2;
ll fnd1,fnd2;
ll dp[109][909];

ll call1(ll pos,ll val){
    //if(fnd1==1) return;
    if(pos==0 && val==0){
        fnd1=1;
        res.clear();
        for(ll i=0;i<p.size();i++){
            res+='0'+p[i];
        }
        return 1ll;
    }
    else if(pos<0 || val<0) return 0ll;

    if(dp[pos][val]!=-1) return dp[pos][val];

    for(ll i=0;i<=9;i++){
        if(i==0 && p.size()==0) continue;
        p.push_back(i);
        dp[pos][val]=call1(pos-1,val-i);
        if(dp[pos][val]==1) return 1ll;
        p.pop_back();
    }

    return dp[pos][val];
}

ll call2(ll pos,ll val){
    //if(fnd2==1) return;
    if(pos==0 && val==0){
        fnd2=1;
        res2.clear();
        for(ll i=0;i<p.size();i++){
            res2+='0'+p[i];
        }
        return 1ll;
    }
    else if(pos<0 || val<0) return 0ll;

    for(ll i=9;i>=0;i--){
        p.push_back(i);
        dp[pos][val]=call2(pos-1,val-i);
        if(dp[pos][val]==1) return 1ll;
        p.pop_back();
    }

    return dp[pos][val];
}

int main(){
    ll n,s;
    cin>>n>>s;
    if(n==1 && s==0) cout<<0<<" "<<0<<"\n";
    else if(n>1 && s==0) cout<<-1<<" "<<-1<<"\n";
    else if((n*9)<s) cout<<-1<<" "<<-1<<"\n";
    else if(n==1 && s<=9) cout<<s<<" "<<s<<"\n";
    else{
        fnd1=0;
        fnd2=0;
        memset(dp,-1,sizeof dp);
        p.clear();
        fnd1=call1(n,s);
        memset(dp,-1,sizeof dp);
        p.clear(); //cout<<n<<" "<<s<<"\n";
        fnd2=call2(n,s);
        if(fnd1==1 || fnd2==1){
            cout<<res<<" "<<res2<<"\n";
        }
        else{
            cout<<-1<<" "<<-1<<"\n";
        }
    }

    return 0;
}
