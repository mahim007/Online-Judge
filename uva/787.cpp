#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll>V;
int main(){
    ll n,i,j,k,mx,ans,x;
    while(scanf("%lld",&x)==1){
        if(x!=-999999)
            V.push_back(x);
        else continue;
        while(1){
            scanf("%lld",&x);
            if(x!=-999999)
                V.push_back(x);
            else
                break;
        }

        n=V.size(); //cout<<"siz:"<<n<<endl;
        mx=-999999;
        ans=1;
        for(i=0;i<n;i++){ //cout<<"i:"<<i<<endl;
            ans=1;
            for(j=i;j<n;j++){
                ans*=V[j]; //cout<<ans<<endl;
                if(ans>mx)
                    mx=ans;
            }
        }
        printf("%lld\n",mx);
        V.clear();
    }
    return 0;
}
