//https://www.codechef.com/LTIME92C/problems/EVENGAME
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
    QuieroComer
    
    int casos; cin>>casos;
    while(casos--){
        int n; cin>>n;
        deque<int>jaja(n);
        int sum = 0;
        for(int i=0;i<jaja.size();i++){
            cin>>jaja[i];
            sum = sum + jaja[i];
        }
        if(sum % 2 == 0)cout<<1<<endl;
        else cout<<2<<endl;
    }
    return 0;

    //ez :v
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


