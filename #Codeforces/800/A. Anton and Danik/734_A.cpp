//http://codeforces.com/contest/734/problem/A
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
    int n; cin>>n;
    deque<char>jaja(n);
    
    int d=0, a=0;
    for(int i=0;i<jaja.size();i++){
        cin>>jaja[i];
        if(jaja[i] == 'A')a++;
        else d++;
    }
    
    if(a>d)cout<<"Anton"<<endl;
    if(a<d)cout<<"Danik"<<endl;
    if(a==d)cout<<"Friendship"<<endl;

    return 0;
}