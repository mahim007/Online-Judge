#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mx 509
char s[mx][mx];
ll cumr[mx][mx],cumc[mx][mx];
int main(){
    ll r,c,i,j,k,flag,cnt,ans,q;
    cin>>r>>c;
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++)
            cin>>s[i][j];
    }

    for(i=1;i<=r;i++){
        cnt=0;
        flag=0;
        for(j=1;j<=c;j++){
            if(s[i][j]=='.' && flag) cnt++;
            else if(s[i][j]=='.') flag=1;
            else flag=0;
            cumr[i][j]=cnt;
        }
    }

    for(i=1;i<=c;i++){
        cnt=0;
        flag=0;
        for(j=1;j<=r;j++){
            if(s[j][i]=='.' && flag) cnt++;
            else if(s[j][i]=='.') flag=1;
            else flag=0;
            cumc[j][i]=cnt;
        }
    }

    cin>>q;
    for(k=1;k<=q;k++){
        ll x1,y1,x2,y2;
        ans=0;
        cin>>x1>>y1>>x2>>y2;
        for(i=x1;i<=x2;i++){
            ans+=cumr[i][y2]-cumr[i][y1];
        }

        for(i=y1;i<=y2;i++){
            ans+=cumc[x2][i]-cumc[x1][i];
        }

        cout<<ans<<endl;
    }

    return 0;
}
