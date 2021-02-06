//http://codeforces.com/contest/25/problem/A
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
    deque<int>jaja(n);
    int par, impar; par = impar = 0;
    for(int i=0;i<n;i++){
        cin>>jaja[i];
        if(jaja[i] % 2 == 0)par++;
        else impar++;
    }

    int answer;
    if(par > impar){
        for(int i=0;i<jaja.size();i++)if(jaja[i] % 2 != 0)answer = i;
    }else{
        for(int i=0;i<jaja.size();i++)if(jaja[i] % 2 == 0)answer = i;
    }
    cout<<answer+1<<endl;
    return 0;
}