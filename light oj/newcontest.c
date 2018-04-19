#include<stdio.h>

int main()
{
        int A[4];
        int B[4];
        
        int i,j,hit,blow;
        
        while("%d %d %d %d",&A[0],&A[1],&A[2],&A[3])
        {
                for(i=0;i<4;i++)
                        scanf("%d",&B[i]);
                hit=0;
                blow=0;
                
                for(i=0;i<4;i++)
                {
                        for(j=0;j<4;j++)
                        {
                                if(A[i]==B[j])
                                {
                                        if(i==j)
                                                hit++;
                                        blow++;
                                }
                        }
                }
                
                printf("%d %d\n",hit,blow);
        }
        
        return 0;
}