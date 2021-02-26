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


bool visited[5][5] = {};

int seeOperations(int n, int x, int y){// pa debugear>:V
    cout<<"For Case N = "<<n<<endl;
    cout<<"Number N in cordinates: X="<<x<<" Y="<<y<<endl;
    for(int c=0;c<5;c++){
        for(int k = 0;k<5;k++){
            cout<<visited[c][k]<<" ";
        }cout<<endl;
    }
    cout<<"________________________"<<endl;
}

bool isFinish(){
    int current = 0;

    for(int i=0;i<5;i++){
        current = 0;
        for(int j=0;j<5;j++){
            if(visited[i][j] == false)break;
            else current++;
        }
         if(current == 5)return true;
    }
   
    for(int i=0;i<5;i++){
        current = 0;
        for(int j=0;j<5;j++){
            if(visited[j][i] == false)break;
            else current++;
        }
        if(current == 5)return true;
    }
    
    current = 0;
    for(int i=0;i<5;i++){
        if(visited[i][i] == false)break;
        else current++;
    }
    if(current == 5)return true;

    if(visited[4][0] == true && visited[3][1] == true && visited[2][2] == true && visited[1][3] == true && visited[0][4] == true)return true;

    return false;
}

int main()
{
    //FileIn;
    //FileOut;

    int casos; cin>>casos;
    while(casos--){
        for(int i=0;i<5;i++)for(int j=0;j<5;j++)visited[i][j] = false;
        map<int,pair<int,int> >grid;
        visited[2][2] = true;
 
        deque<deque<int> >jaja(5);
        for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
                if(i == 2 && j == 2)continue;
                cin>>jaja[i][j];
                grid[jaja[i][j]] = pair<int,int>(i,j);
            }
        }
        //cout<<"termino la lectura"<<endl;

        int answer = 0;
        bool listo = false;
        for(int i=0;i<75;i++){
            int n; cin>>n;
            if(listo == true)continue;
            pair<int,int>ggnomas;
            int x,y;
            ggnomas = grid[n];
            x = ggnomas.first, y = ggnomas.second;
            if(x == 0 && y == 0){
                if(jaja[0][0] == n)visited[0][0] = true;
            }else visited[x][y] = true;

            //seeOperations(n, x, y);

            if(isFinish() == true)listo = true;
            answer++;
        }

        cout<<"BINGO after "<<answer<<" numbers announced"<<endl;
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
