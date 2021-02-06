//http://codeforces.com/contest/1426/problem/C
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
        int operaciones = 0;
        ll sum = 0, add = 1;
        while(true){
            if(sum < n){sum = sum + add; operaciones++;}
            else {break;}

            
            
            if(sum < n){sum = sum + add; operaciones++;}
            else {break;}
            add++;

            ;

        }
        cout<<operaciones-1<<endl;
        //debug(operaciones);
    }    

    return 0;
}