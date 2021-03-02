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

int howMany(int req, int capacity){
	int answer;
	if(req%capacity == 0)answer = req/capacity;
	else answer = req/capacity + 1;
	return answer;
}

int main()
{
	int n,k; cin>>n>>k;
	deque<int>jaja(n);
	deque<int>background(100001, 0);

	for(int i=0;i<jaja.size();i++){
		cin>>jaja[i];
		background[jaja[i]]++;
	}

	int maxRequest = -1; int current = 0;
	for(int i=0;i<background.size();i++){
		current += background[i];
		if(i>=1000)current -= background[i-1000];
		maxRequest = max(current, maxRequest);
	}
	//deb(maxRequest);
	int answer = howMany(maxRequest, k);

	cout<<answer<<endl;

	
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
