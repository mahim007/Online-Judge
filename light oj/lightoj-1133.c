#include<stdio.h>

int main()
{
        int a[100];
        int m,n,i,j,k,temp,t,l;
        char ch;
        
        scanf("%d",&t);
        for(i=1;i<=t;i++)
        {
                scanf("%d %d",&n,&m);
                for(j=0;j<n;j++)
                        scanf("%d",&a[j]);
                
                m=m*2;
                for(l=0;l<m;l++)
                {
                        {
                        scanf("%c",&ch);
                        if(ch=='P')
                        {
                                int pos1,pos2;
                                scanf("%d %d",&pos1,&pos2);
                                temp=a[pos2];
                                a[pos2]=a[pos1];
                                a[pos1]=temp;
                        }
                        else if(ch=='S')
                        {
                                int s;
                                scanf("%d",&s);
                                for(k=0;k<n;k++)
                                        a[k]=a[k]+s;
                        }
                        if(ch=='R')
                        {
                                int lim,last;
                                lim=n/2;
                                last=n-1;
                                for(k=0;k<lim;k++,last--){
                                temp=a[last];
                                a[last]=a[k];
                                a[k]=temp;
                                }
                        }
                        else if(ch=='M')
                        {
                                int mul;
                                scanf("%d",&mul);
                                for(k=0;k<n;k++)
                                        a[k]=a[k]*mul;
                        } 
                        else if(ch=='D')
                        {
                                int s;
                                scanf("%d",&s);
                                for(k=0;k<n;k++)
                                        a[k]=a[k]/s;
                        }
                        }

                }
        printf("Case %d:\n",i);
        for(k=0;k<n-1;k++)
               printf("%d ",a[k]);
        printf("%d",a[k]);
        printf("\n");
        
        }
        
        return 0;
}