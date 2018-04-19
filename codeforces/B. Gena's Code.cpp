#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
int main(){
    ll ans=1;
    ll cnt=0;
    ll i,n,x,j;
    ll found=0;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>x;
        if(found==1) continue;
        if(x==0){
            found=1;
            continue;
        }
        else if(x==1) continue;
        else if(x%10==0){
            ll m=x;
            ll p=0;
            while(m%10==0){
                p++;
                m=m/10;
            }

            if(m==1){
                cnt+=log10(x);
            }
            else{
                ans=x;
            }
        }
        else{
            ans=x;
        }
    }

    if(found==1){
        printf("0\n");
    }
    else{
        cout<<ans;
        for(j=1;j<=cnt;j++) cout<<0;
        cout<<endl;
    }

    return 0;
}

