#include<stdio.h>
int main()
{
    int a,b,c,d;
    while(scanf("%d %d",&a,&b)==2)
    {
        {
            {
                if(a<0 && b<0)
                    break;
                else if(a==0)
                    a=100;
                else if(b==0)
                    b=100;
            }
            if(a>b){
                c=a-b;
                d=((99-a)+1+b);}
            else{
                c=b-a;
                d=((99-b)+1+a);}

        }
        if(c<=d)
            printf("%d\n",c);
        else
            printf("%d\n",d);
    }
    return 0;
}
