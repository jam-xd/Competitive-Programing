//https://www.codechef.com/LTIME92C/problems/INTRVS
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
    QuieroComer

    int casos; cin>>casos;
    while(casos--){
        int n,k; cin>>n>>k;
        int latest = -100000000, solved = 0;
        deque<int>jaja(n);
        for(int i=0;i<n;i++){
            cin>>jaja[i];
            if(jaja[i] != -1){
                solved++;
                latest = max(latest,jaja[i]);
            }
            
        }

        int req = ceil((double)n/2.0);
        //debug(req);
        if(solved < req)cout<<"Rejected"<<endl;
        else if(latest > k  && solved >= 1)cout<<"Too Slow"<<endl;
        else if(latest <= 1 && solved == n)cout<<"Bot"<<endl;
        else cout<<"Accepted"<<endl;
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


