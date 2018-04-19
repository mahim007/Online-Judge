#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 3009

ll a[mxn];
string s;

int main(){
    ios_base::sync_with_stdio(0);

    ll n,i,j,k,ans=0;
    cin>>n;
    cin>>s;

    for(i=0;i<n;i++) a[i]=1LL;

    i=0;
    ll f=0;
    while(i<n){
        if(s[i]=='L'){
            f=0;
            j=i-1;
            while(j>=0 && a[j]==1){
                if(s[j]=='R'){
                    f=1;
                    break;
                }

                j--;
            }

            for(k=j;k<=i;k++) a[k]=0;

            if(f==1)
            if((i-j+1)%2==1){
                a[(i+j)/2]=1;
            }

            i++;
        }

        else if(s[i]=='R'){
            f=0;
            j=i+1;
            while(j<n && a[j]==1){
                if(s[j]=='L'){
                    f=1;
                    break;
                }

                j++;
            }

            for(k=i;k<=j;k++) a[k]=0;

            if(f==1)
            if((j-i+1)%2==1){
                a[(j+i)/2]=1;
            }

            i=j+1;
        }
        else i++;
    }
    for(i=0;i<n;i++){ //cout<<a[i];
        ans+=a[i];
    }

    cout<<ans<<"\n";
    return 0;
}
