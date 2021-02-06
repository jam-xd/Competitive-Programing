//https://codeforces.com/contest/1363/problem/A
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
    int casos; cin>>casos;
    while(casos--){
        int n,k; cin>>n>>k;
        int par, impar;
        par = impar = 0;

        for(int i=0;i<n;i++){
            int current; cin>>current;
            if(current %2 == 0)par++;
            if(current %2 != 0)impar++;
        }

        if(impar == n && k%2==0){cout<<"No"<<endl;continue;}
        if(par == n){cout<<"No"<<endl; continue;}
        if(k == 1 &&  impar >= 1){cout<<"Yes"<<endl; continue;}

        int thisOne = k - par;
        //debug(thisOne);
        if(thisOne <= 0 && impar >= 1)cout<<"Yes"<<endl;
        else if(thisOne % 2 == 0){
          if(impar >= thisOne+1)cout<<"Yes"<<endl;
          else cout<<"No"<<endl;
        } else if(thisOne %2 != 0 && impar >= thisOne)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
     }

}


/*--------------------------------------------/
	* overflow?
	* Corner cases (n=1? || n=n-1?)
	* n=n+1 (!=) n+=1; 
	  (copy n) ~ (don't make a copy of n)
	* if(use vector, string, deque in function) use "&"before.
	  (to rewrite, instead of make a copy)
	* DON'T GET STUCK ON ONE APPROACH
----------------------------------------------/
*/
