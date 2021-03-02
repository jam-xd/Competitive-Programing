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
    deque<string>jaja(n);
    deque<string>first,second;
    for(int i=0;i<jaja.size();i++)cin>>jaja[i];
    first = jaja;
    second = jaja;

    stable_sort(first.begin(), first.end());
    stable_sort(second.rbegin(), second.rend());

    bool ascending = true, descending = true;
    for(int i=0;i<n;i++)if(jaja[i] != first[i])ascending = false;
    for(int i=0;i<n;i++)if(jaja[i] != second[i])descending = false;

    if(ascending == true)cout<<"INCREASING"<<endl;
    else if(descending == true)cout<<"DECREASING"<<endl;
    else cout<<"NEITHER"<<endl;

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
