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
    int n,identicos=0, mismos=0;
   cin>>n;

   string cad, cadd;
   cin>>cad>>cadd;

   for(int i=0; i<cad.size();i++){
    if(cad[i] == cadd[i]){
        identicos++;
        cad[i] = '&';
        cadd[i] = '%';
    }
   }

   for(int i=0;i<cad.size();i++){
    for(int j=0;j<cad.size();j++){
        if(cad[i] == cadd[j]){
            cadd[j] = '%';
            cad[i] = '&';
            mismos++;
        }
    }
   }
   cout<<identicos<<" "<<mismos<<endl;

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


