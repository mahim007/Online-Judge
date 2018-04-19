/****************************************************************************
 *
 * let d = gcd (n1, n2)
 *     n1 * x + n2 * y = n  <==>  n1 / d * x + n2 / d * y = n / d  ... (1)
 * let n1 / d * x0 + n2 / d * y0 = 1  ... (2)
 *     x0 and y0 can be get by 'Extended Euclid Algorithm'.
 * multiply (2) by 'n / d' and compare to (1), we get:
 *     x = x0 * n / d
 *     y = y0 * n / d
 * if we have x, y such that:
 *     n1 * x + n2 * y = n
 * then we have:
 *     n1 * (x + i * n2 / d) + n2 * (y - i * n1 / d) = n   (i = 1, 2, ...)  ... (3)
 * because 'n1 * (x + i * n2 / d)' increase n1 * n2 / d while 'n2 * (y - i * n1 / d)' decrease n1 * n2 / d.
 * and here 'x' and 'y' are fixed values.
 *
 * according to the statement of the problem, x >= 0 and y >= 0.
 * so we get:
 *     x + i * n2 / d >= 0 and y - i * n1 / d >= 0
 * solve these two inequations we get the range of 'i', let's note the range [l, u]
 *
 * the problem asks us to minimize 'c1 * x + c2 * y',
 * let z = c1 * (x + i * n2 / d) + c2 * (y - i * n1 / d)  ... (4)
 * so (4) is what we want to minimize.
 * since it's monotonically either increasing or decreasing, what we need to do is examine two cases when i == l and i == u.
 *
 ****************************************************************************/


#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll n;

ll egcd(ll a,ll b,ll &xo,ll &yo){
    if(a==0){
        xo=0;
        yo=1;
        return b;
    }
    ll x,y;
    ll d=egcd(b%a,a,x,y);
    xo=y-(b/a)*x;
    yo=x;
    return d;
}

int main(){
    ll n1,c1,n2,c2;
    while(scanf("%lld",&n)==1){
        if(n==0){
            break;
        }
        scanf("%lld %lld %lld %lld",&c1,&n1,&c2,&n2);
        ll gcd,xo,yo;
        gcd=egcd(n1,n2,xo,yo);
        if(n%gcd!=0){
            printf("failed\n");
            continue;
        }
        ll low=(ll)ceil(1.0*(-xo)*n/n2); // lower of i
        ll high=(ll)floor(1.0*yo*n/n1); // high of i
        if(low>high){
            printf("failed\n");
            continue;
        }
        ll xlow=xo*n/gcd+low*n2/gcd;
        ll xhigh=xo*n/gcd+high*n2/gcd;
        ll ylow=yo*n/gcd-low*n1/gcd;
        ll yhigh=yo*n/gcd-high*n1/gcd;
        ll vlow=c1*xlow+c2*ylow;
        ll vhigh=c1*xhigh+c2*yhigh;
        if(vlow<vhigh){
            printf("%lld %lld\n",xlow,ylow);
        }
        else{
            printf("%lld %lld\n",xhigh,yhigh);
        }
    }
    return 0;
}
