#include<iostream>

using namespace std;

int main(void)
{
        unsigned int a,b,i,temp,total,max;
        
        while(cin>>a>>b)
        {
                 max=0;
                total=0;
                
                if(a>b)
                {
                        temp=b;
                        b=a;
                        a=temp;
                }
                
               
                for(i=a;i<=b;i++)
                { 
                      
                        total=0;
                          temp=i;
                while(1)
                {
                        if(temp==1)
                        {
                                        total++;
                                        break;
                        }
                        total++;        
                        if(temp%2==0)
                                temp=temp/2;
                        else
                                temp=3*temp+1;
                        
                }
                        if(max<total)
                                max=total;

          }
        cout<<max<<endl;
        }
        
        return 0;
}