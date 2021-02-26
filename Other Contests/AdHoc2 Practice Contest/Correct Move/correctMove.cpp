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
  //FileOut;

  int k,q, nq; 
  while(cin>>k>>q>>nq){
    int jamon = abs(k-nq);
    
    if(k == q)cout<<"Illegal state"<<endl;
    else if((abs(nq - q)%8 != 0 && (q/8) != (nq/8)) || nq == q)cout<<"Illegal move"<<endl;
    else if ((((k - q) % 8 == 0 && (k - nq) % 8 == 0) || (k/ 8 == q / 8 && k  / 8 == nq / 8)) && (k <= max(q, nq) && k >= min(q, nq)))cout<<"Illegal move"<<endl;
    else if(jamon == 8 || (jamon == 1 && k/8 == nq/8))cout<<"Move not allowed"<<endl;
    else if ((k == 0 && nq == 9) || (k == 7 && nq == 14) || (k == 56 && nq == 49) || (k == 63 && nq == 54))cout<<"Stop"<<endl;
    else cout<<"Continue"<<endl;

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
