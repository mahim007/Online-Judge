#include <bits/stdc++.h>
using namespace std;

#define S 47000

int prime[S] = {1, 1}, p[S], N, check[1000001];

int isprime(int n) {
  if (n < S) return !prime[n];
  int i;
  for (i = 0; i < N && n > p[i]; i++)
    if (!(n % p[i])) return 0;
  return 1;
}

int main() {
  int i, j, l, u;
  for (i = 2; i < S; i++)
    if (!prime[i]) {
      p[N++] = i;
      for (j = i + i; j < S; j += i)
        prime[j] = 1;
    }
  while (scanf("%d%d", &l, &u) == 2) {
    for (i = l; ; i++) {
      check[i - l] = 1;
      if (!isprime(i))
        check[i - l] = 0;
      if (i == u) break;
    }
    int a = -1, b = -1, max = 0, min = 2e9, mx1, mx2, mn1, mn2;
    for (i = 0; i <= u - l; i++) {
      if (check[i]) {
        a = i;
        if (b != -1) {
          if (a - b > max) max = a - b, mx1 = b, mx2 = a;
          if (a - b < min) min = a - b, mn1 = b, mn2 = a;
        }
        b = a;
      }
    }
    if (!max) puts("There are no adjacent primes.");
    else printf("%d,%d are closest, %d,%d are most distant.\n", mn1 + l, mn2 + l, mx1 + l, mx2 + l);
  }
  return 0;
}


        for(i=l;i<=u;i++)
        {
            if(i==1)
                continue;
            if(i<=maxx)
            {
                if(isprime[i]==0)
                {
                    V.push_back(i);
                    continue;
                }
            }
            i64 flag=0;
    for(j=0;prime[j]*prime[j]<=i;j++)
    {
        if(i%prime[j]==0)
        {
            flag=1;
            break;
        }
    }
