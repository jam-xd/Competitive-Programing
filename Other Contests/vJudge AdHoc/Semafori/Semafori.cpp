//ACCEPTED
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
    int stops, camino;
    cin>>stops>>camino;

    bool green = false, red = true;
    int answer = 0, curr = 0;

    while(stops--){
        int dist, r, g; cin>>dist>>r>>g;
        answer += (dist-curr);
        curr = dist;

        int whereInCycle = answer % (r+g); 
        //debug(whereInCycle);
        if(whereInCycle <= r){//pillo en rojo
            answer += (r-whereInCycle);
        }
    }

    cout<<answer + (camino-curr)<<endl;

    

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


