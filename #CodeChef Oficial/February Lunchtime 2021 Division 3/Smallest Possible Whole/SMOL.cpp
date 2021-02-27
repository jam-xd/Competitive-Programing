//https://www.codechef.com/LTIME93C/problems/SMOL
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double dbl;
#define uwu ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define FileIn freopen("input.txt", "r", stdin)
#define FileOut freopen("output.txt", "w", stdout)
#define endl "\n"
#define deb(x) cout<<"--> "<<x<<endl
int const MOD = 10e9+7;

int main()
{
    uwu;

    int casos; cin>>casos;
    while(casos--){
        ll n,k; cin>>n>>k;
        if(k == 0){
            cout<<n<<endl;
            continue;
        }
        ll multp = n/k;
        n = n-(k*multp);
        cout<<n<<endl;
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
	
	//weno....ns....
----------------------------------------------/
*/
