//https://www.codechef.com/LTIME92C/problems/EVENDIFF
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
    int casos; cin>>casos;
    while(casos--){
        int n; cin>>n;
        deque<int>jaja(n);
        int answer = 0, pares = 0, impares = 0;
        for(int i=0;i<jaja.size();i++){
            cin>>jaja[i];
            if(jaja[i] % 2 != 0)impares++;
            else pares++;
        }

        if(impares == n)cout<<"0"<<endl;
        else if(pares == n)cout<<"0"<<endl;
        else cout<<min(pares,impares)<<endl;
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


