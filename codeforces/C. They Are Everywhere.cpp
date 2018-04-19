#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define nfs ios_base::sync_with_stdio(0);

ll sz,n;
string s;
map<char,ll>M1,M2;

void check1(){
    ll i,j;
    for(i=0;i<sz;i++){
        if(M1[s[i]]==0){
            n++;
        }

         M1[s[i]]++;
    }
}

ll check2(){
    ll l=0,r=0;
    ll res=999999;
    ll k=0;
    while(r<sz){ //cout<<r<<" "<<sz<<endl;
        while(r<sz && k<n){
            if(M2[s[r]]==0){
                k++;
            }

            M2[s[r]]++;
            r++;
        }

        while(l<=r){ //cout<<l<<" "<<r<<endl;
            if(k==n)
            res=min(res,(r-l));
            M2[s[l]]--;
            if(M2[s[l]]==0){
                k--;
                l++;
                break;
            }

            l++;
        }
    }

    return res;
}

int main(){
    nfs;
    ll i,j,k,ans;
    cin>>sz;
    cin>>s;
    check1(); //cout<<"n:"<<n<<endl;
    ans=check2();
    cout<<ans<<"\n";

    return 0;
}
