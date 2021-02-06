//http://codeforces.com/contest/1473/problem/A
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
    int casos; cin>>casos;
    while(casos--){
        int n, d; cin>>n>>d;
        deque<int>jaja(n);
        for(int i=0;i<jaja.size();i++)cin>>jaja[i];

        if(jaja.size() < 3){
            cout<<"NO"<<endl;
            continue;
        }

        sort(jaja.begin(), jaja.end());
        if(jaja[0]+jaja[1]<=d || jaja[n-1] <= d)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}