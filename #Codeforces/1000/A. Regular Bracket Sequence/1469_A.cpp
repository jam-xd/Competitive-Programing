//http://codeforces.com/contest/1469/problem/A
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
        string cad; cin>>cad;
        int posa, posb, ggnomas = 0;
        int first = INT_MAX, second = -1;
        for(int i=0;i<cad.size();i++){
            if(cad[i] == '(')posa = i;
            if(cad[i] == ')')posb = i;

            if(cad[i] == '?'){
                first = min(i,first);
                second = max(i,second);
                ggnomas++;
            }
        }

       if(ggnomas%2 == 0 && posa<posb)cout<<"YES"<<endl;
       else if(ggnomas%2 == 0 && posb < posa
               && first < posb && second > posa)cout<<"YES"<<endl;

            else cout<<"NO"<<endl;


    }


    return 0;
}