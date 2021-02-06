//http://codeforces.com/contest/353/problem/A
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double dbl;
#define QuieroComer ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define FileIn freopen("input.txt", "r", stdin)
#define FileOut freopen("output.txt", "w", stdout)
#define endl "\n"
#define debug(x) cout<<"--> "<<x<<endl
int const MOD = 10e9+7;

int main()
{
    QuieroComer
    
    int n; cin>>n;
    deque<pair<int,int> >jaja(n);

    int up, down; up = down = 0; bool afirmo = false;
    for(int i=0;i<jaja.size();i++){
        cin>>jaja[i].first>>jaja[i].second;
        up = up + jaja[i].first;
        down = down + jaja[i].second;
        if(jaja[i].first%2 == 0 && jaja[i].second%2 != 0)afirmo = true;
        if(jaja[i].first%2 != 0 && jaja[i].second%2 == 0)afirmo = true;
    }

    if(up%2 == 0 && down % 2 == 0)cout<<0<<endl;
    else if(up%2 != 0 && down %2 != 0 && afirmo == true)cout<<1<<endl;
    else cout<<-1<<endl;



    return 0;
}