#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 1009

char s[mxn];
ll sum=0;

int main(){
    ll T,t,i,j,k,n,f;
    scanf("%lld",&T);
    getchar();
    for(t=1;t<=T;t++){
        gets(s);
        n=strlen(s);
        for(i=0;i<n;i++) sum+=s[i]-'0';
        ll p1=-1,p2=-1;
        i=0;
        while(1){
            i++;
            f=0;
            for(k=0;k<n;k++){
                if((s[k]>='1' && s[k]<='9')&& ((sum-(s[k]-'0'))%3==0)){
                    p1=i;
                    sum-=s[k]-'0';
                    s[k]='x';
                    f=1;
                    break;
                }
            }

            if(f==0) break;
            else f=0;

            for(k=0;k<n;k++){
                if((s[k]>='1' && s[k]<='9')&& ((sum-(s[k]-'0'))%3==0)){
                    p2=i;
                    sum-=s[k]-'0';
                    s[k]='x';
                    f=1;
                    break;
                }
            }

            if(f==0) break;
        }

        printf("Case %lld: ",t);
        if(p1>p2) printf("S\n");
        else printf("T\n");
    }

    return 0;
}
