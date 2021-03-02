#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double dbl;
#define uwu ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define FileIn freopen("input.txt", "r", stdin)
#define FileOut freopen("output.txt", "w", stdout)
#define endl "\n"
#define deb(x) cout<<"--> "<<x<<endl
int const MOD = 10e9+7;

int main()
{
    int n; cin>>n;
    deque<int>jaja(n);
    for(int i=0;i<jaja.size();i++)cin>>jaja[i];
    deque<int> minimo(n,INT_MAX), maximo(n,-1);

    int current = INT_MAX;
    for(int i=minimo.size()-1;i>=0;i--){
        current = min(current, jaja[i]);
        minimo[i] = current;
    }

    current = -1;
    for(int i=0;i<maximo.size();i++){
        current = max(current, jaja[i]);
        maximo[i] = current;
    }


    /*for(int i=0;i<minimo.size();i++)cout<<minimo[i]<<" ";
    cout<<endl;
    for(int i=0;i<maximo.size();i++)cout<<maximo[i]<<" ";*/

    int answer = 0;
    for(int i=0;i<n;i++)if(minimo[i] == maximo[i])answer++;
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
	
	//weno....ns....
----------------------------------------------/
*/
