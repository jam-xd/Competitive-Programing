//https://www.codechef.com/COOK125B/problems/SDSTRING
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

    QuieroComer //xd

    int casos; cin>>casos;
    while(casos--){
        string cad; cin>>cad;
        int one, zero; one = zero = 0;

        if(cad.size() %2 != 0){
            cout<<-1<<endl;
            continue;
        }

        for(int i=0;i<cad.size();i++){
            if(cad[i] == '1')one++;
            else zero++;
        }

        if(zero >= 1 && one>=1)cout<<(max(one,zero)-min(one,zero))/2<<endl;
        else cout<<-1<<endl;
    }

    return 0;
}
