///Bismillahir Rahmanir Rahim

#include<cstdio>
#include<iomanip>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<cctype>
#include<algorithm>
#include<string>
#include<vector>
#include<queue>
#include<map>
#include<set>
#include<sstream>
#include<stack>
#include<list>
#include<iostream>
#include<assert.h>
#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")

/**Define file I/O **/
#define f_input freopen("input.txt","r",stdin)
#define f_output freopen("output.txt","w",stdout)

/**Define memory set function**/
#define mem(x,y) memset(x,y,sizeof(x))
#define CLEAR(x) memset(x,0,sizeof(x))

/**Define function and object**/
#define pb push_back
#define Sort(v) sort(v.begin(),v.end())
#define RSort(v) sort(v.rbegin(),v.rend())
#define CSort(v,C) sort(v.begin(),v.end(),C)
#define all(v) (v).begin(),(v).end()
#define sqr(x) ((x)*(x))
#define find_dist(a,b) sqrt(sqr(a.x-b.x)+sqr(a.y-b.y))

/**Define constant value**/
#define ERR 1e-9
#define pi (2*acos(0))
#define PI 3.141592653589793

/**Define input**/
#define scanint(a) scanf("%d",&a)
#define scanLLD(a) scanf("%lld",&a)
#define scanstr(s) scanf("%s",s)
#define scanline(l) scanf(" %[^\n]",l)
#define scandouble(d) scanf("%lf",&d)
#define scanchar(c) scanf("%c",&c)

/**Define Bitwise operation**/
#define check(n, pos) (n & (1ll<<(pos)))
#define biton(n, pos) (n | (1ll<<(pos)))
#define bitoff(n, pos) (n & ~(1ll<<(pos)))

/**Define color**/
enum {WHITE,GREY,BLACK};

/**Sync off with stdio**/
#define __ cin.sync_with_stdio(false);\
           cin.tie();

/**Debug tools**/
#define what_is(x) cerr<<(#x)<<" is "<<x<<endl
using namespace std;

/**Typedef**/
typedef vector<int> vint;
typedef vector< vint > vint2D;
typedef vector<string> vstr;
typedef vector<char>vchar;
typedef vector< vchar >vchar2D;
typedef queue<int> Qi;
typedef queue< Qi > Qii;
typedef map<int,int> Mii;
typedef map<string,int> Msi;
typedef map<int,string> Mis;
typedef stack<int> stk;
typedef pair<int,int> pp;
typedef pair<int, pp > ppp;
typedef long long int ll;
ll inf=1e15;

/**Template & structure**/

template<class T>T gcd(T a,T b)
{
    return b == 0 ? a : gcd(b, a % b);
}

template<typename T>T lcm(T a, T b)
{
    return a / gcd(a,b) * b;
}

template<typename T>T last_bit(T n)
{
    return n & 1;
}

template<class T>T big_mod(T n,T p,T m)
{
    if(p==0)return (T)1;
    T x=big_mod(n,p/2,m);
    x=(x*x)%m;
    if(p&1)x=(x*n)%m;
    return x;
}

template<class T>T modInv(T a, T m)
{
    T x, y;
    extgcd(a, m, x, y);
    x %= m;
    while (x < 0)
    {
        x += m;
    }
    return x;
}

template<class T> T extgcd(T a,T b,T& x,T& y)
{
    if(b==0)
    {
        x=1;
        y=0;
        return a;
    }
    else
    {
        int g=extgcd(b,a%b,y,x);
        y-=a/b*x;
        return g;
    }
}

template<class T>T multiplication(T n,T p,T m)
{
    if(p==0)return (T)0;
    T x=multiplication(n,p/2,m);
    x=(x+x)%m;
    if(p&1)x=(x+n)%m;
    return x;
}

template<class T>T my_pow(T n,T p)
{
    if(p==0)return 1;    ///n to the power p
    T x=my_pow(n,p/2);
    x=(x*x);
    if(p&1)x=(x*n);
    return x;
}

template <class T> double getdist(T a, T b)
{
    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));   /// distance between a & b
}

template <class T> T extract(string s, T ret)
{
    stringstream ss(s);    /// extract words or numbers from a line
    ss >> ret;
    return ret;
}

template <class T> string tostring(T n)
{
    stringstream ss;    /// convert a number to string
    ss << n;
    return ss.str();
}

template<class T> T Mod(T n,T m)
{
    return (n%m+m)%m;   ///For Positive Negative No.
}

template<class T> T MIN3(T a,T b,T c)
{
    return min(a,min(b,c));   /// minimum of 3 number
}

