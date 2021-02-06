//http://codeforces.com/contest/1463/problem/A
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double dbl;

int const MOD = 10e9+7;

int main()
{
    int casos; cin>>casos;
    while(casos--){
     ll a,b,c; cin>>a>>b>>c;
     int sum = a+b+c;
     int comp = sum/9;
     if(sum%9 == 0 && a>=comp && b>= comp && c>= comp)cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
    }
    return 0;
}