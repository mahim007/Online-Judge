// A Naive Recursive C++ program to count derangements
#include <bits/stdc++.h>
using namespace std;

int countDer(int n)
{
   // Base cases
   if (n == 1)    return 0;
   if (n == 0)    return 1;
   if (n == 2)    return 1;

   // countDer(n) = (n-1)[countDer(n-1) + der(n-2)]
   return (n-1)*(countDer(n-1) + countDer(n-2));
}

// Driver program
int main()
{
    int n = 4;
    cin>>n;
    cout << "Count of Derangements is " << countDer(n);
    return 0;
}
