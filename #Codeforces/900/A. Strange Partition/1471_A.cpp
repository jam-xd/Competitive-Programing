//http://codeforces.com/contest/1471/problem/A
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
        ll n,x; cin>>n>>x;
        ll maximo = 0, minimo = 0, sum = 0;
        deque<ll>jaja(n);
        for(int i=0; i<jaja.size();i++){
            cin>>jaja[i];
            maximo = maximo + ceil((double)jaja[i]/(double)x);
            sum = sum + jaja[i];
            //debug(maximo);
        }

        minimo = ceil((double)sum/(double)x);

        cout<<minimo<<" "<<maximo<<endl;

    }

    return 0;
}