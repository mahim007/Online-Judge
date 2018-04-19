#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string s;
ll n,k;

ll cal(char x){
    ll l=0,r=0,cnt=0,ans=0;
    while(l<n && r<n){
        while((s[r]==x || cnt<k) && r<n){
            if(s[r]!=x){
                cnt++;
            }
            //if(cnt<=k)
                ans=max(ans,(r-l+1));
            r++;
        }

        while(l<=r){
            if(s[l]==x)
                l++;
            else break;
        }
        l++;
        cnt--;
    }

    return ans;
}

int main(){
    cin>>n>>k>>s;
    cout<<max(cal('a'),cal('b'));
    return 0;
}
