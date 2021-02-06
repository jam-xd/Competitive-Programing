//http://codeforces.com/contest/466/problem/A
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double dbl;
#define QuieroComer ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define FileIn freopen("input.txt", "r", stdin)
#define FileOut freopen("output.txt", "w", stdout)
#define endl "\n"
int const MOD = 10e9+7;

int main()
{

    QuieroComer//xd;
    int n,m,a,b; cin>>n>>m>>a>>b;
    int viajes = 0, answer = 0;


    answer = answer + min(a*n, (n/m)*b);
    if(answer == a*n)viajes = n;
    else viajes = (n/m)*m;

    if(viajes < n)answer = answer + min((n-viajes)*a, b);
    cout<<answer<<endl;




    return 0;
}