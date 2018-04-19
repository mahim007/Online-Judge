#include<bits/stdc++.h>
using namespace std;
#define i64 long long int

i64 gcd(i64 a,i64 b)
{
    if(a==0)
        return 0;
    i64 r;
    r=b%a;
    if(r==0)
        return a;
    gcd(r,a);
}

i64 power(i64 x,i64 cnt)
{
    i64 ans=1;
    for(i64 i=1;i<=cnt;i++)
    {
        ans=ans*10;
    }
    //cout<<"ans:"<<ans<<endl;
    return ans;
}

int main()
{  //freopen("321output","w",stdout);
    i64 i,j,k,cnt,ans,len,x,y,z,numerator,denumerator,div,t=1;
    long double d;
    char s[100];
    while(scanf("%lld",&j)==1)
    {
        if(j==-1)
            break;

        scanf("%s",s);
        len=strlen(s);
        cnt=0;
        for(i=len-1;i>=0;i--)
        {
            if(s[i]!='.')
                cnt++;
            else
                {
                    i--;
                    for(;i>=0;i--)
                    {
                        s[i]='0';
                    }
                }
        } //cout<<"cnt:"<<cnt<<endl;
        char a[10];
        k=0;
        for(i=len-j;i<len;i++)
        {
            a[k++]=s[i];
        } a[k]='\0'; //cout<<"a:"<<a<<endl;

        for(i=1;i<=6;i++)
        {
            strcat(s,a);
        } len=strlen(s);s[len]='\0'; //printf("s=%s\n",s);

        d=atof(s);
        //cout<<"d:"<<d<<endl;
        k=cnt-j;
        x=power(10,k+j); //cout<<"x:"<<x<<endl;

        if(j!=0)
        {
            y=power(10,k); //cout<<"y:"<<y<<endl;
            numerator=round((x*d))-round((y*d)); //cout<<"numerator:"<<numerator<<endl;
            denumerator=x-y; //cout<<"denumerator:"<<denumerator<<endl;
        }
        else
        { //cout<<"j:"<<j<<endl;
            y=x;
            numerator=round((x*d)); //cout<<"numerator:"<<numerator<<endl;
            denumerator=x;  //cout<<"denumerator:"<<denumerator<<endl;
        }

        div=gcd(numerator,denumerator); //cout<<"div:"<<div<<endl;
        if(div==0)
        {
            numerator=0;
            denumerator=1;
        }
        else
        {
            numerator=numerator/div;
            denumerator=denumerator/div;
        }
        //printf("j=%lld s=%lf  ",j,d);
        printf("Case %lld: %lld/%lld\n",t++,numerator,denumerator);
    }
    return 0;
}
