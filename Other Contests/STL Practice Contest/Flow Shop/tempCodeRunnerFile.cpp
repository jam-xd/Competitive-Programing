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
    int n,m; cin>>n>>m;
    int jaja[n+1][m+1];
    for(int i=0;i<n+1;i++)for(int j=0;j<m+1;j++)jaja[i][j] = 0;

    deque<int>answers;
    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            cin>>jaja[i][j];
            jaja[i][j] = jaja[i][j] + max(jaja[i-1][j] ,jaja[i][j-1]);
        }
        answers.push_back(jaja[i][m]);
    }

    /*deb("---------------");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)cout<<jaja[i][j]<<" ";
        cout<<endl;
    }*/

    for(int i=0;i<answers.size();i++)cout<<answers[i]<<" ";

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
