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
    int n,k;
    
    while(cin>>n>>k){
        set<int>ggnomas;
        if(n == 0 && k == 0)break;
        deque<int>jaja(k);
        for(int i=0;i<jaja.size();i++)cin>>jaja[i];

        for(int i=0;i<jaja.size();i++){
            for(int j=0;j<jaja.size();j++){
                int current = abs(jaja[i] - jaja[j]);
                ggnomas.insert(current);
            }
        }

        bool afirmo = false;
        if(ggnomas.size() == n+1)afirmo = true; 

        if(afirmo == true)cout<<"Y"<<endl;
        else cout<<"N"<<endl;
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