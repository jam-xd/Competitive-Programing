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

int main()
{
    int casos; cin>>casos;
    while(casos--){
        char type; int n,m; cin>>type>>n>>m;
        int answer = 0;
        if(type == 'r')answer = min(n,m);
        else if(type == 'k')answer = ((n*m+1)/2);
        else if(type == 'Q')answer = min(n,m);
        else answer = ((n+1)/2)*((m+1)/2);


        cout<<answer<<endl;
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
