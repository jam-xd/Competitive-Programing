//https://codeforces.com/contest/1491/problem/A
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double dbl;
#define uwu ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define FileIn freopen("input.txt", "r", stdin)
#define FileOut freopen("output.txt", "w", stdout)
#define endl "\n"
#define deb(x) cout<<"--> "<<x<<endl
int const MOD = 10e9+7;

int main()
{
	uwu
	int n,query; cin>>n>>query;
	int unos = 0;

	deque<int>jaja(n);
	for(int i=0;i<jaja.size();i++){
		cin>>jaja[i];
		if(jaja[i] == 1)unos++;
	}

	//x = 1, k = 2

	while(query--){
		int operation, k;
		cin>>operation>>k;
		
		if(operation == 1){
			if(jaja[k-1] == 1){
				unos--;
				jaja[k-1] = 0;
			}
			else {
				unos++;
				jaja[k-1] = 1;
			}
		}
		else{
			if(k > unos)cout<<0<<endl;
			else cout<<1<<endl;
		}
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
