//http://codeforces.com/contest/1472/problem/B
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
        deque<int>jaja(n);
        int unos, dos; unos = dos = 0;
        int sum = 0;
        for(int i=0;i<jaja.size();i++){
            cin>>jaja[i];
            sum = sum + jaja[i];
            if(jaja[i] == 1)unos++;
            else dos++;
        }

        if(sum%2 == 0 && unos >= 1)cout<<"YES"<<endl;
        else if(sum%4 == 0 && dos >=2 && unos == 0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


    }

    return 0;
}