template<class T> T MAX3(T a,T b,T c)
{
    return max(a,max(b,c));   ///maximum of 3 number
}

template <class T> void print_vector(T &v)
{
    int sz=v.size();    /// prints all elements in a vector
    if(sz)cout<<v[0];
    for(int i = 1; i < sz; i++)cout << ' '<<v[i];
    cout<<"\n";
}

bool isVowel(char ch)
{
    ch=toupper(ch);
    if(ch=='A'||ch=='U'||ch=='I'||ch=='O'||ch=='E') return true;
    return false;
}

bool isConsonant(char ch)
{
    if (isalpha(ch) && !isVowel(ch)) return true;
    return false;
}

template <class R> R Josephus(R n,R k)
{
    R ans=1;
    for(R i=2; i<=n; i++)ans=(ans+k-1)%i+1;
    return ans;
}

template <class R> R toitent_Phi2(R a)
{
    R result = a;
    for(R i=2; i*i<=a; i++)
    {
        if(a%i==0) result=result-result/i;
        while(a%i==0) a=a/i;
    }
    if(a>1) result=result-result/a;
    return result;
}

template <typename T> T Angle(T x1,T y1,T x2, T y2)
{
    return atan( double(y1-y2) / double(x1-x2));
}


//namespace debug{
//    int sum(){return 0;}
//    template<typename T,typename... Args> T sum(T a,Args... args) {return a+sum(args...);}
//    void print(){cout<<"\n";return;}template<typename T, typename... Args>void print(T a,Args... args){cout<<a<<" ";print(args...);}
//}


/**Direction**/
///int dx[8] = {0, 1, 1, 1, 0, -1, -1, -1};int dy[8] = {1, 1, 0, -1, -1, -1, 0, 1}; ///8 Direction
///int dx[4] = {1, 0, -1, 0};int dy[4] = {0, 1, 0, -1}; ///4 Direction
///int dx[]={2,1,-1,-2,-2,-1,1,2};int dy[]={1,2,2,1,-1,-2,-2,-1};///Knight Direction
///int dx[]={-1,-1,+0,+1,+1,+0};int dy[]={-1,+1,+2,+1,-1,-2}; ///Hexagonal Direction


/******************************End******************************/

#define mxn 100009

ll grid[3][mxn];
ll dp[3][mxn][2];
ll vis[3][mxn][2];
ll n;

ll valid(ll x,ll y)
{
    if(x<1 || x>2) return 0;
    if(y<1 || y>n) return 0;
    return 1;
}

ll fun(ll x,ll y,ll p,ll prex,ll prey)
{ printf("now at x=%lld y=%lld p=%lld\n",x,y,p+1);
    if(valid(x,y)==0)
    {   if(p==0) return inf;
        else return -inf;
    }

    if(x==2 && y==n) return grid[2][n];

    ll &res=dp[x][y][p];
    if(res!=-1) return res;
    res=0;
    ll p1,p2,p3;
    if(p==0)    p1=p2=p3=-inf;
    else p1=p2=p3=inf;


    if(x+1!=prex || y!=prey)    p1=grid[x][y]+fun(x+1,y,p^1,x,y);
    if(x-1!=prex || y!=prey)    p2=grid[x][y]+fun(x-1,y,p^1,x,y);
    if(x!=prex || y+1!=prey)    p3=grid[x][y]+fun(x,y+1,p^1,x,y);

    printf("\nnow at x=%lld y=%lld p=%lld p1=%lld\n",x,y,p+1,p1);
    printf("now at x=%lld y=%lld p=%lld p2=%lld\n",x,y,p+1,p2);
    printf("now at x=%lld y=%lld p=%lld p3=%lld\n",x,y,p+1,p3);

    if(p==0) return res=max(p1,max(p2,p3));
    else return res=min(p1,min(p2,p3));

}

int main()
{
    __;

    ll T,t;
    ll i,j,k;
    ll m,q;
    cin>>n;
    for(i=1; i<=2; i++)
    {
        for(j=1; j<=n; j++)
        {
            cin>>grid[i][j];
        }
    }

    mem(dp,-1);
    ll ans=fun(1,1,1,0,0);

    cout<<"player 1\n";
    for(i=1;i<=2;i++){
        for(j=1;j<=n;j++){
            cout<<dp[i][j][0]<<" ";
        } cout<<"\n";
    }

    cout<<"player 2\n";
    for(i=1;i<=2;i++){
        for(j=1;j<=n;j++){
            cout<<dp[i][j][1]<<" ";
        } cout<<"\n";
    }

    cout<<ans<<"\n";


    return 0;
}

