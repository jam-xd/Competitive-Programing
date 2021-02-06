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
#define checkpoint cout<<"|| It works"<<endl
int const MOD = 10e9+7;
int const N = 1005;

int graph[N][N];
int distFromInit[N][N] = {};
set<pair<pair<int,int>, int> >taskList;

void change(int xpoint, int ypoint, int currx, int curry, int n, int m){
    if(xpoint >= 0 && xpoint<=n-1 && ypoint>=0 && ypoint<=m-1){
        //debug("entra");
        int adjDist = graph[xpoint][ypoint]; 
        if(distFromInit[currx][curry] + adjDist < distFromInit[xpoint][ypoint]){
            if(distFromInit[xpoint][ypoint] != INT_MAX){
                //debug("after this checkpoint");
                if(taskList.find(pair<pair<int,int>,int>(pair<int,int>(xpoint,ypoint) , distFromInit[xpoint][ypoint])) != taskList.end())
                taskList.erase(taskList.find(pair<pair<int,int>,int>(pair<int,int>(xpoint,ypoint) , distFromInit[xpoint][ypoint])));
                //checkpoint;
            }
            distFromInit[xpoint][ypoint] = distFromInit[currx][curry] + adjDist;
            taskList.insert(pair<pair<int,int>,int>(pair<int,int>(xpoint,ypoint), distFromInit[xpoint][ypoint]));
        }
    }
}

void dijkstra (int n, int m, pair<int,int>index){
    
    int x = index.first, y = index.second;
    distFromInit[x][y] = graph[x][y];
    taskList.clear();
    taskList.insert(pair<pair<int,int>,int>(index, distFromInit[x][y]));

    while(taskList.empty() == false){
        //checkpoint;
        pair<pair<int,int>, int>current = *taskList.begin();
        taskList.erase(taskList.begin());

        pair<int,int>currNode = current.first;
        int currDist = current.second;
        int xx = currNode.first, yy = currNode.second;

        //int adjDist; taking the value of an unexistent value will make crash the program; 

        change(xx-1, yy, xx, yy, n, m);
        change(xx+1, yy, xx, yy, n, m);
        change(xx, yy-1, xx, yy, n, m);
        change(xx, yy+1, xx, yy, n, m);
        
    }

}


int main()
{
    //QuieroComer

    int casos; cin>>casos;
    while(casos--){
        int n,m; cin>>n>>m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>graph[i][j];
                distFromInit[i][j] = INT_MAX;
            }
        }

        pair<int,int>index;
        index = pair<int,int>(0,0); 

        dijkstra(n,m,index);

        cout<<"__Matriz con distancias calculadas___________"<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<distFromInit[i][j]<<" ";
            }cout<<endl;
        }
        cout<<"_______________________"<<endl;

        int answer = distFromInit[n-1][m-1];
        cout<<answer<<endl;
    }
    return 0;
}

// Something wrong i'll try later, TLE in some cases?!
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
----------------------------------------------*/