//http://codeforces.com/contest/1469/problem/B
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
    QuieroComer

    int casos; cin>>casos;
    while(casos--){

        /*---------------------*/
        int n; cin>>n;
        deque<int>jaja(n), accja(n);
        cin>>jaja[0];
        accja[0] = jaja[0];
        for(int i=1;i<jaja.size();i++){
            cin>>jaja[i];
            accja[i] = accja[i-1] + jaja[i];
        }


        int m; cin>>m;
        deque<int>jojo(m), accjo(m);
        cin>>jojo[0];
        accjo[0] = jojo[0];
        for(int i=1;i<jojo.size();i++){
             cin>>jojo[i];
             accjo[i] = accjo[i-1] + jojo[i];
        }


        int aa = 0, bb = 0;

        for(int i=0;i<accja.size();i++)aa = max(aa, accja[i]);
        for(int i=0;i<accjo.size();i++)bb = max(bb,accjo[i]);

        cout<<aa+bb<<endl;

        /*----------------------------*/

    }



    return 0;
}