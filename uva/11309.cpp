#include<bits/stdc++.h>
using namespace std;
bool ispalindrome(int tym)
{
    char a[5];
    sprintf(a,"%d",tym);
    int len=strlen(a);
    a[len]='\0';
    string s=a;
    int siz=s.size();
    int i,j;
    for(i=0,j=siz-1;i<=siz/2;i++,j--)
    {
        if(s[i]!=s[j])
            return 0;
    }
    return 1;
}

int next_palindrome(int tym)
{
    while(1)
    {
        tym++;
        if(tym>2359)
            tym=0;
        if(tym%100==60)
            tym=tym+40;
        if(ispalindrome(tym))
            return tym;
    }
}
int main()
{
    int hh,mm,tym,flag,T,t;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        scanf("%d:%d",&hh,&mm);
        tym=hh*100+mm;
        if(tym==2359)
        {
            printf("00:00\n");
            continue;
        }
        int ftym,fhh,fmm;
        ftym=next_palindrome(tym);
        fhh=ftym/100;
        fmm=ftym%100;
        printf("%02d:%02d\n",fhh,fmm);
    }
    return 0;
}
