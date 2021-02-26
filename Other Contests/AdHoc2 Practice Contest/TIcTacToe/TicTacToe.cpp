#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double dbl;
#define QuieroComer ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define FileIn freopen("input.txt", "r", stdin)
#define FileOut freopen("output.txt", "w", stdout)
#define endl "\n"
#define deb(x) cout<<"--> "<<x<<endl
int const MOD = 10e9+7;

deque<deque<char> >jaja(3);
bool afirmo;

bool verifWon(char thisOne){
  char ggnomas = thisOne;
  if(jaja[0][0] == ggnomas && jaja[1][1] == ggnomas && jaja[2][2] == ggnomas)return true;
  if(jaja[2][0] == ggnomas && jaja[1][1] == ggnomas && jaja[0][2] == ggnomas)return true;

  if(jaja[0][0] == ggnomas && jaja[0][1] == ggnomas && jaja[0][2] == ggnomas)return true;
  if(jaja[1][0] == ggnomas && jaja[1][1] == ggnomas && jaja[1][2] == ggnomas)return true;
  if(jaja[2][0] == ggnomas && jaja[2][1] == ggnomas && jaja[2][2] == ggnomas)return true;

  if(jaja[0][0] == ggnomas && jaja[1][0] == ggnomas && jaja[2][0] == ggnomas)return true;
  if(jaja[0][1] == ggnomas && jaja[1][1] == ggnomas && jaja[2][1] == ggnomas)return true;
  if(jaja[0][2] == ggnomas && jaja[1][2] == ggnomas && jaja[2][2] == ggnomas)return true;
  
return false;
  
  
}
int main()
{
    int casos ;cin>>casos;
    while(casos--){
        

        int xcount = 0, othercount = 0;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cin>>jaja[i][j];
                if(jaja[i][j] == 'X')xcount++;
                if(jaja[i][j] == 'O')othercount++;
            }
        }

       if(xcount == othercount && verifWon('X') == false)cout<<"yes"<<endl;
       else if(xcount == othercount+1 && verifWon('O') == false)cout<<"yes"<<endl;
       else cout<<"no"<<endl;


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
