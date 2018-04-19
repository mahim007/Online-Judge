#include<stdio.h>
#include<math.h>

int main()
{
        int i,t;
        double rad,square,circle,result;
        scanf("%d",&t);
        for(i=1;i<=t;i++)
        {
                scanf("%lf",&rad);
                square=(rad*2)*(rad*2);
                circle=2*acos(0.0)*rad*rad;
                result=square-circle;
                result=result+0.000000001;
                printf("Case %d: %.2lf\n",i,result);
                
        }
        
        return 0;
}