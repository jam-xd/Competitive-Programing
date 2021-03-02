#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double dbl;
#define Fiaaaauuu ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define FileIn freopen("input.txt", "r", stdin)
#define FileOut freopen("output.txt", "w", stdout)
#define endl "\n"
#define deb(x) cout<<"--> "<<x<<endl
int const MOD = 10e9+7;

/*----------
1 - right
2 - left 
3 - down
4 - up
---------*/
int fromWhere(int x, int y, int n, int m){
    if(y == 0)return 1;
    else if(x == 0)return 2;
    else if(y == m-1)return 3;
    else if(x == n-1)return 4;
}

int mirror(int fromDirection, char thisOne){
    if(thisOne == '/'){
        if(fromDirection == 1)return 4;
        if(fromDirection == 2)return 3;
        if(fromDirection == 3)return 2;
        if(fromDirection == 4)return 1;
    }else{
        if(fromDirection == 1)return 3;
        if(fromDirection == 2)return 4;
        if(fromDirection == 3)return 1;
        if(fromDirection == 4)return 2;
    }
}

int main()
{
    //FileIn;
    //FileOut;
    int n,m; 
    int caso = 0;
    while(cin>>m>>n){
        if(n == 0 && m == 0)break;
        cout<<"HOUSE "<<(++caso)<<endl;
        char grid[n][m];

        pair<int,int>door;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>grid[i][j];
                if(grid[i][j] == '*')door = pair<int,int>(i,j);
            }
        }
        //cout<<"Cordinates of Door: "<<door.first<<" "<<door.second<<endl;
        int init = fromWhere(door.first, door.second, n,m);
        bool up, down, left, right;
        up = down = left = right = false;
        if(init == 1)right = true;
        else if(init == 2)down = true;
        else if(init == 3)left = true;
        else if(init == 4)up = true;

        //deb(init);
        //return 0;
        char current = grid[door.first][door.second];
        int x = door.first, y = door.second;

        bool foundWall = false;
        while(true){
            //cout<<"im stuck"<<endl;
            if(up == true){
                while(true){
                    x--;
                    current = grid[x][y];
                    if(current == 'x'){foundWall = true; grid[x][y] = '&'; break;}
                    if(current == '/' || current == '\\'){
                        int toward = mirror(4, current);
                        if(toward == 1)right = true;
                        else if(toward == 2)left = true;
                        else if(toward == 3)down = true;
                        else if(toward == 4)up = true;

                        up = false;
                        break;
                    }
                }
            }
            if(foundWall == true)break;
            if(down == true){
                while(true){
                    x++;
                    current = grid[x][y];
                    if(current == 'x'){foundWall = true; grid[x][y] = '&'; break;}
                    if(current == '/' || current == '\\'){
                        int toward = mirror(3, current);
                        if(toward == 1)right = true;
                        else if(toward == 2)left = true;
                        else if(toward == 3)down = true;
                        else if(toward == 4)up = true;

                        down = false;
                        break;
                    }
                }
            }
            if(foundWall == true)break;
            if(left == true){
                while(true){
                    y--;
                    current = grid[x][y];
                    if(current == 'x'){foundWall = true; grid[x][y] = '&'; break;}
                    if(current == '/' || current == '\\'){
                        int toward = mirror(2, current);
                        if(toward == 1)right = true;
                        else if(toward == 2)left = true;
                        else if(toward == 3)down = true;
                        else if(toward == 4)up = true;

                        left = false;
                        break;
                    }
                }
            }
            if(foundWall == true)break;
            if(right == true){
                while(true){
                    y++;
                    current = grid[x][y];
                    if(current == 'x'){foundWall = true; grid[x][y] = '&'; break;}
                    if(current == '/' || current == '\\'){
                        int toward = mirror(1, current);
                        if(toward == 1)right = true;
                        else if(toward == 2)left = true;
                        else if(toward == 3)down = true;
                        else if(toward == 4)up = true;

                        right = false;
                        break;
                    }
                }
            }
            if(foundWall == true)break;
        }
        /*---------------------------------*/
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<grid[i][j];
            }cout<<endl;
        }//cout<<endl;

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
