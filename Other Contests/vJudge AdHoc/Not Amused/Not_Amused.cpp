//ACCEPTED
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double dbl;
typedef double db;
#define QuieroComer ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define FileIn freopen("input.txt", "r", stdin)
#define FileOut freopen("output.txt", "w", stdout)
#define endl "\n"
#define debug(x) cout<<"--> "<<x<<endl
int const MOD = 10e9+7;

int main()
{
    //FileOut;

    int day = 0;
    string cad;
    while(cin>>cad){
        map<string,pair<db,db> >jaja;
         bool afirmo = false;

        string action, name; db value;
        while(cin>>action){
            if(action == "CLOSE"){
                //CLOSE
                cout<<"Day "<<(++day)<<endl;
                map<string,pair<db,db> >::iterator it;
                for(it = jaja.begin(); it != jaja.end(); it++){
                    cout<<it->first<<" $";
                    printf("%.2f", it->second.first); cout<<endl;
                }
                cout<<endl;
                break;
            }

            cin>>name;
            cin>>value;
            db save = 0.0;
            if(action == "ENTER"){
                if(jaja.find(name) ==  jaja.end()){//si no lo encuentra
                    //se viene la gran linea :v
                    jaja.insert(pair<string,pair<db,db> >(name, pair<db,db>(save, save)));
                } 
                jaja[name].second = value; 
            }else if(action == "EXIT") {jaja[name].first += (value-jaja[name].second)/10.0; /*debug(jaja[name].first);*/ }

        }
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
	
	//Animo, sales de gris :'v, haz upsolving cuando termine >:v
	//Despues comes :3
----------------------------------------------/
*/


