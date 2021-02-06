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

bool cordinate1[8][8] = {};
bool cordinate2[8][8] = {};

int toInt(char c){return (int)c-64;}
char toChar(int n){return (char)n+64;}

bool check(int x, int y){
  if(x%2 != 0 && y%2 != 0)return false;
  else if(x%2 == 0 && y%2 == 0)return false;
  else return true;
}

bool oneMove(int x, int y, int xx, int yy){
  int currx, curry;
  bool afirmo = false;

  currx = x, curry = y;
  while(currx >= xx || curry <= y){
    currx--; curry++;
    if(currx == xx && curry == yy){afirmo = true; break;}
  }
  currx = x, curry = y;
  while(currx >= xx || curry >=yy){
    currx--; curry--;
    if(currx == xx && curry == yy){afirmo = true; break;}
  }
  currx = x, curry = y;
  while(currx <= xx && curry >= yy){
    currx++; curry--;
    if(currx == xx && curry == yy){afirmo = true; break;}
  }
  currx = x, curry = y;
  while(currx <= xx && curry <= yy){
    currx++; curry++;
    if(currx == xx && curry == yy){afirmo = true; break;}
  }

  if(afirmo == true)return true;
  else return false;
}

void findPointOne(int x, int y){
  int currx, curry;

  currx = x, curry = y;
  while(true){
    if(currx >= 0 && currx <= 7 && curry >=0 && curry <= 7)cordinate1[currx][curry] = true;
    else break;
    currx--; curry++;
  }
  currx = x, curry = y;
  while(true){
    if(currx >= 0 && currx <= 7 && curry >=0 && curry <= 7)cordinate1[currx][curry] = true;
    else break;
    currx--; curry--;
  }

  currx = x, curry = y;
  while(true){
    if(currx >= 0 && currx <= 7 && curry >=0 && curry <= 7)cordinate1[currx][curry] = true;
    else break;
    currx++; curry--;
  }

  currx = x, curry = y;
  while(true){
    if(currx >= 0 && currx <= 7 && curry >=0 && curry <= 7)cordinate1[currx][curry] = true;
    else break;
    currx++; curry++;
  }
}

void findPoinTwo(int x, int y){
  int currx, curry;

  currx = x, curry = y;
  while(true){
    if(currx >= 0 && currx <= 7 && curry >=0 && curry <= 7)cordinate2[currx][curry] = true;
    else break;
    currx--; curry++;
  }
  currx = x, curry = y;
  while(true){
    if(currx >= 0 && currx <= 7 && curry >=0 && curry <= 7)cordinate2[currx][curry] = true;
    else break;
    currx--; curry--;
  }

  currx = x, curry = y;
  while(true){
    if(currx >= 0 && currx <= 7 && curry >=0 && curry <= 7)cordinate2[currx][curry] = true;
    else break;
    currx++; curry--;
  }

  currx = x, curry = y;
  while(true){
    if(currx >= 0 && currx <= 7 && curry >=0 && curry <= 7)cordinate2[currx][curry] = true;
    else break;
    currx++; curry++;
  }
}
  

int main()
{
  //me hice demasiada bola :v
  QuieroComer

    int casos; cin>>casos;
    while(casos--){
      for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
          cordinate2[i][j] = false;
          cordinate1[i][j] = false;
        }
      }
        char xx,xx2; int x,y, x2, y2; 
        cin>>xx>>y>>xx2>>y2;
        x = toInt(xx);
        x2 = toInt(xx2);

        bool firstCordinate = check(x,y);
        bool secondCordinate = check(x2,y2);
        // true = white, false = black

        if(firstCordinate != secondCordinate)cout<<"Impossible"<<endl;
        else{
          if(x == x2 && y == y2)cout<<"0 "<<xx<<" "<<y<<endl;
          else if(oneMove(x,y,x2,y2) == true)cout<<"1 "<<xx<<" "<<y<<" "<<xx2<<" "<<y2<<endl;
          else{
            findPointOne(x-1,y-1);
            findPoinTwo(x2-1,y2-1);

            pair<int,int>index;

            for(int i=0;i<8;i++){
              for(int j=0;j<8;j++){
                //cout<<cordinate1[i][j]<<" ";
                if(cordinate1[i][j] == true && cordinate2[i][j] == true){
                  index = pair<int,int>(i,j);
                  break;
                }
              }//cout<<endl;
            }
            //debug(index.first);
            //debug(index.second);
          cout<<"2 "<<xx<<" "<<y<<" "<<toChar(index.first+1)<<" "<<index.second+1<<" "<<xx2<<" "<<y2<<endl;
          }
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


