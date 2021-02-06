//http://codeforces.com/contest/1426/problem/D
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
   deque<int>jaja(n);
   multiset<ll>ggnomas;
   ggnomas.insert(0);

    int answer = 0; 
    ll current = 0;
    for(int i=0;i<jaja.size();i++){
        cin>>jaja[i];
        current = current + jaja[i];
        if(ggnomas.find(current) /*== false?*/ != ggnomas.end()){
            answer++;
            ggnomas.clear(); ggnomas.insert(0);
            current = jaja[i];
        }
        ggnomas.insert(current);
    }

    //debug(answer);
    cout<<answer<<endl;
    return 0;
}