//http://codeforces.com/gym/302692/problem/J
#include <bits/stdc++.h>
/// 100 pts
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef long double dbl;
#define MAXINT 1000000010
#define MAXLL 1000000000000000010


int main()
{
   ll n,m; cin>>n>>m;

   ll cargadores = 1;
   while(true){
    if(cargadores * m % n == 0)break;
    else cargadores++;
   }
   cout<<cargadores<<endl;
    return 0;
}
