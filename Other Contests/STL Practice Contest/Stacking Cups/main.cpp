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
    deque<pair<int,string> >jaja(n);
    for(int i=0;i<n;i++){
        string a,b; cin>>a>>b;
        if(a[0] >= 48 && a[0] <=57){
            stringstream ss;
            ss<<a;
            int curr;
            ss>>curr;
            jaja.push_back(pair<int,string>(curr/2, b));
        }else{
            stringstream gg;
            gg<<b;
            int curr;
            gg>>curr;
            jaja.push_back(pair<int,string>(curr,a));
        }
    }

    sort(jaja.begin(), jaja.end());
    for(int i=0;i<jaja.size();i++){
        cout<<jaja[i].second<<endl;
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
