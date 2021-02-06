//http://codeforces.com/contest/1447/problem/B
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
        int jaja[n][m];
        int answer = 0, negativos = 0, res = 0;
        int t = INT_MAX;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>jaja[i][j];
                if(jaja[i][j] < 0)negativos++;
                res = res + abs(jaja[i][j]);
                t = min(t, abs(jaja[i][j]));
            }
        }

        if(negativos%2 == 0)cout<<res<<endl;
        else cout<<res-(t*2)<<endl;


    }



    return 0;
}