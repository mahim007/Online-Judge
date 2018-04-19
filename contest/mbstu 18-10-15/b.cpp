#include<bits/stdc++.h>
using namespace std;
#define ll long long int
char s[20000900];
ll num[100009];

ll getnumber(){
    ll i=0,j=0;
    ll ln=strlen(s);
    ll flag=0;
    ll neg=0;
    for(i=0;i<ln;i++){
        if(s[i]>='0' && s[i]<='9'){
            if(flag==1){
                num[j]=num[j]*10+s[i]-'0';
            }
            else{
                flag=1;
                j++;
                num[j]=0;
                num[j]=num[j]*10+s[i]-'0';
            }
        }
        else if(s[i]=='-'){
            neg=1;
        }
        else{
            flag=0;
            if(neg==1)
                num[j]=-num[j];
            neg=0;
        }
    }
    if(neg==1)
        num[j]=-num[j];
    return j;
}

int main(){
    ll l,r,sum,i,j,n,mx;
    while(gets(s)){
        sum=0;
        mx=0;
        n=getnumber();
        //cout<<n<<endl;
        //for(i=1;i<=n;i++) cout<<num[i]<<" ";
        //cout<<endl;
        i=1,j=1;
        while(i<=n && j<=n){
            while(sum>=0 && i<=n){
                sum+=num[i]; //cout<<sum<<" add "<<num[i]<<endl;
                i++;
                if(sum>mx)
                    mx=sum;
            }

            while(j<i){
                sum-=num[j];//cout<<sum<<" sub "<<num[i]<<endl;
                j++;
                if(sum>mx)
                    mx=sum;
            }
        }
        printf("%lld\n",mx);
    }
    return 0;
}
