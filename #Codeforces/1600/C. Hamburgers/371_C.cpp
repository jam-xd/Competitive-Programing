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

ll hb, hs, hc; 
ll pb, ps, pc; 
ll bb,ss,cc;

ll canDo(ll tryThis){
    ll currB = max((tryThis * bb - hb), 0LL);
    ll currS = max((tryThis * ss - hs), 0LL);
    ll currC = max((tryThis * cc - hc), 0LL);

    ll totalCost = currB * pb + currS * ps + currC * pc;
    return totalCost;

}

int main()
{
    bb = cc = ss = 0;

    string cad; cin>>cad;
    for(int i=0;i<cad.size();i++){
        if(cad[i] == 'B')bb++;
        if(cad[i] == 'S')ss++;
        if(cad[i] == 'C')cc++;
    }

    cin>>hb>>hs>>hc;
    cin>>pb>>ps>>pc;
    ll money; cin>>money; ll answer = 0LL; 

    ll low = 0LL, high = money + 101, mid;
    while(true){
        mid = (high+low)/2LL;
        ll current = canDo(mid);

        if(current == money){
            answer = mid;
            break;
        }
        if(current > money)high = mid-1LL;
        else {
            low = mid+1LL;
            answer = mid;
        }

        if(low > high)break;

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
