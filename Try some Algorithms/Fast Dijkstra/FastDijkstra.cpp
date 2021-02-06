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

deque<deque<pair<int,int> > >graph;
deque<int>distFromInit;


void dijkstra(int init){
    distFromInit.resize(graph.size());
    set<pair<int,int> >taskList;
    for(int i=0;i<graph.size();i++)distFromInit[i] = INT_MAX;
    distFromInit[init] = 0;
    taskList.insert(pair<int,int>(init, distFromInit[init]));

    while(taskList.empty() == false){
        pair<int,int>current = *taskList.begin();
        taskList.erase(taskList.begin());

        int currNode = current.first;
        int currDist = current.second;

        deque<pair<int,int> >::iterator it;
        for(it = graph[currNode].begin(); it != graph[currNode].end(); it++){
            int adjNode = it->first;
            int adjDist = it->second;
            if(distFromInit[currNode] + adjDist < distFromInit[adjNode]){
                if(distFromInit[adjNode] != INT_MAX){
                    taskList.erase(taskList.find(pair<int,int>(adjNode, distFromInit[adjNode])));
                }
                distFromInit[adjNode] = distFromInit[currNode] + adjDist;
                taskList.insert(pair<int,int>(adjNode, distFromInit[adjNode]));

            }
        }
    }
}

int main()
{
    int casos; cin>>casos;
    while(casos--){
        int nodos, arcos; cin>>nodos>>arcos;
        graph.resize(nodos);
        for(int i=0;i<arcos;i++){
            int u,v,peso;
            cin>>u>>v>>peso;
            graph[u].push_back(pair<int,int>(v,peso));
            graph[v].push_back(pair<int,int>(u,peso));
        }
    cout<<"---------------------------"<<endl;

    for(int i=0;i<nodos;i++){
        cout<<"Curren node: "<<i<<" { ";
        for(int j=0;j<graph[i].size();j++){
            cout<<graph[i][j].first<<",";
        }cout<<"}"; cout<<endl;
    }

    cout<<"---------------------------"<<endl;

    cout<<"Calculate Dijkstra from node: ";
    int init; cin>>init;

    dijkstra(init);
    for(int i=0;i<distFromInit.size();i++){
        cout<<"Distance from origin ["<<init<<"] to node ["<<i<<"] is "<<distFromInit[i]<<endl;
    }

    cout<<"Furulaaaa  :DD"<<endl;

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


