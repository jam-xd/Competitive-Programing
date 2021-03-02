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
    deque<int>background(1000005, 0);
    for(int i=0;i<jaja.size();i++){
        cin>>jaja[i];
        int current = jaja[i];
        if(background[current] == 0)background[current-1]++;
        else{
            background[current]--;
            background[current-1]++;
        }
    }

    int answer = 0;
    for(int i=0;i<background.size();i++)answer += background[i];
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
