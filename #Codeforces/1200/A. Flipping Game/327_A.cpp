//http://codeforces.com/contest/327/problem/A
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

    int n; cin>>n;
    deque<int>jaja(n);
    int unos = 0;
    for(int i=0;i<jaja.size();i++){
        cin>>jaja[i];
        if(jaja[i] == 1)unos++;
    }


    int answer = 0, ggnomas = 0;
    if(jaja.size() == unos){
        cout<<jaja.size()-1<<endl;
        return 0;
    }
    
    for(int i=0;i<jaja.size();i++){
        for(int j=jaja.size()-1;j>=0;j--){
            int copia_uno = unos;
            for(int k=i; k<=j; k++){
                if(jaja[k] == 0)copia_uno++;
                else copia_uno--;
            }
            answer = max(answer, copia_uno);
        }
    }

    cout<<answer<<endl;




    return 0;
}