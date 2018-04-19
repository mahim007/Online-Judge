#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string s;
ll ln;

ll getmod(ll m){
    ll sum=0,i;
    for(i=0;i<ln;i++){
        sum=sum*10+(s[i]-'0'); //cout<<"before:"<<sum;
        sum=sum%m; //cout<<"    after:"<<sum<<endl;
    } //printf("for %lld sum is %lld.\n",m,sum);
    if(sum==0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    ll i,j,k,n,t,T,d;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        cin>>s;
        ln=s.size();
        scanf("%lld",&n);
        ll flag=1;
        for(i=1;i<=n;i++){
            scanf("%lld",&d);
            if(flag){
                flag=getmod(d);
            }
            else{
                continue;
            }
        }
        if(flag==1){
            cout<<s;
            printf(" - Wonderful.\n");
        }
        else{
            cout<<s;
            printf(" - Simple.\n");
        }
    }
    return 0;
}
