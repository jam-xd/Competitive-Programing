//http://codeforces.com/contest/327/problem/B
#include <iostream>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double dbl;

int main()
{
   int n; cin>>n;
   int ggnomas = 10000000 - n; bool gomitas = false;
   for(int i=0;i<n;i++){
    cout<<ggnomas<<" ";
    ggnomas++;
   }

    return 0;
}