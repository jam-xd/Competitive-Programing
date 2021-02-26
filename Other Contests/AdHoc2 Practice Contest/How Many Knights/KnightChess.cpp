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

    int n,m;
    while(cin>>n>>m){
      if(n == 0 && m == 0)return 0;
        int minimo = min(n,m);
        int maximo = max(n,m);
        int answer = 0, add = 0;

        if(minimo ==  1){cout<<maximo<<" knights may be placed on a "<<n<<" row "<<m<<" column board."<<endl;  continue;}
        if(minimo == 2 && maximo <= 4){cout<<4<<" knights may be placed on a "<<n<<" row "<<m<<" column board."<<endl;  continue;}

        if(minimo == 2 && maximo > 4){
          if(maximo % 4 == 0)add = 0;//xd?
          else if(maximo %4 == 1)add = 1;
          else if(maximo %4 == 2)add = 2;
          else if(maximo %4 == 3)add = 1;
        }

        answer = (((n*m+1)/2))+add;
        cout<<answer<<" knights may be placed on a "<<n<<" row "<<m<<" column board."<<endl;  

        //cout<<"________________________________________"<<endl;
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
