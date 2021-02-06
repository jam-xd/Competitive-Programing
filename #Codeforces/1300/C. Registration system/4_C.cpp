//http://codeforces.com/contest/4/problem/C
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double dbl;
#define QuieroComer ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define FileIn freopen("input.txt", "r", stdin)
#define FileOut freopen("output.txt", "w", stdout)
#define endl "\n"
#define mira ":::"
int const MOD = 10e9+7;

int main()
{
    int querys; cin>>querys;
    map<string,int>ggnomas;
    while(querys--){
        string cad; cin>>cad;
        if(ggnomas.count(cad) == false)cout<<"OK"<<endl;
        else cout<<cad<<ggnomas[cad]<<endl;

        ggnomas[cad]++;

        ///el poderoso count :v

    }
    return 0;
}