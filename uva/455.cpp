#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sci(n) scanf("%d",&n)
#define scl(n) scanf("%lld",&n)
#define scd(n) scanf("%lf",&n)
#define sc scanf
#define pf printf
#define pfi(n) printf("%d",n)
#define pfl(n) printf("%lld",n)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define mem(a,n) memset(a,n,sizeof(a))
#define maax 89
char str[maax];
string s;
int main()
{
    ll T,t,i,j,k,len,n,flag,ln;
    scanf("%lld",&T);
    getchar();
    for(t=1;t<=T;t++){
        getchar();
        gets(str);
        len=strlen(str);
        flag=0;
        for(i=0;i<len;i++){
            if(flag==1)
            break;
            flag=1;
            s+=str[i];
            n=0;
            ln=s.size();
            for(j=0;j<len;j+=ln){
                if(flag==0)break;
                for(k=0;k<ln;k++){
                    if(str[j+k]!=s[k]){
                        flag=0;
                        break;
                    }
                }
            }
        }
        printf("%lld\n",(ll)s.size());
        s.clear();
        if(t!=T)
            printf("\n");
    }
}
