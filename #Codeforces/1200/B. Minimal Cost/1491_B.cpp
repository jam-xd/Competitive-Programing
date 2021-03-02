//https://codeforces.com/contest/1491/problem/B
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
	int casos; cin>>casos;
	while(casos--){
		ll rows, u,v; cin>>rows>>u>>v;
		deque<ll>obstacles(rows);
		for(int i=0;i<obstacles.size();i++)cin>>obstacles[i];

		ll maxDiff = 0, inRow;
		for(int i=1;i<obstacles.size();i++){
			if(abs(obstacles[i] - obstacles[i-1]) >= maxDiff){
				maxDiff = abs(obstacles[i] - obstacles[i-1]);
				inRow = i-1;
			}
		}
		//cout<<":D: "<<maxDiff<<endl;


		ll answer = 0;
		if(maxDiff == 2){cout<<0<<endl; continue;}
		else if(maxDiff == 1)answer = min(u,v);
		else if(maxDiff == 0)answer = min(v+v, u+v);

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
