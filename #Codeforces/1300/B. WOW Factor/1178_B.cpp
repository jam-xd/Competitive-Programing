//http://codeforces.com/contest/1178/problem/B
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double dbl;
#define QuieroComer_xd ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define FileIn freopen("input.txt", "r", stdin)
#define FileOut freopen("output.txt", "w", stdout)
#define endl "\n"
int const MOD = 10e9+7;


int main()
{

    QuieroComer_xd;

    int totalW = 0;
    int vContinued = 0;
    string cad; cin>>cad;
    deque<ull>current;

    for(int i=0;i<cad.size();i++){
        if(cad[i]=='v')vContinued++;
        if(vContinued >= 2 && cad[i] == 'v')totalW++;
        current.push_back(totalW);
        if(cad[i] != 'v')vContinued = 0;
    }
    ull answer = 0;
    ull last = current[cad.size()-1];
     for(int i=0;i<cad.size();i++){
        if(current[i] != last && cad[i] == 'o'){
            answer = answer + (current[i] * (last-current[i]));
        }
     }
     cout<<answer<<endl;


    return 0;
}