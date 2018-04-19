#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 109

char s[mxn][mxn];
ll arr[mxn];

int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);

    ll n,i,j,k,d,flag=1;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        scanf("%lld",&arr[i]);
    }

    getchar();
    for(i=1;i<=n;i++){
        gets(s[i]);
    }

    for(i=1;i<=n;i++){
        ll sz=strlen(s[i]);
        ll cnt=0;
        for(j=0;j<sz;j++){
            if(s[i][j]=='a' ||s[i][j]=='e' ||s[i][j]=='i' ||s[i][j]=='o' ||s[i][j]=='u' ||s[i][j]=='y' ) cnt++;
        }

        if(cnt!=arr[i]){
            flag=0;
            break;
        }
    }

    if(flag) cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}
