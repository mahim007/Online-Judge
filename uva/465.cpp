#include<bits/stdc++.h>
using namespace std;

#define i64 long long int
#define maax 2147483647
int main()
{
    char str[5000],a[5000],b[5000],ch;
    i64 num1,num2,sum,i,j,len,k,flag;

    while(gets(str))
    {
        flag=1;
        len=strlen(str);
        for(i=0;i<len;i++)
        {
            if(str[i]>='0' && str[i]<='9')
                break;
            else
                continue;
        }

        k=0;
        for(;str[i]>='0' && str[i]<='9' && i<len;i++)
        {
            a[k++]=str[i];
        }
        a[k]='\0'; //cout<<"a:"<<a<<endl;

        for(;i<len;i++)
        {
            if(str[i]=='+' || str[i]=='*')
            {
                ch=str[i];
                break;
            }
        }
        for(;i<len;i++)
        {
            if(str[i]>='0' && str[i]<='9')
                break;
            else
                continue;
        }

        k=0;
        for(;str[i]>='0' && str[i]<='9' && i<len;i++)
        {
            b[k++]=str[i];
        }
        b[k]='\0'; //cout<<"b:"<<b<<endl;

        puts(str);
        {
            num1=atoll(a); //cout<<"num1:"<<num1<<endl;
            if(num1>maax)
            {
                printf("first number too big\n");
                flag=0;
            }
        }

        {
            num2=atoll(b); //cout<<"num2:"<<num2<<endl;
            if(num2>maax)
            {
                printf("second number too big\n");
                flag=0;
            }
        }

        if(ch=='+')
        { //cout<<ch<<endl;
            if(flag==0)
            {
                printf("result too big\n");
            }
            else
            {
                sum=num1+num2;
                if(sum>maax)
                    printf("result too big\n");
            }
        }
        else
        { //cout<<ch<<endl;
            sum=num1*num2;
            if(sum>maax)
                printf("result too big\n");
        }
    }

}
