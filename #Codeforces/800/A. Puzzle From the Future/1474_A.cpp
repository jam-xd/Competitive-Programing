//http://codeforces.com/contest/1474/problem/A
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
        int tam; cin>>tam;
        deque<char>cad(tam); cin>>cad[0]; cad[0] = cad[0]+1;
        string a = ""; a = "1";
        for(int i=1;i<cad.size();i++){
            cin>>cad[i];
            if(cad[i]+1 != cad[i-1]){
                a+="1";
               cad[i] = cad[i] + 1;
            }else a+="0";
        }
        for(int i=0;i<a.size();i++)cout<<a[i];
        cout<<endl;
    }
    return 0;
}