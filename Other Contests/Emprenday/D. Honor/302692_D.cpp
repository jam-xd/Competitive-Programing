//http://codeforces.com/gym/302692/problem/D
#include <bits/stdc++.h>
/// 100 pts
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef long double dbl;
#define MAXINT 1000000010
#define MAXLL 1000000000000000010


int main()
{
    int n, m; cin>>n>>m;
    deque<int>jaja(n);
    for(int i=0;i<jaja.size();i++){
        cin>>jaja[i];
    }
    sort(jaja.begin(), jaja.end());
    int current = 1, maximo = 0;
    for(int i=1;i<jaja.size();i++){
        if(jaja[i]-jaja[i-1] <= m )current++;
        else{
            maximo = max(current, maximo);
            current = 1;
        }
    }
    maximo = max(maximo,current);
    cout<<maximo<<endl;

    return 0;
}
