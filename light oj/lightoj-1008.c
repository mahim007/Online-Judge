#include<stdio.h>
#define N 5
int main()
{
        long long int light[N][N];
        long long int i,j,k=1,s,l,t;
        
        for(i=1;i<N;i++)
        {
                if((i%2)==1)
                {
                        for(j=1;j<=i;j++)
                                light[i][j]=k++;
                        
                        i=j-2;
                        while(i>=1)
                        {
                                light[i--][j]=k++;
                        }
                }
                else
                        for(j=1;j<=i;j++)
                        {
                                light[j][i]=k++;
                        }
                        j=j-2;
                        
                        while(j>=1)
                        {
                                light[i][j--]=k++;
                        }
        }
        
        
        
        
        scanf("%lld",&t);
        for(l=1;l<=t;l++)
        {
                scanf("%lld",&s);
                
                for(i=1;i<N;i++)
                {
                        for(j=1;j<N;j++)
                        {
                                if(s==light[i][j])
                                        printf("Case %lld: %lld %lld\n",l,i,j);
                        }
                }
        }
        
        
        return 0;
}














