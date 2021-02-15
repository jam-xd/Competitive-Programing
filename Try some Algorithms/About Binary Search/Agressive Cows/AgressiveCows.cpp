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
    FileIn;
    int casos; cin>>casos;
    while(casos--){
        ll n,k; cin>>n>>k;
        deque<ll>jaja(n);

        ll maxValue = 0;
        for(int i=0;i<jaja.size();i++)cin>>jaja[i];
        sort(jaja.begin(), jaja.end());

        ll low = 0, high = jaja[n-1], mid, answer = 0;
        while(true){
            mid = (low+high)/2;
            int current = 1, save = 0;
            /*---------------------------------------*/
            for(int i=0;i<jaja.size();i++){
                if(jaja[i] - jaja[save] >= mid){
                    save = i;
                    current++;
                }
            }
            /*----------------------------------------*/

            //if(current == k){answer = mid; break;}
            if(current >= k){
                answer = mid;
                low = mid + 1;
            }else high = mid - 1;

            if(low > high)break;
        }
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
	
	//Animo, sales de gris :'v, haz upsolving cuando termine >:v
	//Despues comes :3
----------------------------------------------/
*/
