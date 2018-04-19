#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 100009
#define lim 9999999999999999
vector<string>V1,V2;
ll a[mxn];

string rev(string s){
    ll ln=s.size();
    for(ll i=0;i<=ln/2;i++){
        s[i]=s[ln-1-i];
    }
    return s;
}

int main(){
    ll n,i,j,k,ans=0,flag=1;
    scanf("%lld",&n);
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }

    for(i=0;i<n;i++){
        string s;
        cin>>s;
        V1.push_back(s);
        //V2.push_back(s);
    }

    for(i=0;i<n-1;i++){
        if(V1[i].size()<V1[i+1].size() || V1[i]<=V1[i+1]){
            continue;
        }
        else {
            ll c1=lim;
            ll c2=lim;
            string s=V1[i];
            string p=rev(V1[i]);
            if(p<=V1[i+1]){
                c1=a[i];
            }
            string q=rev(V1[i+1]);
            if(q>=V1[i]){
                c2=a[i+1];
            }

            if(c1==lim && c2==lim){
                printf("-1\n");
                return 0;
            }
            else if(c1<=c2){
                ans+=c1;
                V1[i]=p;
            }
            else if(c2<c1){
                ans+=c2;
                V1[i+1]=q;
            }
        }
    }

    printf("%lld\n",ans);
    return 0;
}
