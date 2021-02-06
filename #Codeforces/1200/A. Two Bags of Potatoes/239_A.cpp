//http://codeforces.com/contest/239/problem/A
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double dbl;
#define MAXINT 1000000010
#define MAXLL 1000000000000000010

int main()
{
   int y,n,k;  cin>>y>>k>>n;
   bool existe = false;
   for(int i=0;i<=n;i=i+k){
    if(i-y >= 1){
        cout<<i-y<<" ";
        existe = true;
    }
   }

   if(existe == false)cout<<-1<<endl;

    return 0;
}