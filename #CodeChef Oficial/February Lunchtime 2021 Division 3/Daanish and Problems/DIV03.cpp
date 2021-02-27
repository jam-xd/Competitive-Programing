//https://www.codechef.com/LTIME93C/problems/DIV03
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
    uwu;
    int casos ;cin>>casos;
    while(casos--){
        ll k;
        deque<ll>jaja(10);
        for(int i=0;i<jaja.size();i++)cin>>jaja[i];
        cin>>k;

        int pointer = jaja.size();
        while(true){
            pointer--;
            if(k >= jaja[pointer]){
                k = k - jaja[pointer];
                jaja[pointer] = 0;
            }else break;
            
            if(pointer == 0)break;
        }

        int maxValue = -1;
        for(int i=0;i<jaja.size();i++){
            if(jaja[i] > 0)maxValue = max(maxValue, i+1);
        }

        cout<<maxValue<<endl;
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
