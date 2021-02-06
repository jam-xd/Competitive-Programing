//https://www.codechef.com/problems/PTUPLES
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

vector<bool> isPrime;

void criba(ll n) {
    isPrime = vector<bool>(n, true);
    isPrime[0] = false; isPrime[1] = false;
    for (ll i=2; i<n; ++i) {
        if (isPrime[i] == true) {
            for (ll j=2; j*i<n; j++) isPrime[i*j] = 0;
        }
    }
    //for(int i=0;i<isPrime.size();i++)cout<<isPrime[i]<<endl;
    return ;
}


int main()
{
    //FileOut;

    QuieroComer

    criba(1000000);
    deque<int>jaja(1000005);
    int answer = 0;
    for(int i=2;i<=1000000;i++){
      if(isPrime[i] == true &&  isPrime[i-2] == true)answer++;
      jaja[i] = answer;
    }

    int casos; cin>>casos;
    while(casos--){
      ll n; cin>>n;
      cout<<jaja[n]<<endl;
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
	
	//Animo, sales de gris :'v, haz upsolving cuando termine >:v, despues comes :3
----------------------------------------------/
*/


