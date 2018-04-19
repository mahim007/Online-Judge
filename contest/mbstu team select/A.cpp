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
#define maax 1000

int main(){
    char str[maax],str1[maax];
    char s[maax],t[maax];
    ll n,m,T,i;
    scanf("%lld",&T);
    getchar();
    for(i=1;i<=T;i++){
        gets(str);
    string z;
   // strcpy(t,"nai");
   // m=0;
    sscanf(str,"%[A-Z] %lld %[A-Z] %lld",s,&n,t,&m);
    //cout<<s<<" "<<n<<" "<<t<<" "<<m<<endl;
    sprintf(str1,"%s%lld%s%lld",s,n,t,m);
    //cout<<str1<<endl;
    if(strcmp(str,str1)==0){
        string z;
        while(m){
            ll mod=m%26;
            if(mod==0){
                mod=26;
                m--;
                m=m/26;
            }
            else
                m=m/26;
            z+=mod+64;
        }
        reverse(z.begin(),z.end());
        cout<<z<<n<<endl;
    }
    else{
        ll len=strlen(s);
        ll val=0;
        ll p=0;
        for(ll i=len-1;i>=0;i--){
            //cout<<s[i]<<" "<<(s[i]-64)<<" "<<(ll)ceil(pow(26,p))<<endl;
            val+=((s[i]-64)*(ll)ceil(pow(26,p)));//cout<<s[i]<<" "<<val<<endl;
            p++;
        }
        printf("R%lldC%lld\n",n,val);
    }
    }

    return 0;
}

