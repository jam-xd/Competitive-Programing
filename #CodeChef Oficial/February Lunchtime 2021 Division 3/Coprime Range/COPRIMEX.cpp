//https://www.codechef.com/LTIME93C/problems/COPRIMEX
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double dbl;
#define imFastAF ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define FileIn freopen("input.txt", "r", stdin)
#define FileOut freopen("output.txt", "w", stdout)
#define endl "\n"
#define deb(x) cout<<"--> "<<x<<endl
int const MOD = 10e9+7;

bool isPrime (ll n){
    int answer = 0;
    ll i;
    for(i=1;i*i<n;i++){
        if(n%i == 0)answer = answer + 2;
    }
    if(i*i == n)answer++;
    if(answer == 2)return true;
    else return false;
}

int main()
{
    int casos; cin>>casos;
    while(casos--){
        int n,k; cin>>n>>k;
        
        int thisOne = k+1;
        while(true){
            if(isPrime(thisOne) == true)break;
            else thisOne++;
        }

        cout<<thisOne<<endl;
        
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
