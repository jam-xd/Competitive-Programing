//http://codeforces.com/contest/1466/problem/A
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
        int n; cin>>n;
        deque<double>jaja(n);
        set<double>x;
        for(int i=0;i<jaja.size();i++)cin>>jaja[i];

        for(int i=0;i<jaja.size();i++){
            for(int j=i+1;j<jaja.size();j++){
                double current = abs(jaja[i] - jaja[j]);
                double answer = current / 2;
                x.insert(answer);
            }
        }

        cout<<x.size()<<endl;
   }
    return 0;
}