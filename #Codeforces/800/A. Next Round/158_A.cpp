//http://codeforces.com/contest/158/problem/A
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
    int tam, n; cin>>tam>>n;
    int answer=0;
    deque<int>jaja(tam);
    for(int i=0;i<jaja.size();i++)cin>>jaja[i];
    for(int i=0;i<jaja.size();i++)if(jaja[i] >= jaja[n-1] && jaja[i] != 0)answer++;

    cout<<answer<<endl;


    return 0;
}