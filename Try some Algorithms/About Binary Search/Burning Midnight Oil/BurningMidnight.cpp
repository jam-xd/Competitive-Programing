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


ll canDo(ll tryValue, ll k){
    int current = 0;
    while(true){
        current += tryValue;
        tryValue = tryValue / k;
        if(tryValue == 0)break;
    }
    return current;
}

int main()
{
    ll n,k; cin>>n>>k;
    ll low = 0, high = n+1, mid, answer;
    while(true){
        mid = (high + low)/2;
        if(canDo(mid,k) >= n){
            high = mid-1;
            answer = mid;
        }else low = mid + 1;

        if(low > high)break;
        //deb("furula");
    }

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
	
	//Animo, sales de gris :'v, haz upsolving cuando termine >:v
	//Despues comes :3
----------------------------------------------/
*/
