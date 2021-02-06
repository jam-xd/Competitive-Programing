//ACCEPTED
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

deque<char>passw;

void recoverPass (string &cad){
	passw.resize(cad.size());
	for(int i=0;i<cad.size();i++)passw[i] = cad[i];
}

bool isDifferent(char c){
	bool afirmo = true;
	for(int i=0;i<passw.size();i++){
		if(c == passw[i]){afirmo = false; break;}
	}

	if(afirmo == true)return true;
	else return false;
}

int main()
{

    string cad, hidden; cin>>cad>>hidden;
	passw.resize(cad.size());

	for(int i=0;i<cad.size();i++)passw[i] = cad[i];

	bool  afirmo = false;
	for(int i=0;i<hidden.size();i++){

		if(isDifferent(hidden[i])!= true){
			if(hidden[i] == passw[0])passw.pop_front();
			else break;
		}

		/*for(int ii=0;ii<passw.size();ii++)cout<<passw[ii]<<" ";
		cout<<endl;*/

		if(passw.size() == 0){afirmo = true; break;}
	}

	if(afirmo == true)cout<<"PASS"<<endl;
	else cout<<"FAIL"<<endl;
	
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


