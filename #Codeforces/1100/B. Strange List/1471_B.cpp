//http://codeforces.com/contest/1471/problem/B
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

    /*Problem B*/
    int casos; cin>>casos;
    while(casos--){
        int n,x; cin>>n>>x;
        deque<ll>jaja(n), ggnomas(n);
        //deque<ll>valid;

        ll answer = 0;
        for(int i=0;i<jaja.size();i++){
            cin>>jaja[i];
            answer = answer + jaja[i];
            ggnomas[i] = jaja[i];
        }

        bool wir = false;
        while(true){
            for(int i=0;i<ggnomas.size();i++){
                if(ggnomas[i]%x == 0){
                    ggnomas[i] = ggnomas[i]/x;
                    //debug(ggnomas[i]);
                    // (ggnomas[i]/x)*x  // ?? :V
                    answer = answer + jaja[i];
                    //debug(answer);
                }else{
                    wir = true;
                    break;
                }

            }
             if(wir == true)break;
        }
        cout<<answer<<endl;
    }

    return 0;
}