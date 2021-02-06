#include<bits/stdc++.h>


using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef long double dbl;
const int shortMax = 1001;

deque<deque<pair<int,int> > >graph(shortMax);

int minimoPeso(int dist[], bool procesados[], int tam){
    int answer = INT_MAX, answerIndex;
    for(int i=0;i<tam;i++){
        if(dist[i] < answer && procesados[i] == false){
            answer = dist[i];
            answerIndex = i;
        }
    }
    return answerIndex;
}


void dijkstra(int init, int tam){
    int dist[tam];
    bool procesados[tam] = {};
    for(int i=0;i<tam;i++)dist[i] = INT_MAX;

    dist[init] = 0;
    for(int count = 0; count<tam; count++){
        int u = minimoPeso(dist, procesados, tam);
        procesados[u] = true;

        deque<pair<int,int> >::iterator it;
        for(it = graph[u].begin(); it != graph[u].end(); it++){
            if(it->second != 0 && procesados[it->first] == false && dist[u] != INT_MAX
               && it->second + dist[u] < dist[it->first]){
                dist[it->first] = it->second + dist[u];
               }
        }

    }
    for(int i=0;i<tam;i++){
        cout<<"Distancia del nodo: "<<i<<" a punto de origen es: "<<dist[i]<<endl;
    }
}

//IT WORKS :D

int main()
{
    int nodos, arcos; cin>>nodos>>arcos;
    for(int i=0;i<arcos;i++){
        int u,v,p; cin>>u>>v>>p;
        graph[u].push_back(pair<int,int>(v,p));
        graph[v].push_back(pair<int,int>(u,p));
    }

    cout<<"Ingresa nodo de origen de busqueda: ";
    int init; cin>>init;

    dijkstra(init, nodos);


    return 0;
}
