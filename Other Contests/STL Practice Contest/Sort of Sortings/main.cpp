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

bool compare(string a, string b){ //esto es completamente nuevo :v
    return (b.substr(0,2) > a.substr(0,2) );
}

int main()
{
    //FileOut;

    int n; 
    while(cin>>n){
        if(n == 0)return 0;
        deque<string>ggnomas(n);
        for(int i=0;i<ggnomas.size();i++)cin>>ggnomas[i];
        stable_sort(ggnomas.begin(), ggnomas.end(), compare);//nose mjuy bien como funciona esto aun :'v
        for(int i=0;i<ggnomas.size();i++)cout<<ggnomas[i]<<endl;
        cout<<endl;
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
