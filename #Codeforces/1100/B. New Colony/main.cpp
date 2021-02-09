//https://codeforces.com/contest/1481/problem/B
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

bool deOne (deque<ll>&jaja){
	bool si = true;
	for(int i=0;i<jaja.size()-1;i++){
		if(jaja[i] < jaja[i+1]){si = false; break;}
	}
	if(si == true)return true;
	else return false;
}

int main()
{

	//FileIn;
	//FileOut;
	int casos; cin>>casos;
	while(casos--){
		ll n,k; cin>>n>>k;
		deque<ll>jaja(n);
		for(int i=0;i<jaja.size();i++)cin>>jaja[i];
		if(n == 1){cout<<-1<<endl; continue;}

		ll answer = 0;
		bool siguente = false;
		while(k--){
			for(int i=0;i<jaja.size()-1;i++){
				if(deOne(jaja) == true){cout<<-1<<endl; siguente = true; break;}

				if(jaja[i] < jaja[i+1]){
					jaja[i]++;
					//debug(i+1);
					answer = i+1;
					break;
				}
			}
			if(siguente == true)break;
		}

	 if(siguente == false)cout<<answer<<endl;
		
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