#include<stdio.h>

int main()
{
        int j,t;
        int len;
        char str[1000];
        scanf("%d",&t);
        for(j=1;j<=t;j++){
                scanf("%s",str);
        
                len=strlen(str);
                
                str[len]='\0';
               
               if(str[0]==str[len-1])
                         printf("Do-it\n");
                
                else
                        printf("Do-it-Not\n");
                
               
        }
        
        return 0;
}