//https://codeforces.com/contest/1481/problem/A
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
    //FileOut;
    int casos ;cin>>casos;
    while(casos--){
        int px,py; cin>>px>>py;
        string cad; cin>>cad;

        int x = 0, y = 0;
        int up, down, right, left;
        up = down = right = left = 0;

        for(int i=0;i<cad.size();i++){
            if(cad[i] == 'U')up++;
            if(cad[i] == 'D')down++;
            if(cad[i] == 'R')right++;
            if(cad[i] == 'L')left++;
        }

        bool afirmo = true;
        if(px >=0 && py>=0){
            if(right < px)afirmo = false;
            if(up < py)afirmo = false;

        }else if(px >=0 && py<0){
            if(right < px)afirmo = false;
            if(down < abs(py))afirmo = false;

        }else if(px<0 && py<0){
            if(left < abs(px))afirmo = false;
            if(down < abs(py))afirmo = false;

        }else if(px<0 && py>=0){
            if(left < abs(px))afirmo = false;
            if(up < py)afirmo = false;
        }

        if(afirmo == true)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

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