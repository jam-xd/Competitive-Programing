//http://codeforces.com/contest/1471/problem/C
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

int casos; cin>>casos;
while(casos--){
     int n,m; cin>>n>>m;
     ll answer = 0;

     deque<ll>jaja(n), c(m);
     for(int i=0;i<jaja.size();i++)cin>>jaja[i];
     sort(jaja.rbegin(), jaja.rend());
     for(int i=0;i<c.size();i++)cin>>c[i];

     int pointer = 0;
     for(int i=0;i<jaja.size();i++){
         if(pointer < jaja[i] && pointer < m){
                answer = answer + c[pointer];
                pointer++;
         }
         else answer = answer + c[jaja[i]-1];
         }

         //debug(answer);
         cout<<answer<<endl;
     }
    return 0;
}