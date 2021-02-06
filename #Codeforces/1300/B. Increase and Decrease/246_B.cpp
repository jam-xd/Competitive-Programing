//http://codeforces.com/contest/246/problem/B
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double dbl;
#define MAXINT 1000000010
#define MAXLL 1000000000000000010

int main()
{
   int n; cin>>n;
   deque<int>jaja(n);

   int sum = 0;
   for(int i=0;i<jaja.size();i++){
    cin>>jaja[i];
    sum = sum + jaja[i];
   }

   if(sum % n == 0)cout<<n<<endl;
   else cout<<n-1<<endl;

    return 0;
}