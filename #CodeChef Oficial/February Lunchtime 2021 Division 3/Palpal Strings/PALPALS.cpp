//https://www.codechef.com/LTIME93C/problems/PALPALS
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double dbl;
#define imFastAF ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define FileIn freopen("input.txt", "r", stdin)
#define FileOut freopen("output.txt", "w", stdout)
#define endl "\n"
#define deb(x) cout<<"--> "<<x<<endl
int const MOD = 10e9+7;

int main()
{

    int casos; cin>>casos;
    while(casos--){
        map<char,int>ggnomas;
        string cad; cin>>cad;

        for(int i=0;i<cad.size();i++)ggnomas[cad[i]]++;
        int dup = 0, once = 0;
        map<char,int>::iterator it;
        for(it = ggnomas.begin(); it != ggnomas.end(); it++){
            if(it->second > 1 && it->second %2 != 0){
                dup += (it->second/2)-1;
            }else if(it->second > 1 && it->second %2 == 0)dup += (it->second/2);
            else once++;
        }
        //deb(dup);
        //deb(once);

        if(dup >= once)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        

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
