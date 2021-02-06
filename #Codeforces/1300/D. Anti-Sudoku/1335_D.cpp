//http://codeforces.com/contest/1335/problem/D
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

deque<deque<char> >jaja(9);

void changer(int x, int y){
    char change = '1';
    if(jaja[x][y] == change)jaja[x][y] = change+1;
        else jaja[x][y] = change;
}

int main()
{

    QuieroComer/// esta vez de verda :'v

    int casos; cin>>casos;
    while(casos--){
        for(int i=0;i<jaja.size();i++){
            for(int j=0;j<jaja.size();j++){
                cin>>jaja[i][j];
            }
        }
      changer(0,0);
      changer(1,3);
      changer(2,6);
      changer(3,1);
      changer(4,4);
      changer(5,7);
      changer(6,2);
      changer(7,5);
      changer(8,8);

    for(int i=0;i<jaja.size();i++){
            for(int j=0;j<jaja.size();j++){
                cout<<jaja[i][j];
            }cout<<endl;
        }
      /// Ya envie pero lo hice mas elegante y legible Bv

    }
    return 0;
}