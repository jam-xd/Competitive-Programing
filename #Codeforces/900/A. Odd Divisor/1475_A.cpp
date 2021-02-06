//http://codeforces.com/contest/1475/problem/A
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double dbl;
#define QuieroComer ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define FileIn freopen("input.txt", "r", stdin)
#define FileOut freopen("output.txt", "w", stdout)
#define endl "\n"
#define deb(x) cout<<"--> "<<x<<endl
int const MOD = 10e9+7;

ll esPotencia(ll n){
	while (!(n&1))n = n>>1;
	if(n == 1)return true;
	else return false;
}

int main()
{

	QuieroComer
	int casos; cin>>casos;
	while(casos--){
		ll n; cin>>n; 
		if(esPotencia(n) == true)cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
	
    return 0;
}

/*--------------------------------------------/
	* overflow?
	* Corner cases (n=1? || n=n-1?)
	* n=n+1 (!=) n+=1; 
	  (copy n) ~ (don't make a copy of n)
	* if(use vector, string, deque in function) use "&"before.
	  (to rewrite, instead of make a copy)
	* DON'T GET STUCK ON ONE APPROACH
	
	//Animo, sales de gris :'v, haz upsolving cuando termine >:v
	//Despues comes :3
----------------------------------------------/
*/