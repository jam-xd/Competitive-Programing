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

void dijkstra (int n, int m, pair<int,int>index){
    int x = index.first, y = index.second;
    distFromInit[x][y] = graph[x][y];
    set<pair<pair<int,int>, int> >taskList;
    taskList.insert(pair<pair<int,int>,int>(index, distFromInit[x][y]));

    while(taskList.empty() == false){
        //checkpoint;
        pair<pair<int,int>, int>current = *taskList.begin();
        taskList.erase(taskList.begin());

        pair<int,int>currNode = current.first;
        int currDist = current.second;
        int xx = currNode.first, yy = currNode.second;

        
        int adjDist;// taking the value of an unexistent value will make crash the program;

        /*----------------------------------------------------------------*/
        if(xx-1 >= 0 && xx-1<=n-1 && yy>=0 && yy<=m-1){
          //debug("arriba");
          adjDist = graph[xx-1][yy]; 
           if(distFromInit[xx][yy] + adjDist < distFromInit[xx-1][yy]){
              if(distFromInit[xx-1][yy] != INT_MAX){
                //debug("after this checkpoint");
                taskList.erase(taskList.find(pair<pair<int,int>,int>(pair<int,int>(xx-1,yy) , distFromInit[xx-1][yy])));
                //checkpoint;
              }
              distFromInit[xx-1][yy] = distFromInit[xx][yy] + adjDist;
              taskList.insert(pair<pair<int,int>,int>(pair<int,int>(xx-1,yy), distFromInit[xx-1][yy]));
          }
        }
        /*----------------------------------------------------------------*/
        if(xx+1 >= 0 && xx+1 <= n-1 && yy>=0 && yy<=m-1){
          //debug("abajo");
          adjDist = graph[xx+1][yy];
          if(distFromInit[xx][yy] + adjDist < distFromInit[xx+1][yy]){
            if(distFromInit[xx+1][yy] != INT_MAX){
              //debug("after this checkpoint");
              taskList.erase(taskList.find(pair<pair<int,int>,int>(pair<int,int>(xx+1,yy) , distFromInit[xx+1][yy])));
              //checkpoint;
            }
            distFromInit[xx+1][yy] = distFromInit[xx][yy] + adjDist;
            taskList.insert(pair<pair<int,int>,int>(pair<int,int>(xx+1,yy), distFromInit[xx+1][yy]));
          }
        }
        /*----------------------------------------------------------------*/
        if(yy-1 >= 0 && yy-1<= m-1 && xx>= 0 && xx<= n-1){
          //debug("izquierda");
          adjDist = graph[xx][yy-1];
          if(distFromInit[xx][yy] + adjDist < distFromInit[xx][yy-1]){
            if(distFromInit[xx][yy-1] != INT_MAX){
              //debug("after this checkpoint");
              taskList.erase(taskList.find(pair<pair<int,int>,int>(pair<int,int>(xx,yy-1) , distFromInit[xx][yy-1])));
              //checkpoint;
            }
            distFromInit[xx][yy-1] = distFromInit[xx][yy] + adjDist;
            taskList.insert(pair<pair<int,int>,int>(pair<int,int>(xx,yy-1), distFromInit[xx][yy-1]));
          }
        }
        /*----------------------------------------------------------------*/
        if(yy+1>=0 && yy+1<=m-1 && xx>=0 && xx<=n-1){
          adjDist = graph[xx][yy+1];
          //debug("derecha");
          if(distFromInit[xx][yy] + adjDist < distFromInit[xx][yy+1]){
            if(distFromInit[xx][yy+1] != INT_MAX){
              //debug("after this checkpoint");
              taskList.erase(taskList.find(pair<pair<int,int>,int>(pair<int,int>(xx,yy+1) , distFromInit[xx][yy+1])));
              //checkpoint;
            }
            distFromInit[xx][yy+1] = distFromInit[xx][yy] + adjDist;
            taskList.insert(pair<pair<int,int>,int>(pair<int,int>(xx,yy+1), distFromInit[xx][yy+1]));
          }
        }
        /*----------------------------------------------------------------*/
    }

}


int main()
{
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

        cout<<"___________________"<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<distFromInit[i][j]<<" ";
            }cout<<endl;
        }
        cout<<"___________________"<<endl;
    }
    return 0;
}

//In some cases, gives WA
// :'v
