#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll s[1000];

int main(){
    ll T,t,i,j,ans,n,k;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld",&n);
        if((n & (n-1))==0){
            printf("Case %lld: %lld\n",t,n<<1);
            continue;
        }
        else{
            ll sv=n;
            i=0;
            while(n>0){
                s[i++]=((n&1));
                n=n>>1;
            }

            ll flag=0;
            reverse(s,s+i);
            ll first=0;
            ll zero=0;
            if(s[i-1]==0){
                zero=1;
            }

            for(j=i-1;j>1;j--){
                if(s[j]==1){
                    if(first==0)
                        first=j;
                }

                if(s[j]==1 && s[j-1]==0){
                    swap(s[j],s[j-1]);
                    flag=1;
                    if(flag==1){
                        for(ll x=i-1;x>j;x--){
                            if(s[x]!=0) continue;
                            for(ll y=x-1;y>=j;y--){
                                if(s[y]==1){
                                    s[x]=s[y];
                                    s[y]=0;
                                    break;
                                }
                            }
                        }
                    }
                    break;
                }
            }

            if(flag==0){
                s[i]=0;
                i++;
                for(j=i-1;j>1;j--){
                    for(k=j-1;k>0;k--){
                        if(s[k]==1){
                            s[j]=s[k];
                            s[k]=0;
                            break;
                        }
                    }
                    }
                }
            }

            ans=0;
            ll p;
            for(j=0,p=i-1;j<i;j++,p--){
                ans+=s[j]<<p;
            }
            printf("Case %lld: %lld\n",t,ans);
        }
    return 0;
}
