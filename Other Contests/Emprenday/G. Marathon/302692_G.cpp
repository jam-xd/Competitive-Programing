//http://codeforces.com/gym/302692/problem/G
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
    int n, m;
    cin>>n>>m;
    if(m%n == 0)cout<<m/n-1<<endl;
    else cout<<m/n<<endl;
    return 0;
}
