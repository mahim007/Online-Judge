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
#define maax 200
char str[maax];
map<string,ll>M;
string s;
int main()
{
    M["zero"]=0;
    M["one"]=1;
    M["two"]=2;
    M["three"]=3;
    M["four"]=4;
    M["five"]=5;
    M["six"]=6;
    M["seven"]=7;
    M["eight"]=8;
    M["nine"]=9;
    M["ten"]=10;
    M["eleven"]=11;
    M["twelve"]=12;
    M["thirteen"]=13;
    M["fourteen"]=14;
    M["fifteen"]=15;
    M["sixteen"]=16;
    M["seventeen"]=17;
    M["eighteen"]=18;
    M["nineteen"]=19;
    M["twenty"]=20;
    M["thirty"]=30;
    M["forty"]=40;
    M["fifty"]=50;
    M["sixty"]=60;
    M["seventy"]=70;
    M["eighty"]=80;
    M["ninety"]=90;
    M["hundred"]=100;
    M["thousand"]=1000;
    M["million"]=1000000;

    ll i,j,k,n,len,x,ans,num,sign,milllion,thousand,hundred;
    while(gets(str))
    {
        ans=0;
        num=0;
        sign=1;
        milllion=thousand=hundred=0;
        len=strlen(str);
        str[len]=' ';
        len++;
        str[len]='\0';
        for(i=0;i<len;i++){
            if(str[i]!=' ')
            {
                s+=str[i];//cout<<s<<endl;
            }
            else
            {
                if(s=="negative"){ //cout<<s<<endl;
                    sign=-1;
                    s.clear();
                }
                else if(s=="hundred" || s=="thousand" || s=="million"){//cout<<s<<endl;
                    if(s=="million"){
                        milllion=1;
                        ans=(ans+num)*M[s];
                        num=0;
                        s.clear();
                    }
                    else if(s=="thousand"){
                        thousand=1;
                        if(milllion==1){
                            ans+=num*M[s];
                            num=0;
                            s.clear();
                        }
                        else{
                            ans=(ans+num)*M[s];
                            num=0;
                            s.clear();
                        }
                    }
                    else{
                        num=num*M[s];
                        s.clear();
                    }
                }
                else if(s=="twenty" || s=="thirty" || s=="forty" || s=="fifty" || s=="sixty" || s=="seventy" || s=="eighty" || s=="ninety"){
                    num+=M[s];
                    s.clear();
                }
                else{//cout<<s<<endl;
                    num+=M[s];
                    s.clear();
                }
            }
        }
        if(num!=0){
            ans+=num;
        }
        if(sign==-1)
            printf("-");
        cout<<ans<<endl;
        s.clear();
    }
    return 0;
}

